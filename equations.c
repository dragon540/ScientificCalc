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


// Quadratic equation
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

// // Two variable linear equation
struct sol oneDegTwoVar(double a1, double b1, double c1, double a2, double b2, double c2) {
	// form of equation
	// a1(x) + b1(y) = c1
	// a2(x) + b2(y) = c2

	struct sol s;

	// solution
	/*
	 * 	a1(x) + b1(y) = c1..........(i)
		a2(x) + b2(y) = c2..........(ii)

	-> (a1/a2)[a2(x) + b2(y) = c2]
	-> a1(x) + (a1/a2)b2(y) = (a1/a2)c2..........(iii)

	using (i) and (iii)
    	{(a1/a2)c2 - c1}y = {(a1/a2)c2 - c1}
    	y = {(a1/a2)c2 - c1} / {(a1/a2)c2 - c1}

    	x = (c1 - b1[ {(a1/a2)c2 - c1} / {(a1/a2)c2 - c1} ] )/a1
	 */


	s.y = (((a1 / a2) * c2) - c1) / (((a1 / a2) * b2) - b1);
	s.x = (c1 - b1*(s.y)) / a1 ;

	return s;

}

































