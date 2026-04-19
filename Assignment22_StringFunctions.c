#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int ch;
    printf("Enter the choice by referring the below options: ");
    printf("1 --> String length");
    printf("2 --> String comparison");
    printf("3 --> String concatenation");
    printf("4 --> String copy");
    printf("5 --> Substring check");
    scanf("%d",&ch);

    char str1[20],str2[20];
    int comp;
    printf("Enter the string 1 :");
    printf("Enter the string 2: ");
    scanf("%s%s",str1,str2);
    switch(ch)
    {
        case 1:
        printf("The length of the string %s : %d",strlen(str1));
        break;
        case 2:
        comp = strcmp(str1,str2);
        if (comp==0)
        printf("Both the strings are same.");
        else 
        printf("The strings are different.");
        break;
        case 3:
        printf("The concatenation of the two strings is: %s",strcat(str1,str2));
        break;
        case 4: 
        printf("The string 1 is copied in string 2: %s",strcpy(str2,str1));
        break;
        case 5: 
       char *p= strstr(str1,str2);
       if(p)
       printf("String is found at: %s",p);
       break;
       default:
       printf("Wrong option chosen !!");
       break;
    }
}