#include<stdio.h>

main()
{
	char str[50];
	int i,len,a=0;
	
	printf("Enter the word = ");
	gets(str);
	len=strlen(str);
	
		for(i=0;i<len;i++)
		{
			if(str[i]==str[len-i-1])
			{
       a=1;
    } 
		}
		 	if(a==0)
				printf("strint is palindrome");
			else
		 		printf("strint is not palindrome");
}
    