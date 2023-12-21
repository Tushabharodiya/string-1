#include<stdio.h>
#include<string.h>
main()
{
	char email[100]="abc@gmail.com";
	char email1[100];
	char pass[100]="12345";
	char pass1[100];
	int i,n;
	

	
	printf("Enter Your email = ");
	gets(email1);
	printf("Enter Your password = ");
	gets(pass1);
	
	if(strcmp(email,email1)==0)
	{
		if(strcmp(pass,pass1)==0)
		{
			printf("\nYou Are Successfully login");
		}
		else
		{
			printf("\npleaze ! Enter Right Password");
		}
	}
	else
	{   
		printf("\nPleaze ! Enter Right Email");
	}
}