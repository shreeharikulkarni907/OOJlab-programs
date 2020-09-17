#include<stdio.h>
#include<string.h>
#include<math.h>
float sumaver(int,int);
int  printeven(int,int);
int main()
{
	int a,b,c,large,seclarge;
	printf("Enter three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	large=((a>b)?((a>c)?a:c):((b>c)?b:c));
	if((a>b||a>c)&&(a<large))
	{
		seclarge=a;
	}
	else if(((b>a)||b>c)&&(b<large))
	{
		seclarge=b;
	}
	else
	{
		seclarge=c;
	}
	float avg=sumaver(large,seclarge);
	printf("Average of first two number is %f\n",avg);
    int x=printeven(large,seclarge);
}
float sumaver(int a,int b)
{
	float sum=a+b;
	printf("Sum of two numbers is %f\n",sum);
	float avg=sum/2;
	return avg;
}
int printeven(int a,int b)
{
	int x=a;
	int y=b;
	
	printf("Printing all even numbers between a and b\n");
	for(int i=y+1;i<x;i++)
	{
		if((i%2)==0)
		{
			printf("Even Numbers %d\n", i);
		}
	}
}