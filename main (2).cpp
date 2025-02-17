// Teona Johnson
// CPSC 1021
// Lab 5
// 07/01/2024
// contains main ()

#include <iostream>
#include <string>
#include <limits>

#include "person.h"
#include "vehicle.h"
#include "Invoice.h"

using namespace std;

int main ()	{
	string vType,
	       pType,
			 make,
			 model,
			 plate,
			 add,
			 email,
			 qCharge,
			 type,
			 soc,
			 level,
			 status,
			 dep,
			 rideShare,
			 name;

	int    year,
	       miles,
			 iD;

	double price,
	       fee,
			 discount;

	Resident resident ("", "", "", "", "");
	Commuter commuter ("", "", "", "", "");
	Employee employee ("", "", "", "", 0);
	GasCar gasCar ("", "", "", 0, 0);
	Motorcycle motorcycle ("", "", "", "", 0);
	ElecCar elecCar ("", "", "", "", 0);


	cout << "Welcome to CU Parking Services. Please start by providing vehicle info" << endl;
	cout <<"\nPlease enter the make of the vehicle: ";
	getline( cin, make);

	cout <<"\nPlease enter the model of the vehicle: ";
	getline( cin, model);

	cout <<"\nPlease enter the plate: ";
	getline( cin, plate);

	cout <<"\nPlease enter vehcile type (Gas , Electric, Motorcycle): " ;
	getline( cin,vType );


	
	// Gas car
	if ( vType == "Gas" )	{

		cout <<"\nPlease enter the year the car was made: ";
		cin >> year;

		cout <<"\nPlease enter the mileage: ";
		cin >> miles;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


	
		// gas price
		price = 300;

		// create and build  object
		gasCar = GasCar(make, model, plate, year, miles);
	

	}else if ( vType == "Electric" )	{

		cout <<"\nPlease enter the year the car was made: ";
		cin >> year;

		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout <<"\nDoes your car have quick charge? ( yes or no ): ";
		getline( cin, qCharge);

		// discount for electric vehicle
		discount = -50;

		// electric price
		price = 250;

		// create ad build object
		elecCar = ElecCar( make, model, plate, qCharge, year);


	}else if ( vType == "Motorcycle")	{

		cout <<"\nPlease enter the year the vehicle was made: ";
		cin >> year;

		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout <<"\nWhat type of vehicle? ( scooter, moped, motorcycle): ";
		getline(cin, type);

	
		// discount for motorcycle
		discount = -60;

		// motorcycle price
		price = 300;

	// create and build object
		motorcycle = Motorcycle( make, model, plate, type, year);
	
	}else	{
		cout << "Invalid vehicle type." << endl;
		exit(1);
	}



	cout <<"\nThank You for your vehicle information";
	cout <<"\nPlease enter your full name: ";
	getline (cin, name);
	
	cout <<"\nPlease enter your full address: ";
	getline( cin, add);

	cout <<"\nPlease enter your email: ";
	getline( cin, email);

	cout <<"\nPlease enter your user type (Resident, Commuter, Employee: ";
	getline( cin, pType);

	if ( pType == "Resident" )	{

		cout <<"\nPlease enter your level ( freshman, sophmore, junior, senior): ";
		getline( cin, level);

		cout <<"\nAre you apart of Greek life? ( yes or no ): ";
		getline(cin, soc);


		// registration fee
		fee = 60;

		// create and build object
		resident = Resident( name, add, email, soc, level);


	}else if ( pType == "Commuter")	{

		cout <<"\nPlease enter your credit hour type ( full-time or part-time): ";
		getline (cin, status);

		cout <<"\nWill you be ride sharing? ( yes or no): ";
		getline (cin, rideShare);


		// registration fee
		fee = 45;

		// create and build object
		commuter = Commuter( name, add, email, status, rideShare);


	}else if ( pType == "Employee")	{

		cout <<"\nPlease enter your employee ID number: ";
		cin >> iD;

		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout <<"\nPlease enter the department you work in: ";
		getline( cin, dep);

	
		// employee fee
		fee = 30;
	
	// create abd build object
		employee = Employee( name, add, email, dep, iD);
	}else {
		cout << "Invalid user type entered." << endl;
		exit(1);
	}

	
	// create and build object
	Invoice invoice(price, fee, discount, vType, pType);
	
	double total;

	total = invoice.calcTotal();

	invoice.printInvoice( total,  gasCar,  motorcycle, elecCar, resident, commuter, employee);

   return 0;
}












		

		


