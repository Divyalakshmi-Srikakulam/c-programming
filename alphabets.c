#include<stdio.h>
int main()
{
	char a[1000];
	int i,digits=0,alphabets=0,vowel=0,consonant=0,lower=0,upper=0,others=0;
	printf("enter any string");
	scanf("%[^\n]%*c",&a);
	for(i=0;a[i]='\0';i++)
	{
		if(a[i]>='0' &&a[i]<='9')
		{
			digits++;
			
		}
		else if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		{
			alphabets++;
			if(a[i]>='a'&&a[i]<='z')
			{
				lower++;
			}
			else
			{
				upper++;
				
			}
			switch(a[i])
			{
				case'a':case'A':case'e':case'E':case'i':case'I':case'o':case'O':case'u':case'U':
					vowel++;
					break;
					default:
						consonant++;
			}
		}
		else{
			others++;
		}
		
	}
	printf("alphabets,digits,vowel,consonant,lower,upper,others,");
	return 0;
}
			
			
		
	
	
	
