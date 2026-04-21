Brief explanation of each class and its responsibility :

	Class person :
	
•	Responsibility :Stores core identity data 
This is the base class(parent class) it collects general information related to all   individuals such as  (Name, phone number, email) .

	Class client:
	
•	Responsibility :customer specific record.
 This is a derived class from the parent class its responsibility is related to the users specific data such as payment methods ,booking history.
Service providers 

	Class service:
	
•	Responsibility: Defines shared attributes.
    it’s a base class of all services the company provides it holds the basic items that every class has (Name, price).
    
	Class catering:
•	Responsibility: Handels food and beverages .
 it is a class that inherits from the bass class (service) which hold anything related to food and beverages that the company can provide It includes a menu and guest count .
 
	Class decoration:
	
•	Responsibility: Manages aesthetic event styling.
It inherits from the base class (service), manages the theme of the event .

	Class entertainment:
	
•	Responsibility: Coordinates performers and activities .
It inherits from the base class(service), handles the scheduling and requirements for performers, DJs, or guest speakers.

Class photography:

•	Responsibility: media capture 
 It inherits from the base class (service),manages the media requirement , number of photographers ,hours of coverage.
 
 Class venue:
 
•	Responsibility: Manages location and capacity.
 class that specifies the physical location where the event happens it stores details about the venue. Such as (location, capacity , rental price ,indoor or outdoor)it also checks the availability of the venue at that specific date.
 
	Class event :
	
•	Responsibility: Connects all events components.
This class coordinates the details , its job is to link a specific client to a specific venue and list the services.

Class booking: 

•	Responsibility: Process payments.

This class calculates the final bill .

