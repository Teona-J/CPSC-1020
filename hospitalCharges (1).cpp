// Teona Johnson 
// CPSC 1021
// Lab 04
// 06/03/2024
// Contains main()
// 1 hour

#include <iostream>
#include <iomanip>

#include "Patient.h"

using namespace std;

int main()	{
	Patient patient1;
	char patientType;
	double  roomRate,
			  hospCharges,
			  medCharges,
			  total;
	int numDays;

	cout << "This program will calculate a patient's hospital charges.\n" <<endl;

	cout << "Enter I for in-patient or O for out-patient: ";
	cin >> patientType;

	// set patient type
	patient1.setPatientType(patientType);


	//Outpatient
	if ( patient1.getPatientType () == 'O' ) 	{
		cout << "\nLab fees and other service charges ($): ";
		cin >> hospCharges;

		cout << "\nMedication charges ($): ";
		cin >> medCharges;

		// set other patient objects
		patient1.setServices(hospCharges);
		patient1.setMedication(medCharges);

		// calculate total charges
		total = patient1.calcTotalCharges();
		cout << "\nYour total hospital bills is $ " << fixed << setprecision(2) << total <<endl;
	}
	// Inpatient
	else	{
		cout << "\nNumber of days in the hospital: ";
		cin >> numDays;

		cout << "\nDaily room rate ($): ";
		cin >> roomRate;

		cout << "\nLab fees and other service charges ($): ";
		cin >> hospCharges;

		cout << "\nMedication charges ($): ";
		cin >> medCharges;

		// set other patient objects
		patient1.setDays(numDays);
		patient1.setRate(roomRate);
		patient1.setServices(hospCharges);
		patient1.setMedication(medCharges);

		// calculte total charges
		total = patient1.calcTotalCharges();
		cout << "\nYour total hospital bills is $" << fixed << setprecision(2) << total <<endl;

	}

	return 0;
}







