/*
 * cl_interface.h
 *
 *  Created on: 05-Jan-2023
 *      Author: shobhit
 */

#ifndef CL_INTERFACE_H_
#define CL_INTERFACE_H_

#include "basicCalc.h"
#include "equations.h"
#include "matrix.h"

void printCalcBoard();

// wrapper function for basicCalc file
void add_wrapper();
void sub_wrapper();
void mulp_wrapper();
void div_wrapper();
void power_wrapper();
void fact_wrapper();
void Ncr_wrapper();
void Npr_wrapper();

// wrapper function for equations file
void twoDegOneVar_wrapper(); // for quadratic equation
void oneDegTwoVar_wrapper(); // for 2 variable equation
void oneDegThreeVar_wrapper(); // for 3 variable linear equation

// wrapper function for matrix file
void matMul_wrapper();

#endif /* CL_INTERFACE_H_ */
