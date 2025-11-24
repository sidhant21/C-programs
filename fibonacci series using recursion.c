#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fib(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    for(int i =0; i<n;i++){
    printf("%d ",fib(i));
        
    }
    return 0;
}
