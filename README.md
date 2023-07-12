# Railway-Ticketing
The railway ticketing system is a user-friendly application built using the C++ Qt framework. It provides a seamless experience for users to book and manage their train tickets. Let's go through the different pages and functionalities of the system:

Login Page: The system starts with a login page where users can enter their credentials to access their account. If users are new and don't have an account, they can click on the "Sign Up" button to create a new account.

Sign Up Page: This page allows new users to register by providing their details such as name, email, and password. After successful registration, the system redirects them to the ticket booking page.

Ticket Booking/Management Page: Once logged in, users are directed to a page where they can book a new ticket or manage their existing bookings. The page provides options for selecting the desired location, date of travel, and the number of passengers.

Train Selection Page: After providing the necessary details, users are presented with a list of available trains. The page displays relevant information about each train, such as train number, departure and arrival time, and duration of the journey. Users can choose their preferred train from the list.

Seat Selection Page: Once a train is selected, users are directed to the seat selection page. The available seats are displayed in green color, indicating they can be booked. Occupied seats are shown in red color. Users can choose their desired seats based on availability.

Payment Section: After selecting the seats, users proceed to the payment section. Here, they can choose their preferred payment method and provide the necessary details to complete the transaction securely. The system verifies the payment and confirms the booking.

Ticket Display: Once the payment is successful, users are shown a ticket confirmation page. The page displays all the relevant details of the booked ticket, including the train details, seat numbers, passenger names, and the total fare.

PDF Generation: At the end of the process, users have the option to generate a PDF version of their ticket. This feature allows users to download and print their tickets for offline reference.

SQL Database: The system utilizes an SQL database to store and manage user information, train details, seat availability, and booking records. The database ensures efficient data storage and retrieval, enabling seamless ticket booking and management.

Overall, the railway ticketing system provides a comprehensive solution for users to book, manage, and generate tickets for train journeys. Its intuitive user interface, coupled with the C++ Qt framework and SQL database integration, ensures a robust and efficient ticketing experience.
