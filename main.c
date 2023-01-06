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
	int a,b,c,x,y,z;
	scanf("%d%d%d%d%d%d",&a, &b, &c, &x, &y, &z);

	printCalcBoard();
	double sol1 = oneDegTwoVar(a, b, c, x, y, z).x;
	double sol2 = oneDegTwoVar(a, b, c, x, y, z).y;

	printf("x = %lf and y = %lf\n",sol1, sol2);

	return 0;
}


