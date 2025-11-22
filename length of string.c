#include<stdio.h>
int main()
{
	char a[100];
	int i,len;
	printf("enter any string");
	scanf("%[^\n]%*c",&a);
	len=0;
	for(i=0;a[i]!='\0';i++)
	{
		len=len+1;
	}
	printf("\n length is %d",len);
	return 0;
}
	
	
