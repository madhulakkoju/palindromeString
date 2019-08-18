#include "string.h"
#include "stdio.h"
#include "stdlib.h"
int isPalindrome(char* x,int n)
{
	int i;
	for(i=0;i<=(n-1)/2;i++)
	{
		if((x[i])!=(x[n-1-i]))
		   return -1;
	}
	return(1);
}
int main(){
	char* a;
	int i,n;
   	a=malloc(256);
   	scanf("%255s",a);
   	n=strlen(a);
   	for(i=n-1;i>=0;i--)
   	{
   		if(isPalindrome(a,i )==1)
   		{
   			printf("%d\n",n-i);
   			break;
   		}
   	}
    return (0);
}
