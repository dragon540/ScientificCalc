/*
 * cl_interface.c
 *
 *  Created on: 05-Jan-2023
 *      Author: shobhit
 */

/*
 * This file provides functions which are required to provide command line interface to the user
 * And wrapper function of all functionalities
 */

#include "cl_interface.h"
#include "basicCalc.h"
#include "equations.h"

void printCalcBoard() {
	/**
	 * Basic board for now
	 * _____________
	 * _____________
	 * | + | - | * |
	 * | / |x^y| ! |
	 * | NpR | NcR |
	 * _____________
	 */

	printf("%s\n", "_____________");
	printf("%s\n", "_____________");
	printf("%s\n", "| + | - | * |");
	printf("%s\n", "| / |x^y| ! |");
	printf("%s\n", "| NpR | NcR |");
	printf("%s\n", "_____________");

}

// wrapper function for basicCalc file
void add_wrapper() {

}
void sub_wrapper() {

}
void mulp_wrapper() {

}
void div_wrapper() {

}
void power_wrapper() {

}
void fact_wrapper() {

}
void Ncr_wrapper() {

}
void Npr_wrapper() {

}

// wrapper function for equations file
void twoDegOneVar_wrapper() {					// for 1 variable quadratic equation
	double a, b, c;
		printf("a = ");
		scanf("%lf", &a);
		printf("b = ");
		scanf("%lf", &b);
		printf("c = ");
		scanf("%lf", &c);

		printf("x1 = %lf and x2 = %lf\n", twoDegOneVar(a, b, c).r1, twoDegOneVar(a, b, c).r2);
}
void oneDegTwoVar_wrapper() {					// for 2 variable linear equation
	double a1, b1, c1, a2, b2, c2;
		printf("a1 = ");
		scanf("%lf", &a1);
		printf("b1 = ");
		scanf("%lf", &b1);
		printf("c1 = ");
		scanf("%lf", &c1);

		printf("a2 = ");
		scanf("%lf", &a2);
		printf("b2 = ");
		scanf("%lf", &b2);
		printf("c2 = ");
		scanf("%lf", &c2);

		printf("x = %lf\ny = %lf\n", oneDegTwoVar(a1, b1, c1, a2, b2, c2).x, oneDegTwoVar(a1, b1, c1, a2, b2, c2).y);
}
void oneDegThreeVar_wrapper() {					// for 3 variable linear equation
	double a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3;
		printf("a1 = ");
		scanf("%lf", &a1);
		printf("b1 = ");
		scanf("%lf", &b1);
		printf("c1 = ");
		scanf("%lf", &c1);
		printf("d1 = ");
		scanf("%lf", &d1);

		printf("a2 = ");
		scanf("%lf", &a2);
		printf("b2 = ");
		scanf("%lf", &b2);
	    printf("c2 = ");
		scanf("%lf", &c2);
		printf("d2 = ");
		scanf("%lf", &d2);

		printf("a3 = ");
		scanf("%lf", &a3);
		printf("b3 = ");
		scanf("%lf", &b3);
	    printf("c3 = ");
		scanf("%lf", &c3);
		printf("d3 = ");
		scanf("%lf", &d3);

		printf("x = %lf\ny = %lf\nz = %lf\n", oneDegThreeVar(a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3).x, oneDegThreeVar(a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3).y, oneDegThreeVar(a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3).z);
}



