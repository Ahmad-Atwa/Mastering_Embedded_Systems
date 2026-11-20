/* SPDX-Licence-Identifier: BSD 3 clause */

/* Ahmad M. Atwa @ My FreeBSD BOX */


/* since no run time storage allocation is used
 * I'm using a default max for user input 
 * and to get ride of using magic numbers */

#define MAX (10) 

#include<stdio.h>

int main()
{
	float input[MAX],avr;
	avr=0; /*intial value */
	int i,user_data;

	printf("Enter the numbers of data (MAX=10): ");
	scanf("%d",&user_data);

		for(i=0;i<user_data;i++){
			printf("Enter number: ");
			scanf("%f",&input[i]);
			avr+=input[i];
		}
	
		printf("Average = %.2f\n",avr/user_data);


return 0;

}


					
