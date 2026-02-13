#include <stdio.h>
#include <math.h>

int main(){
    double n,b,d;
    int ch;
    printf("enter the no.s: ");
    scanf("%lf",&n);
    printf("MENU \n");
    printf("1--> Square root \n");
    printf("2--> Square of the no. \n");
    printf("3--> Cube : \n");
    printf("4--> prime or not: \n");
    printf("5--> factorial: \n");
    printf("6--> prime factors: \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            printf("The square root of the no. is : %f",pow(n,0.5));
            break;
        }
        case 2: {
            printf("The square the no.: %f",n*n);
            break;
        }
        case 3: {
            printf("The cube of a no.: %f", n*n*n);
            break;
        }
        case 4:{
            
        }
    }
    return 0;
}