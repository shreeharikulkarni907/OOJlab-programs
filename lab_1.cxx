/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int calculator(int,int);
int main()
{
    int a,b;
    printf("Enter the two numbers respectively\n");
    scanf("%d %d",&a,&b);
    calculator(a,b);
    
    
}
int calculator(int a,int b)
{
    char ch='y';
    int sum,sums;
    printf("1:Add\n2:subbtract\n3:multiply\n4:divide\n5:check equality\n6:find greater \n7:find small\n8:check if sum is greater than 100\n9:all squares between two numbers\n10:find sum of square\n");
    while(ch=='y')
    {
        int result;
        int op;
        printf("Enter your choice\n");
        scanf(" %d",&op);
        switch(op)
        {
            case 1:
            result=a+b;      
            printf("Result is %d \n",result);
            break;
            
            case 2:
            if(a>b)
            {
                result=a-b;                      
            }
            else
            {
                result=b-a;
            }         
            printf("Result is %d \n",result);
            break;
            
            case 3:
            result=a*b;        
            printf("Result is %d \n",result);
            break;
            
            case 4:
            result=a/b;      
            printf("Result is %d \n",result);
            break;
            
            case 5:
            if(a==b)
            {
            	printf(" they are equal \n");
            }
            else
            {
            	printf("they are not equal\n");
            }
            break;
            
            case 6:
            if(a>b)
            {
            	printf("%d is greater than %d\n",a,b);
            }
            else
            {
            	printf("%d is greater than %d\n",b,a);
            }
            
            break;
            
            case 7:
            if(a<b)
            {
            	printf("%d is smaller than %d\n",a,b);
            }
            else
            {
            	printf("%d is smaller than %d\n",b,a);
            }
            break;
            
            case 8:
             sum=a+b;
            if(sum<100)
            {
            	printf("sum is less than 100\n");
            }
            else if(sum==100)
            {
            	printf("sum is equal to 100\n");
            }
            else
            {
            	printf("sum is greater than 100\n");
            }
            break;
            
            case 9:
  
            for(int i=a;i<=b;i++)
            {
            	printf("%d\n",i*i);
            }
            break;
            
            case 10:
            sums=a*a+b*b;
            printf("sum of the squares is %d\n",sums);
            break;         
        }
       
        printf("enter N to exit and y to continue\n");
        scanf(" %c",&ch);
        if(ch=='N')
        {
            break;
        }
        else
        {
            continue;
        }
    }
    
    
    
}