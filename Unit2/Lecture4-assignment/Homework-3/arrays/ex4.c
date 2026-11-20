/* SPDX-Licence-Identifier: BSD 3 clause */

/* Ahmad M. Atwa @ My FreeBSD BOX */


/* since no run time storage allocation is used
 * I'm using a default max for user input 
 * and to get ride of using magic numbers */

#define MAX (10) 

#include<stdio.h>

int main()
{
	float input[MAX],user_input;
	int i,user_max,user_location; 

	printf("Enter the numbers of elements (MAX=10): ");
	scanf("%d",&user_max);

		for(i=0;i<user_max;i++){
			printf("Enter number-%d:",i+1);
			scanf("%f",&input[i]);
		}

		printf("your list:\n");

		for(i=0;i<user_max;i++){
			printf("%.1f ",input[i]);
		}
	
		printf("\nEnter the element to be inserted: ");
		scanf("%f",&user_input);
		printf("Enter the location: ");
		scanf("%d",&user_location);

		for(i=user_max+1;i>=0;i--){
		input[i]=input[i-1];
		printf("%.1f ",input[i]);
		
			if(i==(user_location-1)){
			input[user_location-1]=user_input;
			printf("\n");
			break;
			}
		}

		
		for(i=0;i<=user_max;i++){
			printf("%.1f ",input[i]);
		}
	printf("\n");	
	


return 0;

}


					
