#include<stdio.h>

int main()
{
	float a,b; /*To be used for user input*/

	printf("###### Console Output #####\n");

	printf("Enter the value of a: ");
	scanf("%f",&a);
	
	
	printf("Enter the value of b: ");
	scanf("%f",&b);

	/*
		tmp=a; swapping process
		a=b;
		b=tmp;
	*/

	/*Using this simple trick */
	a=a+b;
	b=a-b;
	a=a-b;

	printf("After swapping, value of a= %.2f\n",a);
	printf("After swapping, value of b= %.2f\n",b);

return 0;
}


