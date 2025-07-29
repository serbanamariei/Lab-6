#include<stdio.h>

int main()
{
	int a,b;
	int *pa=0,*pb=0;

	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);

	pa=&a;
	pb=&b;

	int max=*pa;
	if(*pb>max) max=*pb;
	printf("maximul dintre numerele %d si %d este %d\n",*pa,*pb,max);

	return 0;
}
