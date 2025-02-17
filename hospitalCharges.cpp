// Teona Johnson 
// CPSC 1021
// Lab 02
// 05/03/2024
// Contains main()
// 1 hour

#include <iostream>
#include <iomanip>

#include "calcTotalCharges.h"
#include "validateUserInput.h"

using namespace std;

int main()	{
	char patientType;
	double  roomRate = 0,
			  hospCharges = 0,
			  medCharges = 0,
			  total;
	int goAgain = 1,
		 numDays = 0;

	cout << "This program will calculate a patient's hospital charges.\n" <<endl;
	
	while (goAgain)	{
		cout << "Enter I for in-patient or O for out-patient: ";
		cin >> patientType;
		
		// Inpatient
		if ( patientType == 'I' )	{
			cout << "\nNumber of days in the hospital: ";
			cin >> numDays;

			cout << "\nDaily room rate ($): ";
			cin >> roomRate;

			cout << "\nLab fees and other service charges ($): ";
			cin >> hospCharges;

			cout << "\nMedication charges ($): ";
			cin >> medCharges;

			goAgain = 0;

			
			validateUserInput(numDays, roomRate, hospCharges, medCharges);
				if ( validateUserInput(numDays, roomRate, hospCharges, medCharges )== true)	{
					total = calcTotalCharges( numDays, roomRate, hospCharges, medCharges);
					cout << "\nYour total hospital bills is $" << fixed << setprecision(2) << total <<endl;
				}

				else	{
					cout << "Invalid input. Goodbye!\n" <<endl;
					exit(1);
				}
		}
		
		//Outpatient
		else if ( patientType == 'O' )	{
			cout << "\nLab fees and other service charges ($): ";
			cin >> hospCharges;

			cout << "\nMedication charges ($): ";
			cin >> medCharges;

			goAgain = 0;

			
			validateUserInput(numDays, roomRate, hospCharges, medCharges);
				if ( validateUserInput(numDays, roomRate, hospCharges, medCharges )== true)	{
					total = calcTotalCharges( hospCharges, medCharges);
					cout << "\nYour total hospital bills is $ " << fixed << setprecision(2) << total <<endl;
				}

				else	{
					cout << "Invalid input. Goodbye!\n" <<endl;
					exit(1);
				}
		}

		else	{
			cout << "Invalide choice" <<endl;
			goAgain = 1;
		}
	}

	return 0;
}





	

