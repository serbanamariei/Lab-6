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

	printf("a + b = %d\n",*pa+*pb);

	return 0;
}
