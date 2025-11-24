/*
Program to print fibonacci series.
*/

#include<stdio.h>
#include<limits.h>
int main(){
    int N, num;
    int a=0, b=1;
    printf("How many numbers to print");
    scanf("%d",&N);
    printf("%d %d ",a,b);
for (int i = 3; i <= N; i++)
{
    int c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
}
        return 0;
}
