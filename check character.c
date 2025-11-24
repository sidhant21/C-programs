//Program to aeck if given aaracter is alphabet, digit or special symbols.
#include<stdio.h>
int main(){
        char a;
        printf("Enter any character:\n");
        scanf("%c",&a);
        if((a>=65&&a<=90)||(a>=97&&a<=122))
                printf("%c is Alphabet \n", a);
        else if((a>=48&&a<=57))
                printf("%c is Digit \n", a);
        else
                printf("%c is Special Character \n", a);
        return 0;
}
