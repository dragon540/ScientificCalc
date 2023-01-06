/*
 * main.c
 *
 *  Created on: 04-Jan-2023
 *      Author: shobhit
 */

#include <stdio.h>
#include <stdlib.h>

#include "basicCalc.h"
#include "equations.h"
#include "cl_interface.h"

int main(int argc, char *argv[]) {
	printCalcBoard();

	int a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3;

	scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&a1, &b1, &c1, &d1, &a2, &b2, &c2, &d2, &a3, &b3, &c3, &d3);

	double sol1 = oneDegThreeVar(a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3).x;
	double sol2 = oneDegThreeVar(a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3).y;
	double sol3 = oneDegThreeVar(a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3).z;

	printf("x = %lf\ny = %lf\nz = %lf",sol1, sol2, sol3);

	return 0;
}


