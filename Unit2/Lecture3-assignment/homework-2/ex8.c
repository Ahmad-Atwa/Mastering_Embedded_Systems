#include<stdio.h>

int main()
{
	char op; /* Operation to perform */
	float n1,n2;

	printf("Enter opertor either + or - or * or divide : ");
	scanf("%c",&op);
	
	printf("Enter two operands: ");
	scanf("%f%f",&n1,&n2);

	switch(op){
		case '-':
			printf("%f %c %f=%.3f\n",n1,op,n1,n1-n2);
			break;

		case '+':
			printf("%f %c %f=%.3f\n",n1,op,n1,n1+n2);
			break;

		case '*':
			printf("%f %c %f=%.3f\n",n1,op,n1,n1*n2);
			break;

		case '/':
			printf("%f %c %f=%.3f\n",n1,op,n1,n1/n2);
			break;

	}

return 0;

}
