/* Teona Johnson
	03/12/2024
	001
	Lab 8
	Car loan calculator header file
*/
#ifndef DEFS_H
#define DEFS_H

#include <stdio.h>
#include <math.h>
#define NUM_LINES 3
#define MAX_LENGTH 95

void initArray(char theArray[][MAX_LENGTH]);
double getMonthlyPmt();
void printAffordability(char theArray[][MAX_LENGTH],
double monthlyPayment, int monthlySalary);

#endif
