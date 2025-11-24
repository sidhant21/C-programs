//wap to extract all the digits of the given number and print them.

#include<stdio.h>
int main(){
int num;
printf("Enter any number:\n");
scanf("%d",&num);
int count=0;
while (num!=0)
{
int rem = num%10;
num=num/10;
count=count+1;
}
printf("%d",count);
return 0;
}
