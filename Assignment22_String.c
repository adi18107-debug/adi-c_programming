#include <stdio.h>
#include <string.h>
void main()
{
    int ch,len,i;
    char str1[100],str2[100];
    printf("Enter a string: ");
    scanf("%s", str1);
    printf("Enter 1 for length of string");
    printf("Enter 2 for reverse of string");
    printf("Enter 3 for comparison of strings");
    printf("Enter 4 for palindrome check");
    printf("Enter 5 for substring check");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Length of string: %d\n", strlen(str1));
        break;
    case 2:
        len=strlen(str1);
        for(i=len-1;i>=0;i--)
        {
            printf("%c",str1[i]);
        }
        printf("Reverse of string: %s\n", str1);
        break;
    case 3:
        printf("Comparison of strings: %d\n", strcmp(str1, "hello"));
        break;
    case 4:
        len=strlen(str1);
        for(i=len-1;i>=0;i--)
        {
            if(str1[i]!=str1[len-1-i])
            {
                printf("Not a palindrome\n");
                return;
            }
        }
        printf("String is a palindrome\n");
    case 5:
        printf("Substring check: %d\n", strstr(str1, "hello") != NULL);
        break;
    default:
        printf("Invalid choice\n");
    }
}