/*
 * matrix.c
 *
 *  Created on: 25-Jan-2023
 *      Author: shobhit
 */

#include <stdlib.h>
#include <stdio.h>

#include "matrix.h"

int** mat_mulp(int A[100][100], int B[100][100], int r_A, int c_A, int r_B, int c_B) {
	if(c_A != r_B) {
		fprintf(stderr, "%s", "Invalid operation");
	}
	else {
		// number of rows of product of matrix = number of rows of first matrix
		// number of columns of product of matrix = number of columns of second matrix

		// dynamically creating a matrix
		int **product = (int**)malloc(sizeof(int*) * r_A);

		for(int i = 0; i < r_A; i++) {
			*(product + i) = (int*)malloc(sizeof(int) * c_B);
		}

		// initialized required number of elements with 0
		for(int i=0; i<r_A; i++) {
			for(int j=0; j<c_B; j++) {
				product[i][j] = 0;
			}
		}
		int el_num = c_A; // = r_B
		// matrix multiplication
		for(int i=0; i<r_A; i++) {
			for(int j=0; j<c_B; j++) {
				for(int k=0; k<el_num; k++) {
					product[i][j] += A[i][k] * B[k][j];
				}
			}
		}
		return product;
	}
}


