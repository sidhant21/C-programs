#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count(int n){
    if(n>=0&&n<=9){
        return 1;
    }
    if(n<0)
        n=-n;
    return 1 + count(n/10);
}
int rev(int num,int c){
    if(num==0){
        return 0;
    }
    else{
        return ((num%10)*pow(10,c))+rev(num/10,c-1);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",rev(n,count(n)-1));
    
    return 0;
}

