/* SPDX-Licence-Identifier: BSD 3 clause */

/* Ahmad M. Atwa @ My FreeBSD BOX */

#define MAX (100)
#include<stdio.h>

int main()
{
char input[MAX];
int i,count;
count=0; /*intialization*/

	printf("Enter a string: ");
	fgets(input,sizeof(input),stdin);
		

	for(i=0;i<MAX;i++,count++){
		if(input[i]=='\0')
			break;
	}





printf("Length of string:%d.\n",count-1);


return 0;

}
