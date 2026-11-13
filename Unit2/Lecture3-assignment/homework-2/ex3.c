#include<stdio.h>

int main()
{
	float n1,n2,n3;
	float holder=0; /*intial value */

	printf("Enter three numbers: ");
	scanf("%f%f%f",&n1,&n2,&n3);

		if(holder<=n1)
			holder=n1;
		if(holder<=n2)
			holder=n2;
		if(holder<=n3)
			holder=n3;

	
	printf("Largest Number: %f\n",holder);

return 0;


}

