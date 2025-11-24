#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fa(int n){
    if(n<0){
        return 0;
    }
    if(n==0||n==1){
        return 1;
    }
    return n*(fa(n-1));
}
int main() { 
    int n;
    scanf("%d",&n);
    printf("%d",fa(n));
    return 0;
}
