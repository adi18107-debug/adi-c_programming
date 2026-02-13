#include <stdio.h>
#include <math.h>

int main(){
    double a,b,fact,i,n=0;
    int ch;
    printf("enter the no.s: ");
    scanf("%lf%lf",&a,&b);
    printf("Enter : 1--> Addition, 2--> Subtraction, 3--> multiplication, 4--> division, 5--> power, 6-->factorial \n");
    printf("MENU \n");
    printf("+\n");
    printf("- \n");
    printf("* \n");
    printf("/ \n");
    printf(" power \n");
    printf(" factorial \n");
    scanf("%d",&ch);
    switch(ch){
        case 1: 
        printf("The addition of these no.s: %f \n",a+b);
        break;
        case 2:
        printf("The subtraction is: %f \n", a-b);
        break;
        case 3:
        printf("The multiplication is: %f \n",a*b);
        break;
        case 4:
        if (b!=0)
        {
            printf("the division is: %f \n",a/b);
        }
        else{
            printf("cant divide\n");
        }
        break;
        case 5:
        printf("the power of this two no.s is: %f \n",pow(a,b));
        break;
        case 6:
        printf("enter the no. \n");
        scanf("%lf",&fact);
        n=1;
        for(i=1;i<=fact;i++)
        {
            n=n*i;
        }
        printf("The factorial is %f \n",n);
        break;
        default:
        printf("wrong choice");
        break;
    }
    return 0;
}