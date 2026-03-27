#include <stdio.h>
#include <math.h>


void main()
{
    int n,i;
    double sum=0;
    printf("Enter the no.of terms you want to calculate: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        sum += pow(-1,i)*pow(1,2*i+1)/tgamma(2*i+2);
    }
    printf("The value of sin(1) is: %lf\n", sum);

}