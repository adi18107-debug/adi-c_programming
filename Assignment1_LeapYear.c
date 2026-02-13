#include <stdio.h>

int main(){
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if (year%400==0 || year % 4==0 && year%100!=0){
        printf("the entered year is leap year ");
    }
    else {
        printf("WRONG CHOICE");
    }
}