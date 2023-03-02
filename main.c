/*
 * main.c
 *
 *  Created on: 04-Jan-2023
 *      Author: shobhit
 */
#include <stdio.h>
#include <stdlib.h>

#include "cl_interface.h"
#include "matrix.h"
#include "imag_num.h"

int main(int argc, char *argv[]) {

    //matMul_wrapper();
    struct imag_num A, B;
    A.real = 3;
    A.cmplx = -1;
    B.real = 2;
    B.cmplx = -2;

    printf("%lf + j%lf\n", imag_div(A, B).real, imag_div(A, B).cmplx);

	return 0;
}


