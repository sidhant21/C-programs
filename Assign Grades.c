/*
Program to print the grade of student on the basis of marks obtain by the student.
if marks>=90 then grade A+
if marks>=80 then grade A
if marks>=70 then grade B+
if marks>=60 then grade B
if marks>=50 then grade C
if marks<50 then grade F
*/

#include<stdio.h>
int main(){
        int marks;
        printf("Enter Marks:\n");
        scanf("%d",&marks);
        if(marks>=90)
                printf("Grade is A+");
        else if(marks>=80)
                printf("Grade is A");
        else if(marks>=70)
                printf("Grade is B+");
        else if(marks>=60)
                printf("Grade is B");
        else if(marks>=50)
                printf("Grade is C");
        else if(marks<50)
                printf("Grade is F");
        return 0;
}
