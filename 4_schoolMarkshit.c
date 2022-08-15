/*Write a Program to fill Student Roll no, Name,
Three Subjects Marks and Calculate the Total,Percentage*/
#include <stdio.h>
void main(){
    float e,h,g,r;
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
    printf("\nPercentage: %.2f",(e+g+h)/3);
}