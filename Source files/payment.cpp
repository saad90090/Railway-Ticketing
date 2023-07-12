#include "payment.h"
#include "ui_payment.h"
#include "bill.h"
Payment::Payment(QWidget *parent,trainInfo t) :
    QDialog(parent),
    ui(new Ui::Payment),
    t1(t)

{
    ui->setupUi(this);
    ui->frame_2->setVisible(false);
    ui->radioButton->setChecked(true);
    ui->carderror->setVisible(false);
    ui->cvverror->setVisible(false);
    ui->namerror->setVisible(false);
    ui->error->setVisible(false);
}

Payment::~Payment()
{
    delete ui;
}

void Payment::on_radioButton_clicked()
{
    ui->frame->setVisible(true);
    ui->frame_2->setVisible(false);
}


void Payment::on_radioButton_2_clicked()
{
    ui->frame->setVisible(false);
    ui->frame_2->setVisible(true);
}


void Payment::on_radioButton_3_clicked()
{
    ui->frame->setVisible(false);
    ui->frame_2->setVisible(true);
}


void Payment::on_pushButton_2_clicked()
{
    int count =0;
    QString Phoneno;
    Phoneno = ui->Phone->text();
    bool isPhoneValid = true;
    if(Phoneno.length()<11){
         isPhoneValid = false;
    }
    for (int i = 0; i < Phoneno.length(); i++) {
        if (Phoneno[i] < '0' || Phoneno[i] > '9') {
            isPhoneValid = false;
            break;
        }
    }
    if (!isPhoneValid) {
        ui->error->setVisible(true);
        ui->Phone->setStyleSheet("QLineEdit{border: 1px solid red; }");
    } else {
        ui->error->setVisible(false);
        ui->Phone->setStyleSheet("QLineEdit{border: 1px solid black; }");
        count++;
    }
    if(count==1){
    this->hide();
    Bill b1(nullptr,t1);
    b1.setModal(true);
    b1.exec();}
}


void Payment::on_pushButton_clicked()
{
    int count=0;
    QString Card = ui->card->text();
     bool isCardValid = true;
    if(Card.length()<16){
         isCardValid = false;
    }
    for(int i =0;i<Card.length();i++){
        if (Card[i] < '0' || Card[i] > '9') {
            isCardValid = false;
            break;
        }
    }
    if(!isCardValid){
        ui->carderror->setVisible(true);
    }
    else{
        ui->carderror->setVisible(false);
        count++;
    }
    QString CVV = ui->cvv->text();
    bool isCVVValid = true;
   if(CVV.length()<3){
        isCVVValid = false;
   }
   for(int i =0;i<CVV.length();i++){
       if (CVV[i] < '0' || CVV[i] > '9') {
           isCVVValid = false;
           break;
       }
   }
   if(!isCVVValid){
       ui->cvverror->setVisible(true);
   }
   else{
       ui->cvverror->setVisible(false);
       count++;
   }
   QString Name = ui->name->text();
   bool isNameValid = true;
  for(int i =0;i<Name.length();i++){
      if((Name[i] < '0' || Name[i] > '9')){
       isNameValid = false;
       break;
      }
  }
  if(isNameValid){
      ui->namerror->setVisible(true);
  }
  else{
      ui->namerror->setVisible(false);
      count++;
  }
  if(count==3){
    this->hide();
    Bill b1(nullptr,t1);
    b1.setModal(true);
    b1.exec();
  }
}

