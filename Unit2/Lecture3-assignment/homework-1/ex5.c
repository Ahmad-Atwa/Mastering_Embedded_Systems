#include<stdio.h>

int main()
{
	char input; /*can be done with int, but I want to preserve more memory */
	printf("###### Console Output #####\n");
	printf("Enter a character: ");
	scanf("%c",&input);
	printf("ASCII value of %c is %d\n",input,input);

return 0;
}


