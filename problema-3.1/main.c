#include<stdio.h>

void interschimbare(int *pa, int *pb);

int main()
{
	int a,b;
	int *pa,*pb;

	printf("a = ");
	scanf("%d",&a);

	printf("b = ");
	scanf("%d",&b);

	printf("\na = %d si b = %d\n",a,b);

	pa=&a;
	pb=&b;

	interschimbare(pa,pb);

	printf("\na = %d si b = %d\n",a,b);

	return 0;
}

void interschimbare(int *pa, int *pb)
{
	int aux=*pa;
	*pa=*pb;
	*pb=aux;
}
