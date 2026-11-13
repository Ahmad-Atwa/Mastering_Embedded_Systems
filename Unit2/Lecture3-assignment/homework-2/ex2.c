#include<stdio.h>

int main()
{
	char input;

	printf("Enter an Alphabet: ");
	scanf("%c",&input);

	switch(input){
		case 'a':
		case 'e':
		case 'i':
		case'u' :
			printf("%c is a vowel\n",input);
			break;

		default:
			printf("%c is a consonant\n",input);

	}

	return 0;


}
