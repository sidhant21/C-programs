/*
Program to print all even numbers from 1 to N
*/

#include<stdio.h>
int main(){
        int i,n;
        printf("Enter the value of N\n");
        scanf("%d",&n);
        for(i=0;i<=n;i=i+2){
                printf("%d\n",i);
        }
        return 0;
}
