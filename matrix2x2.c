#include <stdio.h>
void main() {
    int i,j,a[2][2],b[2][2];
    printf("enter the elements for a: \n");
    for(i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf(" elements: [%d][%d] ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements for b: \n");
    for(i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf(" elements: [%d][%d] ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
printf("the addition of two matrix is: \n");
for(i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
}
           
}
