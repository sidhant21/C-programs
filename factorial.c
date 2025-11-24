/*
Program to print multiplication of numbers from 1 to N.
*/

#include<stdio.h>
int main(){
        int i,n,a=1;
        printf("Enter the value of N\n");
        scanf("%d",&n);
        if(n==1){
                printf("Factorial is 0");
        }
        else{
                for(i=1;i<=n;i++){
                
                a=a*i;
                }
                printf("Factorial is %d ",a); 
        }
        
        return 0;
}
