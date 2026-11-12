#include<stdio.h>

int main()
{
	float a,b; /*To be used for user input*/
	float tmp; /* to temp hold one of the values at swap*/

	printf("###### Console Output #####\n");

	printf("Enter the value of a: ");
	scanf("%f",&a);
	
	
	printf("Enter the value of b: ");
	scanf("%f",&b);

		tmp=a; /*swapping process*/
		a=b;
		b=tmp;

	printf("After swapping, value of a= %.2f\n",a);
	printf("After swapping, value of b= %.2f\n",b);

return 0;
}

