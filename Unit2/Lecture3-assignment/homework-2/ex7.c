#include<stdio.h>

int main()
{
	int input; /*user input*/
	int fact=1; /* used to multiply the series */


	printf("Enter an Integer: ");
	scanf("%d",&input);

		if(input<0)
			printf("Error!!! Factorial of negative number does not exit.\n");

		if(input==0) /*check if user input is zero */
		printf("Factorial = %d\n",input);
		else if(input>0) {
			while(input>1){ /* input >1 so we wont multiply by zero */
			fact*=input; /*Factorial */
			input--; 

			}
		printf("Factorial = %d\n",fact);

		}

return 0;

}	
