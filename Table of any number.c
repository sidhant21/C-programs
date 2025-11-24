/*
Program to print Table upto 10 of any numbers.
*/

#include<stdio.h>
int main(){
    int num;
    int a=0, b=1;
    printf("Enter any number\n");
    scanf("%d",&num);
    int n = 1;    
for (int i = 1; i <= 10; i++)
{
int res =num*n;
printf("%dx%d=%d\n",num,n,res);
n=n+1;
}
        return 0;
}
