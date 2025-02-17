// Teona Johnson
// CPSC 1021
// Lab 5
// 07/01/2024
// contains function definitions for vehicle objects

#include <string>

#include "vehicle.h"

using namespace std;

// GAS CAR
// paramterized constructor implementation
GasCar::GasCar( string ma, string mo, string p, int y, int mi ) : make(ma), model(mo), plate(p), year(y), miles(mi) {}
// acessors
string GasCar::getMake()	{
	return make;
}

string GasCar::getModel()	{
	return model;
}

string GasCar::getPlate()	{
	return plate;
}

int GasCar::getYear()	{
	return year;
}

int GasCar::getMiles()	{
	return miles;
}

// MOTORCYCLE
// paramterized constructor implementation
Motorcycle::Motorcycle( string ma, string mo, string p, string t, int y ) : make(ma), model(mo), plate(p), type(t), year(y) {}
// acessors
string Motorcycle::getMake()	{
	return make;
}

string Motorcycle::getModel()	{
	return model;
}

string Motorcycle::getPlate()	{
	return plate;
}

string Motorcycle::getType()	{
	return type;
}

int Motorcycle::getYear ()	{
	return year;
}

// Electric Car
// paramterized constructor implementation
ElecCar::ElecCar( string ma, string mo, string p, string q, int y ) : make(ma), model(mo), plate(p), qCharge(q), year(y) {}
// acessors
string ElecCar::getMake()	{
	return make;
}

string ElecCar::getModel()	{
	return model;
}

string ElecCar::getPlate()	{
	return plate;
}

string ElecCar::getQCharge()	{
	return qCharge;
}

int ElecCar::getYear()	{
	return year;
}




