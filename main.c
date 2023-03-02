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
    struct imag_num_RectForm A, B;
    A.real = 16;
    A.cmplx = 51;
    B.real = 2;
    B.cmplx = -2;

    struct imag_num_PolForm C;
    C.magnitude = 53.450912;
    C.angle = 1.266795;

    printf("%lf %lf\n", imagNum_RectToPol(A).magnitude, imagNum_RectToPol(A).angle);
    printf("%lf + j%lf\n", imagNum_PolToRect(C).real, imagNum_PolToRect(C).cmplx);

	return 0;
}


