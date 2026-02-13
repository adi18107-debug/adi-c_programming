#include <stdio.h>

int main(){
    int a,b,ch;
    printf("enter the two no.s: ");
    scanf("%d%d",&a,&b);
    printf("enter: 1 --> addition,2 --> subtraction, 3 --> multiplication, 4 --> division \n");
    printf("MENU \n");
    printf("+ \n");
    printf("- \n");
    printf("* \n");
    printf("/ \n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("addition is %d \n",a+b);
        break;
        case 2:
        printf("subtraction is %d \n",a-b);
        break;
        case 3:
        printf("multiplication is %d \n",a*b);
        break;
        case 4:
        if(b==0){
            printf("cant divide \n");
        }
        else{
           printf("division is %d",a/b); 
        }
        break;
        default:
        printf("wrong choice entered");
        break;
    }
}
