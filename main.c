#include <stdio.h>

int main()
{
    int col, row;

    printf("enter the row");
    scanf("%d", &row);
    printf("enter the col");
    scanf("%d", &col);

    int arr[row][col], arr1[row][col], arr2[row][col], i, j;
    
    printf("enter the first matrix elenments");
    
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the second matrix elenments");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("first matrix elenments");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", arr[i][j]);
        }
    }
    printf("Second matrix elenments");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\n%d", arr1[i][j]);
        }
        printf("\n");
    }
   int max = arr2[i][j];
    printf("output");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {      
        if (arr[i][j] > max)
            max = arr[i]
        }
        printf("\n");
    }
    printf(max)
    return 0;
}
