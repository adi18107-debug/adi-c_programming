#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    int len;
    printf("Enter a string: ");
    scanf("%s",str);
    len=strlen(str);
    printf("Reverse of the string is: ");
    for(int i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}