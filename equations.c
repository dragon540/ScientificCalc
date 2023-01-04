/*
 * equations.c
 *
 *  Created on: 05-Jan-2023
 *      Author: shobhit
 */

#include <stdlib.h>
#include <math.h>

#include "equations.h"

#define INT_MIN -2147483648;

struct roots twoDegOneVar(double a, double b, double c) {
	// form of equation is
	// ax^2 + bx = c

	//struct roots {
		//double r1, r2;
	//};
	struct roots r;
	if(((b*b) - 4*a*(-c)) >= 0) {
		double discrim = sqrt(((b*b) - 4*a*(-c)));

		r.r1 = (-b + discrim) / 2;
		r.r2 = (-b - discrim) / 2;
	}
	else {
		r.r1 = INT_MIN;
		r.r2 = INT_MIN;
	}

	return r;

}


