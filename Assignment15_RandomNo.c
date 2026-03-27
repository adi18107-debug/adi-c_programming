#include <stdio.h>
#include <stdlib.h>
void main()
{
    int seed;
    printf("Enter the seed number: ");
    scanf("%d", &seed);
    srand(seed);
    printf("Random number: %d\n", rand());
}