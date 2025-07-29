#include<stdio.h>

int main()
{
	int a[10];
	int *pInt=0,*pInt1=0,*pInt2=0;
	double b[10];
	double *pDouble=0,*pDouble1=0,*pDouble2=0;

	size_t dimI,dimD;

	pInt=a;
	pInt1=&a[0];

	pDouble=b;
	pDouble1=&b[0];

	printf("adresa lui a cu valoarea = %p\n",&a);
	printf("adresa lui pInt cu valoarea = %p\n",pInt);
	printf("adresa lui pInt1 cu valoarea = %p\n",pInt1);

	printf("\nadresa lui b cu valoarea = %p\n",&b);
	printf("adresa lui pDouble cu valoarea = %p\n",pDouble);
	printf("adresa lui pDouble1 cu valoarea = %p\n",pDouble);

	dimI=sizeof(int);
	dimD=sizeof(double);

	printf("\ndimI = %zu\n",dimI);
	printf("dimD = %zu\n",dimD);

	pInt2=a+1;
	b[2]=a[2]*3.14159;
	pDouble2=b+2;

	printf("\npInt2 = %p\n",pInt2);
	printf("pDouble2 = %p\n",pDouble2);

	printf("\nContinutul de la adresa din pointerul pInt2 = %d\n",*pInt2);
	printf("Continutul de la adresa din pointerul pDouble2 = %lf\n",*pDouble2);

	//a=a+1;
	//b=b+2;
	
	pInt1=pInt1+1;

	printf("\n*pInt1	pInt1		 *a	 *(a+1)	 a[0]	 a[1]	 pInt1[0]:\n");
	printf("%d	%p	%d	%d	%d	%d	%d\n",*pInt1,pInt1,*a,*(a+1),a[0],a[1],pInt1[0]);

	return 0;
}
