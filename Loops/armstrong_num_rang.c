#include<stdio.h>
#include<math.h>
int main()
{
    int original,remainder,armstrong,num2,num1,range_st,range_en,digit;
    printf("Enter the range here: ");
    scanf("%d %d",&range_st,&range_en);
    for(int i = range_st; i <= range_en; i++)
    {
        original = i;
        num1 = i;
        num2 = i;
        digit = 0;
        armstrong = 0;

       while(num1 != 0)
       {
        num1 /= 10;
        digit++;
       } 
       while(num2 != 0)
       {
        remainder = num2 % 10;
        armstrong = armstrong + pow(remainder,digit);
        num2 /= 10;
       }
       if(original == armstrong)
       {
        printf("%d \n",original);
       }
    }
    return 0;
}