/* I'm using the ctype.h header file using the isalpha() function */

#include<stdio.h>
#include<ctype.h>

int main()
{
	char input;
	printf("Enter a character: ");
	scanf("%c",&input);

		if(isalpha((unsigned char)input))
			printf("%c is an alpahabet\n",input);
		else
			printf("%c is not an alphabet\n",input);


return 0;

}




