/* SPDX-Licence-Identifier: BSD 3 clause */

/* Ahmad M. Atwa @ My FreeBSD BOX */

#define MAX (10)

#include<stdio.h>

int main()
{
	float arr[MAX];
	int user_input_size;
	float user_search;
	int i;

	/* taking user input */

	printf("Enter the size (MAX=10):");
	scanf("%d",&user_input_size);

		for(i=0;i<user_input_size;i++){
			printf("Element-%d: ",i+1);
		       scanf("%f",&arr[i]);
		}

		printf("Enter an element to search for: ");
		scanf("%f",&user_search);

			for(i=0;i<=user_input_size;i++){
			
				if(arr[i]==user_search){
				printf("Number found at location: %d\n",i+1);
				break;
				}
					if(i==user_input_size){
		 			printf("No match is found!\n");
					}
			}
			
return 0;
}
