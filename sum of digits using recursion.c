#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int sum(int num){
    if(num==0){
        return 0;
    }
    else{
        return num%10 + sum(num/10);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
