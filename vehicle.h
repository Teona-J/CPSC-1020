// Teona Johnosn
//cpsc 1021
// Lab 5
// 07/01/2024
// contains the header file for vehicle objects

#include <string>

#ifndef VEHICLE_H
#define VEHICLE_H

using namespace std;

// GAS CAR
class GasCar	{
	private:
				string make,
				       model,
						 plate;

				int    year,
				       miles;
	
	public:
				// paramterized constructor
				GasCar( string ma, string mo, string p, int y, int mi );
				// getters
				string getMake();
				string getModel();
				string getPlate();
				int getYear();
				int getMiles();

};

// MOTORCYCLE
class Motorcycle	{
	private:
				string make,
				       model,
						 plate,
						 type;

				int    year;
	
	public:	
				// paramterized constructor
				Motorcycle( string ma, string mo, string p, string t, int y );
				// getters
				string getMake();
				string getModel();
				string getPlate();
				string getType();
				int getYear();

};

// ELECTRIC CAR
class ElecCar	{
	private:
				string make,
				       model,
						 plate,
						 qCharge;

				int    year;
	
	public: 
				// paramterized constructor
				ElecCar( string ma, string mo, string p, string q, int y );
				// getters
				string getMake();
				string getModel();
				string getPlate();
				string getQCharge();
				int getYear();
};
				
#endif
