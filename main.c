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

int main(int argc, char *argv[]) {

	//twoDegOneVar_wrapper();
	//oneDegTwoVar_wrapper();
	//oneDegThreeVar_wrapper();
	int A[100][100];
	int B[100][100];

	A[0][0] = 1;	A[0][1] = 0;	A[0][2] = 0;
	A[1][0] = 0;	A[1][1] = 1;	A[1][2] = 0;
	A[2][0] = 0;	A[2][1] = 0;	A[2][2] = 1;

	B[0][0] = 1;	B[0][1] = 0;	B[0][2] = 0;
	B[1][0] = 0;	B[1][1] = 1;	B[1][2] = 0;
	B[2][0] = 0;	B[2][1] = 0;	B[2][2] = 1;

	int **pro = mat_mulp(A, B, 3, 3, 3, 3);
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			printf("%d ", pro[i][j]);
		}
		printf("\n");
	}
	free(pro);

	return 0;
}


