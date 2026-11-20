/* SPDX-Licence-Identifier: BSD 3 clause */

/* Ahmad M. Atwa @ My FreeBSD BOX */

#include<stdio.h>

int main()
{
	float arr1[2][2];
	float arr2[2][2];
	int i,j;
	j=0;

	printf("Enter the 1st Array Elements\n");
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
			printf("Arr-1 %d%d: ",i,j);
		       scanf("%f",&arr1[i][j]);
			}
		}
		


	printf("Enter the 2nd Array Elements\n");
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
			printf("Arr-2 %d%d: ",i,j);
		       scanf("%f",&arr2[i][j]);
			}
		}

	printf("Sum of Matrix:\n");

		
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
			printf(" %.2f ",arr1[i][j]+arr2[i][j]);
			}
		printf("\n"); /* Matching the instructor output behavior*/

		}



return 0;

}


					
