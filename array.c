#include <stdio.h>

void main() {
    int a[10],i;
    printf("Enter 10 elements: \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum = 0;
    
    for(i=0;i<=9;i++)
    {
        sum = sum + a[i];

    }
    printf("The sum of the integers is %d", sum);
}