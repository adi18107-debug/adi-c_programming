#include <stdio.h>
void swap_by_value(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Inside swap_by_value: %d %d\n", a, b);
}
void swap_by_refernce(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("Inside swap_by_reference: %d %d\n", *a, *b);
}
int main()
{
    int x,y;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    swap_by_value(x,y);
    swap_by_refernce(&x,&y);
    
    return 0;
    
}