#include <stdio.h>

int main()
{
    int a[2][2];
    int i, j, k;
    int min, col_index;
    int saddle_found = 0;
    printf("Enter elements of 2x2 matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Elements [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 2; i++)
    {
        min = a[i][0];
        col_index = 0;
        for(j = 1; j < 2; j++)
        {
            if(a[i][j] < min)
            {
                min = a[i][j];
                col_index = j;
            }
        }
        for(k = 0; k < 2; k++)
        {
            if(a[k][col_index] > min)
                break;
        }

        if(k == 2)
        {
            printf("Saddle Point = %d\n", min);
            saddle_found = 1;
        }
    }

    if(saddle_found == 0)
        printf("No Saddle Point found\n");

    return 0;
}