#include<stdio.h>

int main()
{
	int input; /*user input*/
	int sum=0; /* used to sum the series */


	printf("Enter an Integer: ");
	scanf("%d",&input);

	if(input==0) /*check if user input is zero */
		printf("Sum = %d\n",input);
	else if(input>0) {
	while(input>=0){
	sum+=input; /*summation */
	input--; 

	}
	printf("Sum = %d\n",sum);


		}

return 0;

}	
