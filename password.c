#include<stdio.h>
#include<string.h>
main()
{
	char pass[100];
	int i,letter=0,digit=0,symbol=0;
	
	printf("Enter Your Password = ");
	gets(pass);
	
	if(strlen(pass)>=6)
	{
		for(i=0;pass[i]!=NULL;i++)
		{
			if(pass[i]>=65 && pass[i]<=90 || pass[i]>=97 && pass[i]<=122)
			{
				letter=1;
			}
			else if(pass[i]>=48 && pass[i]<=57)
			{
				digit=1;
			}
			else
			{
				symbol=1;
			}
		}
		if(letter==1 && digit==1 && symbol==1)
		{
			printf("Your password Is Valid");
		}
		else
		{
			printf("Pleaze ! Enter letter,digit,symbol.");
		}
	}
	else
	{
		printf("Password is Not valid ");
	}
}