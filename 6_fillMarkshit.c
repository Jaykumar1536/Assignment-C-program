/*Write a Program to fill Student Roll no, Name,
Three Subjects Marks and Calculate the Total,Percentage and Division.*/
#include <stdio.h>
void main(){
    float e,h,g,r,percent;
    printf("Enter Student Roll No.: ");
    scanf("%f",&r);
    char name[30];
    printf("\nEnter Student Name: ");
    scanf("%s",name);
    printf("\nEnter Student Physics Marks: ");
    scanf("%f",&e);
    printf("\nEnter Student Chemistry Marks: ");
    scanf("%f",&g);
    printf("\nEnter Student Computer Marks: ");
    scanf("%f",&h);
    printf("\nRoll No.: %.2f",r);
    printf("\nName of Student: %s",name);
    printf("\nMarks in Physics: %.2f",e);
    printf("\nMarks in Chemistry: %.2f",g);
    printf("\nMarks in Computer: %.2f",h);
    printf("\nTotal Marks: %.2f",e+g+h);
    percent = (e+g+h)/3;
    printf("\nPercentage: %.2f",percent);
    if (percent>=70){
        printf("\nDivision = First");
    }
    else if (percent>=55){
        printf("\nDivision = Second");
    }
    else if (percent>=45){
        printf("\nDivision = Third");
    }
    else if (percent>=35){
        printf("\nDivision = Pass");
    }
    else{
        printf("\nFail!");
    }
}