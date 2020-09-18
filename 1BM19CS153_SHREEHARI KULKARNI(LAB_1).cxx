
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


/**†*****OUTPUT***""""""""""""/


Enter the two numbers respectively
6 89
1:Add
2:subbtract
3:multiply
4:divide
5:check equality
6:find greater
7:find small
8:check if sum is greater than 100
9:all squares between two numbers
10:find sum of square
Enter your choice
1
Result is 95
enter N to exit and y to continue
y
Enter your choice
2
Result is 83
enter N to exit and y to continue
y
Enter your choice
3
Result is 534
enter N to exit and y to continue
y
Enter your choice
4
Result is 0
enter N to exit and y to continue
y
Enter your choice
5
they are not equal
enter N to exit and y to continue
y
Enter your choice
6
89 is greater than 6
enter N to exit and y to continue
y
Enter your choice
7
6 is smaller than 89
enter N to exit and y to continue
y
Enter your choice
8
sum is less than 100
enter N to exit and y to continue
y
Enter your choice
9
36
49
64
81
100
121
144
169
196
225
256
289
324
361
400
441
484
529
576
625
676
729
784
841
900
961
1024
1089
1156
1225
1296
1369
1444
1521
1600
1681
1764
1849
1936
2025
2116
2209
2304
2401
2500
2601
2704
2809
2916
3025
3136
3249
3364
3481
3600
3721
3844
3969
4096
4225
4356
4489
4624
4761
4900
5041
5184
5329
5476
5625
5776
5929
6084
6241
6400
6561
6724
6889
7056
7225
7396
7569
7744
7921
enter N to exit and y to continue
y
Enter your choice
10
sum of the squares is 7957
enter N to exit and y to continue
N

[Program finished]

