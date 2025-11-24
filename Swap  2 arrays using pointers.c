#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int *a = (int*)calloc(n,sizeof(int));
    int *b = (int*)calloc(n,sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d",a+i);
    }
    for(int i=0; i<n; i++){
        scanf("%d",b+i);
    }
    //swapping
    for(int i=0; i<n; i++){
        *(a+i)=*(a+i)+ *(b+i);
        *(b+i)=*(a+i)- *(b+i);
        *(a+i)=*(a+i)- *(b+i);   
    }
    //after swapping
    //printf("array 1:");
    for(int i=0; i<n; i++){
        printf("%d ",*(a+i));
    }
    printf("\n");
    //printf("array 2:");
    for(int i=0; i<n; i++){
        printf("%d ",*(b+i));
    }
    return 0;
}
