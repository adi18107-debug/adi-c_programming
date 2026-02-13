#include <stdio.h>

int main(){
     int n,i,a;
     printf("enter the no.: ");
     scanf("%d",&n);
     a=n;
     for(i=1;i<=10;i++){
        n=a*i;
        printf("%d \n",n);
     }
}