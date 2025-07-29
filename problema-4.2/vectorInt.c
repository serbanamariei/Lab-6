#include<stdio.h>
#include"functii.h"

/*void citireVector(int a[], int n)
{
	for(int i=0;i<n;++i)
	{
		printf("elem[%d] = ",i);
		scanf("%d",&a[i]);
	}
}


int pscalar(int a[], int b[], int n)
{
	int p=0;
	for(int i=0;i<n;++i)
		p+=a[i]*b[i];
	return p;
}

int medieA(int a[], int n)
{
	int ma=0;
	for(int i=0;i<n;++i) ma+=a[i];
	return ma/n;
}

int suma(int a[], int n)
{
	int s=0;
	for(int i=0;i<n;++i)
	{
		int ma=medieA(a,n);
		if(a[i]>ma) s+=a[i]-ma;
	}

	return s;
}

int maxi(int a[], int n)
{
	int maxi=a[0];
	for(int i=1;i<n;++i)
	{
		if(a[i]>maxi) maxi=a[i];
	}

	return maxi;
}

int mini(int a[], int n)
{
	int mini=a[0];
	for(int i=1;i<n;++i)
	{
		if(a[i]<mini) mini=a[i];
	}

	return mini;
}

int mediaG(int a[], int n)
{
	int mg=1;
	for(int i=0;i<n;++i) mg*=a[i];

	return pow(mg,1/n);
}

int distinct(int a[], int b[], int n)
{
	int nrElem=0;
	int gasit;

	for(int i=0;i<n;++i)
	{
		gasit=0;
		for(int j=0;j<nrElem;++j)
		{
			if(a[i]==b[j]) 
			{
				gasit=1;
				break;
			}
		}

		if(gasit==0)
		{
			b[nrElem]=a[i];
			nrElem++;
		}
	}
	return nrElem;
}

_Bool gasit(int a[], int n, int el)
{
	for(int i=0;i<n;++i)
		if(a[i]==el) return true;

	return false;
}
*/
void interschimbare(int *pa, int *pb)
{
	int aux=*pa;
	*pa=*pb;
	*pb=aux;
}

void ordonareBule(int a[], int n)
{
	int lim=n-1;
	int ok;
	
	do{
		ok=0;
		int i=0;
		while(i<lim)
		{
			if(a[i]>a[i+1])
			{
				int *pa=a+i;
				int *pb=a+i+1;
				interschimbare(pa,pb);
				ok=1;
			}
			i++;
		}
		
		lim--;
		
	}while(ok==1);
}


void citireVector(int *v, int n)
{
	for(int i=0;i<n;++i)
	{
		printf("v[%d] = ",i);
		scanf("%d",v+i);
	}
}

void afis(int a[], int n)
{
	printf("[ ");
	for(int i=0;i<n;++i)
	{
		printf("%d ",a[i]);
	}
	printf("]\n");
}
