#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("enter principle amount:");
	scanf("%f",&p);
	printf("enter time period:");
	scanf("%f",&t);
	printf("enter rate of interst:");
	scanf("%f",&r);
	si=(p*t*r)/100;
	ci=p*pow(1+r,t);
	printf("simple interst=%.2f\n,si");
	printf("compound interst=%.2f\n",ci);
	return 0;
}
