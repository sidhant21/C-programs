#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int *a=(int*)malloc(sizeof(int));
    int *b=(int*)malloc(sizeof(int));
    scanf("%d %d",a,b);
    printf("%d",*a+*b);
    return 0;
}
