/*
 * main.c
 *
 *  Created on: 04-Jan-2023
 *      Author: shobhit
 */

#include <stdio.h>
#include <stdlib.h>

#include "basicCalc.h"

int main(int argc, char *argv[]) {
	int x,y;
	scanf("%d%d",&x, &y);

	printf("%lf\n", Ncr(x, y));
	return 0;
}


