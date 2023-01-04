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

struct roots {
	double r1, r2;
};
struct roots twoDegOneVar(double a, double b, double c);


#endif /* EQUATIONS_H_ */
