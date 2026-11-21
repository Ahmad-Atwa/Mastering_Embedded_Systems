/* SPDX-Licence-Identifier: BSD 3 clause */

/* Ahmad M. Atwa @ My FreeBSD BOX */

#define MAX (100)

#include<stdio.h>

int main()
{
char input[MAX];
char user_search;
int i,freq;
freq=0; /*intialization*/

	printf("Enter a string: ");
	fgets(input,sizeof(input),stdin);

	printf("What Char you want to search for?: ");
	scanf("%c",&user_search);

		for(i=0;i<MAX;i++){

			if(input[i]==user_search)
				freq+=1;

		}


printf("Freqency of %c is %d.\n",user_search,freq);


return 0;

}
