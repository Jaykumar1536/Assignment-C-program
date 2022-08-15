/*Write a C Program to Find The Eligibility of Admissions For a Professional course based
 on the Following Criteria.*/ 
#include <stdio.h>
void main(){
    int p,m,c,t1,t2;
    printf("Enter Your Physics Marks: ");
    scanf("%d",&p);
    printf("Enter Your Maths Marks: ");
    scanf("%d",&m);
    printf("Enter Your Chemistry Marks: ");
    scanf("%d",&c);
    printf("\nMarks Obtained in Physics: %d",p);
    printf("\nMarks Obtained in Maths: %d",m);
    printf("\nMarks Obtained in Chemistry: %d",c);
    t1 = p+m+c;
    t2 = p+m;
    printf("\nTotal Marks of Maths,Physics & Chemistry: %d",t1);
    printf("\nTotal Marks of Maths and Physics: %d",t2);
    if (t1>=190 || t2>=140){
        printf("\nThe Candidate is Eligible for Admission!.");
    }else
    {
        printf("\nThe Candidate is not eligible for Admission!.");
    }

}