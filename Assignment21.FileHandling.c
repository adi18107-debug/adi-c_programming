#include <stdio.h>
int main()
    {
        char buffer[20];
        FILE *stream;
        stream=fopen("Project.txt","r");
        int count=fread (&buffer,sizeof(char),10,stream);
        fclose(stream);
        printf("The content of the file is: %s\n",buffer);
        printf("The number of characters read is: %d\n",count);
        return 0;
    }
