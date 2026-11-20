/* SPDX-Licence-Identifier: BSD 3 clause */

/* Ahmad M. Atwa @ My FreeBSD BOX */

#define MAX (10)

#include<stdio.h>

int main()
{
	float arr[MAX][MAX];
	int input1,input2;
	int i,j;

	/* taking user input */

	printf("Enter the matrix size (MAX=10):");
	scanf("%d%d",&input1,&input2);

		for(i=0;i<input1;i++){
			for(j=0;j<input2;j++){
			printf("Array-%d%d: ",i,j);
		       scanf("%f",&arr[i][j]);
			}
		}	
		

		/* Printing the user matrix */

	printf("Printing your original matrix:\n");
		for(i=0;i<input1;i++){
			for(j=0;j<input2;j++){
		       printf("%.1f ",arr[i][j]);
			}
			printf("\n");
		}

		/* printing the transpose */


	printf("Printing the transpose matrix:\n");
		for(i=0;i<input1;i++){
			for(j=0;j<input2;j++){
		       printf("%.1f ",arr[j][i]);
			}
			printf("\n");
		}



return 0;

}
