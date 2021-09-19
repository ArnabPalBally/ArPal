#include<stdio.h>
void th(int m,char start,char aux,char dest)
{
	if(m==1)
	{
		printf("%d no disk is shifted from %c to %c \n",m,start,dest);
		return ;
	}
	if(m>1)
	{
		th(m-1,start,dest,aux);
		printf("%d no disk is shifted from %c to %c \n",m,start,dest);
		th(m-1,aux,start,dest);
	}
	else
	{
		printf("invalid number");
	}
}
int main()
{
	int n;
	printf("Enter the total disk number :");
	scanf("%d",&n);
	th(n,'a','b','c');
	return 0;
}
