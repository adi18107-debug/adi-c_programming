#include <stdio.h>

int main(){
    int basic_pay,gross_salary,net_salary,professional_tax,hra,ta;
    printf("enter the salary: ");
    scanf("%d",&basic_pay);
    hra=0.10*basic_pay;
    ta=0.05*basic_pay;
    gross_salary=basic_pay+hra+ ta;
    professional_tax=0.07*gross_salary;
    net_salary=gross_salary - professional_tax;
    printf("the net salary after deductions would be: %d",net_salary); 
}