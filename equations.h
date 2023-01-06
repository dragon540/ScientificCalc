/*
 * equations.h
 *
 *  Created on: 05-Jan-2023
 *      Author: shobhit
 */

#ifndef EQUATIONS_H_
#define EQUATIONS_H_

/**
 * Header file
 * This file contains function declarations for functions related to equations
 * 1 variable - 2 degree equation solver
 * 2 variable - 1 degree equation solver
 * 3 variable - 1 degree equation solver
 */

// Quadratic equation
struct roots {
	double r1, r2;
};
struct roots twoDegOneVar(double a, double b, double c);

// Two variable linear equation
struct sol {
	double x, y;
};
struct sol oneDegTwoVar(double a1, double b1, double c1, double a2, double b2, double c2);

#endif /* EQUATIONS_H_ */
