#include<stdio.h>
#include"functii.h"

void citireVector(unsigned int *v, unsigned int n)
{
	for(int i=0;i<n;++i)
	{
		printf("v[%d] = ",i);
		scanf("%d",v+i);
	}
}

void afis(unsigned int *v, int n)
{
	printf("[");
	for(int i=0;i<n;++i)
	{
		printf(" %d",*(v+i));
	}
	printf(" ]\n");
}

int monede(unsigned int *v, int n)
{
	int suma=0;
	for(int i=0;i<n;++i)
	{
		suma+=*(v+i);
	}

	return suma;
}
