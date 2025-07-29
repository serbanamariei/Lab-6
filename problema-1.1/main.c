#include<stdio.h>

int main()
{
	char cht;
	int m;
	double fx;

	printf("m = ");
	scanf("%d",&m);
	printf("fx = ");
	scanf("%lf",&fx);
	printf("cht = ");
	scanf(" %c",&cht);

	char *pcht=&cht;
	int *pm=&m;
	double *pfx=&fx;

	printf("adresa lui m = %p\n",&m);
	printf("adresa lui fx = %p\n",&fx);
	printf("adresa lui cht = %p\n",&cht);

	printf("\nvaloarea de la adresa lui m = %d\n",*(&m));
	printf("valoarea de la adresa lui fx = %lf\n",*(&fx));
	printf("valoarea de la adresa lui cht = %c\n",*(&cht));

	printf("\nvaloarea pointerului cu adresa lui m = %p\n",pm);
	printf("valoarea pointerului cu adresa lui fx = %p\n",pfx);
	printf("valoarea pointerului cu adresa lui cht = %p\n",pcht);

	printf("\nvaloarea de la adresa lui m = %d\n",*pm);
	printf("valoarea de la adresa lui fx = %lf\n",*pfx);
	printf("valoarea de la adresa lui cht = %c\n",*pcht);

	return 0;
}
