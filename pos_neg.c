#include<stdio.h>
int pos_neg(int x)
{
	int a = sizeof(int),fx;
	fx=8*a;
	fx--;
	if (x>>fx)
		return 1;
	else
		return 0;
}

int main()
{
	int x,z;
	printf("enter a number:");
	scanf("%d",&x);
	z=pos_neg(x);
	if(z)
		printf("negative number\n");
	else
		printf("positive number\n");	
	return 0;
}
