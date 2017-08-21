#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* arr(){
	int a[5];
	for (int i = 0; i < 3; ++i)
	{
		a[i]=5;
	}
}
int main()
{
	/* code */
	int *x;
	x=arr();
	for (int i = 0; i < 3; ++i)
	{
		printf("%d\n",x[i] );
	}
	free(x);
	return 0;
}