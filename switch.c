#include <stdio.h>

void main() {
    int a,b,ch;
    float c;
    printf("enter both the numbers: \n");
    scanf("%d%d",&a,&b);
    printf("enter your choice: (1 --> +, 2 --> -, 3 --> *, 4 --> /)\n");
    printf("+\n");
    printf("-\n");
    printf("*\n");
    printf("/\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :
        printf("%d",a+b);
        break;

        case 2 :
        printf("%d",a-b);
        break;

        case 3 :
        printf("%d",a*b);
        break;

        case 4 :
        if (b!=0){
            c=a/b;
            printf("%f",c);
        }
        else {
            printf ("b is 0 , reaches infinity");
        }
        break;

        default :
        printf("Wrong choice entered");
        break;
    }
}