#include<stdio.h>
int main()
{
	char a[100];
	int i;
	printf("enter a word:");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			a[i]=a[i]-32;
		}
		else if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	printf("toogle case=%s\n",a);
	return 0;
}
		
	
