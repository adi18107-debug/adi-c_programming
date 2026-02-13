#include <stdio.h>

int main(){
    int p,c,m,b,h,avg;
    printf("enter the physics marks: ");
    scanf("%d",&p);
    printf("enter the chemistry marks: ");
    scanf("%d",&c);
    printf("enter the maths marks: ");
    scanf("%d",&m);
    printf("enter the biology marks: ");
    scanf("%d",&b);
    printf("enter the history marks: ");
    scanf("%d",&h);
    avg=(p+c+m+b+h)/5;
    if (avg>75){
        printf("grade is distinguished ");
    }
    else if (avg<75 && avg>=60){
        printf("grade is first division ");
    }
    else if (avg<60 && avg>=50){
        printf("grade is second division ");
    }
    else if (avg<50 && avg>=40){
        printf("grade is third division ");
    }
    else
    {
        printf("fail hahahahahaha");
    }
}


