#include<stdio.h>

main()
{
	char  email[]="meetradadiya4@gmail.com";
	char password[]="mkr%d&147";
	char  email1[100];
	char password1[100];
	
	printf("Enter your email=");
	gets(email1);
	printf("Enter your password=");
	gets(password1);
	
	if(strcmp(email,email1)==0)
	{
		if(strcmp(password,password1)==0)
		{
			printf("Login successful...");
		}
		else
		{
			printf("Plz enter correct password");
		}	
		
		
	}
	
}
