//Program to find the greater number amongst two
#include<stdio.h>
int main(){
        int a,b;
        printf("enter 1st number\n");
        scanf("%d",&a);
        printf("enter 2nd number\n");
        scanf("%d",&b);
        
        if(a>b)
        printf("%d is greater than %d",a,b);
        else
        printf("%d is greater than %d",b,a);
        
        return 0;
}
