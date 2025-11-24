#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int num){
    int f =1;

    while(num>=1){
        f=f*num;
        num-=1;
    }
    return(f);
    
}

int main() {
    int a,sum=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        sum=sum+fact(i);
    }
    printf("%d",sum);
    return 0;
}
