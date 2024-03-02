#include <stdio.h>

int array[100][100], copy[100][100];
int value()
{
    int i = 0, f = 0;
    for (int i = 0; i < 2; i++)
    {
        printf("Enter values: \n");
        for (int f = 0; f < 4; f++)
        {
            printf("%d.%d Index = ", i + 1, f + 1);
            scanf("%d", &array[i][f]);
        }
    }
}

int reverse()
{
   int i = 1;
    for (int a = 0; a < 2; a++, i--)
    {
        int f = 3;
        for (int b = 0; b < 4; b++, f--)
        {
            copy[a][b] = array[i][f];
        }
    }
}

int print()
{
    printf("\nValues of array: \n");
    for (int x = 0; x < 2; x++)
    {
        printf("Row %d: ", x + 1);
        for (int y = 0; y < 4; y++)
        {
            printf("%d  ", array[x][y]);
        }
        printf("\n");
    }
    printf("\nReverse value is: \n");
    for (int x = 0; x < 2; x++)
    {
        printf("Row %d: ", x + 1);
        for (int y = 0; y < 4; y++)
        {
            printf("%d  ", copy[x][y]);
        }
        printf("\n");
    }
}


int main(){
    value();
    reverse();
    print();
    return 0;
}