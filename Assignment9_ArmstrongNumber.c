#include <stdio.h>

int main(){
    int num,a,b,temp,ans=0;
    printf("enter the no.: ");
    scanf("%d",&num);
    num=temp;
    while(num!=0){
        num=num/10;
        b=num%10;
        temp=(num*num*num)+(b*b*b);
    }
    if (ans==num){
        printf(" %d is an armstrong no.",num);
    }
    else{
        printf(" %d is not an armstrong no.",num);
    }
    return 0;
}