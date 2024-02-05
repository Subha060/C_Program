// This program checks if a number is a palindrome or not using a range of numbers or a single number

#include <stdio.h>

int range_check()
{
    int num, remainder, reverse, original;
    int count_1,count_2;

    printf("Enter the range: ");
    scanf("%d %d", &count_1, &count_2);
    if (count_1 > count_2)
    {
        printf("Invalid range\n");
        return 0;
    }
    else if (count_1 < 10)
    {
        printf("Please enter a number greater than 10\n");
    }
    
    else
    {
    printf("Palindrome numbers between %d and %d are: ", count_1, count_2);
    for (int i = count_1; i <= count_2; i++)
    {
        num = i;
        original = num;
        reverse = 0;

        while (num != 0)
        {
            remainder = num % 10;
            reverse = reverse * 10 + remainder;
            num /= 10;
        }

        if (reverse == original)
        {
            printf("%d\n", original);
        }
    }

}
}

int number_check()
{
    int num, remainder, reverse, original;
    int count;

    printf("Enter the number: ");
    scanf("%d", &count);
    if (count < 10){
        printf("Please enter a number greater than 10\n");
    }
    else{
        num = count;
        original = num;
        reverse = 0;

        while (num != 0)
        {
            remainder = num % 10;
            reverse = reverse * 10 + remainder;
            num /= 10;
        }

        if (reverse == original)
        {
            printf("%d is a Palindrome number \n", original);
        }
        else
        {
            printf("%d is not a Palindrome number \n", original);
        }
    }
}

int main()
{
    int choice;
    printf("This program checks if a number is a palindrome or not\n");
    printf("Enter 1 to check a range of numbers or 2 to check a single number: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        range_check();
    }
    else if (choice == 2)
    {
        number_check();
    }
    else
    {
        printf("Invalid choice\n");
    }
    return 0;
}