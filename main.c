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

    printf("\nfirst matrix elenments");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\n%d", arr[i][j]);
        }
    }

   int max = arr[0][1];
   int min = arr[1][0];
    printf("\noutput");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {      
        if (arr[i][j] > max){
		
            max = arr[i][j];
        }
          if (arr[i][j] < min){
		
            min = arr[i][j];
        }
        }
    }
     printf("\n%d",max);
       printf("\n%d",min);
    return 0;
}
