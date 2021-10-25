#include <stdio.h>
#include <stdlib.h>

int main() {
	int row, col, i, j;
	int **matrix1, **matrix2, **sum;

	printf("Enter the size of the matrix : ");
	scanf("%d %d", &row, &col);
	printf("Matrix size : [%d][%d]", row, col);

	matrix1 = (int **)malloc(row *sizeof(int *));
	matrix2 = (int **)malloc(row * sizeof(int *));
	sum = (int **)malloc(row * sizeof(int *));
	

	for(i=0; i<row; i++) {
		matrix1[i] = (int **)malloc(col * sizeof(int *));
		matrix2[i] = (int **)malloc(col * sizeof(int *));
		sum[i] = (int **)malloc(col * sizeof(int *));
	}


	printf("First Matrix\n");
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			matrix1[i][j] = rand() % 10;
			printf("%d ", matrix1[i][j]);
		}
		printf("\n");
	}
	printf("------------------\n");


	printf("Second Matrix\n");
        for(i=0; i<row; i++) {
                for(j=0; j<col; j++) {
                        matrix2[i][j] = rand() % 10;
                        printf("%d ", matrix2[i][j]);
                }
                printf("\n");
	}
	printf("------------------\n");
	

	printf("The sum of two matrices\n");
	for(i=0; i<row; i++) {
                for(j=0; j<col; j++) {
                        sum[i][j] = matrix1[i][j] + matrix2[i][j];
                        printf("%d ", sum[i][j]);
                }
                printf("\n");
        }

	
	for(i=0; i<row; i++){
		free(matrix1[i]);
		free(matrix2[i]);
		free(sum[i]);
	}

	free(matrix1);
	free(matrix2);
	free(sum);

}
	
