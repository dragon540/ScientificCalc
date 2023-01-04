/*
 * basicCalc.c
 *
 *  Created on: 04-Jan-2023
 *      Author: shobhit
 */

#include "basicCalc.h"

// basic functions
double add(double  inp1, double inp2) {
	return inp1 + inp2;
}

double sub(double  inp1, double inp2) {
	return inp1 - inp2;
}

double mulp(double  inp1, double inp2) {
	return inp1 * inp2;
}

double division(double  inp1, double inp2) {
	return inp1 /  inp2;
}

// advanced functions

double power(double base, double exp) {
	double result = 1;
	while(exp > 0) {
		result *= base;
		exp--;
	}
	return result;
}

double fact(double inp) {
	double res = 1;
	while(inp) {
		res *= inp;
		inp--;
	}
	return res;
}

double Ncr(double n, double r) {
	double result;
	if(n>r)
		result = fact(n)/(fact(r) * fact(n-r));
	else
		result = 1;

	return result;
}

double Npr(double n, double r) {
	double result;
	if(n>r)
		result = fact(n)/fact(n-r);
	else
		result = 1;

	return result;
}











