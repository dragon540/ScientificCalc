/*
 * cl_interface.c
 *
 *  Created on: 05-Jan-2023
 *      Author: shobhit
 */

/*
 * This file provides functions which are required to provide command line interface to the user
 */

#include "cl_interface.h"

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

