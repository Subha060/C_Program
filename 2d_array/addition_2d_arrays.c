// addition of 2d array
#include <stdio.h>

int main()
{
    int number1[100][100], number2[100][100], sum[100][100];
    int row, column;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &column); // Add & before column

    // Input for the first array
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < row; i++)
    {
        printf("Row %d:\n", i + 1);
        for (int j = 0; j < column; j++)
        {
            printf("Enter cell value: ");
            scanf("%d", &number1[i][j]);
        }
    }

    // Input for the second array
    printf("Enter elements for the second array:\n");
    for (int i = 0; i < row; i++)
    {
        printf("Row %d:\n", i + 1);
        for (int j = 0; j < column; j++)
        {
            printf("Enter cell value: ");
            scanf("%d", &number2[i][j]);
        }
    }

    // Display the first array
    printf("\nThis is the first array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", number1[i][j]);
        }
        printf("\n");
    }

    // Display the second array
    printf("\nThis is the second array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", number2[i][j]);
        }
        printf("\n");
    }

    // Display the sum of the two arrays
    printf("\nThis is the addition of the two 2D arrays:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sum[i][j] = number1[i][j] + number2[i][j];
            printf("%d + %d = %d\t", number1[i][j], number2[i][j], sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
