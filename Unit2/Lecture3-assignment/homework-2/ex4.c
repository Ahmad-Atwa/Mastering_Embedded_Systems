#include<stdio.h>

int main()
{

	float input;

	printf("Enter a Number: "); 
	scanf("%f",&input);


		if(input<0)
			printf("%f is Negative\n",input);
		else if(input==0)
			printf("You entered zero\n");
		else
			printf("%f is Positive\n",input);


	return 0;

}

				
		

	







