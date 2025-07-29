#include<stdio.h>
#include"functii.h"

int main()
{
	int n,t;
	printf("nr comori = ");
	scanf("%d",&n);

	printf("nr capcane = ");
	scanf("%d",&t);

	unsigned int comori[100],*pcomori=comori;
	unsigned int capcane[99],*pcapcane=capcane;

	printf("Introduceti numarul de monede din fiecare comoara:\n");
	citireVector(pcomori,n);
	printf("Introduceti indicii fiecarei capcane:\n");
	citireVector(pcapcane,t);

	int totalMonede=monede(pcomori,n);
	for(int i=0;i<t;++i)
	{
		totalMonede-=*(pcomori+*(pcapcane+i)-1);
	}

	printf("Numarul de monede: %d\n",totalMonede);

	return 0;
}
