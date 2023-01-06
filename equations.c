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
struct sol_2 oneDegTwoVar(double a1, double b1, double c1, double a2, double b2, double c2) {
	// form of equation
	// a1(x) + b1(y) = c1
	// a2(x) + b2(y) = c2

	struct sol_2 s;

	/**
	 * 	SOLUTION
	 *  a1(x) + b1(y) = c1..........(i)
		a2(x) + b2(y) = c2..........(ii)

	-> (a1/a2)[a2(x) + b2(y) = c2]
	-> a1(x) + (a1/a2)*b2(y) = (a1/a2)*c2..........(iii)

	using (i) and (iii)
    	{((a1/a2)*b2) - b1}y = {((a1/a2)*c2) - c1}

    	y = {((a1/a2)*c2) - c1} / {((a1/a2)*b2) - b1}
    	x = (c1 - b1*y) / a1

	 **/

	s.y = (((a1 / a2) * c2) - c1) / (((a1 / a2) * b2) - b1);
	s.x = (c1 - b1*(s.y)) / a1 ;

	return s;
}

// Three variable linear equation
struct sol_3 oneDegThreeVar(double a1, double b1, double c1,double d1, double a2, double b2, double c2, double d2, double a3, double b3, double c3, double d3) {
	// form of equation is
	// a1(x) + b1(y) + c1(z) = d1
	// a2(x) + b2(y) + c2(z) = d2
	// a3(x) + b3(y) + c3(z) = d3

	struct sol_3 u;

	double temp_a1, temp_b1, temp_a2, temp_b2, temp_c1, temp_c2;

	// coefficient of y from 1st newly created equation
	temp_a1 = ((a1/a2) * b2) - b1;
	// coefficient of z from 1st newly created equation
	temp_b1 = ((a1/a2) * c2) - c1;
	// coefficient of constant term of 1st newly created equation
	temp_c1 = ((a1/a2) * d2) - d1;

	// coefficient of y from 2nd newly created equation
	temp_a2 = ((a1/a3) * b3) - b1;
	// coefficient of z from 2nd newly created equation
	temp_b2 = ((a1/a3) * c3) - c1;
	// coefficient of constant term of 2nd newly created equation
	temp_c2 = ((a1/a3) * d3) - d1;

	u.y = oneDegTwoVar(temp_a1, temp_b1, temp_c1, temp_a2, temp_b2, temp_c2).x;
	u.z = oneDegTwoVar(temp_a1, temp_b1, temp_c1, temp_a2, temp_b2, temp_c2).y;

	// substituting values of y and z in first equation to find x
	u.x = (d1 - (c1 * u.z) - (b1 * u.y) ) / a1;

	return u;
}































