/*Write a C Program to check whether a given Number is 
Positive or Negative.*/
#include <stdio.h>
void main(){
    //Check Number is Positive or Negative.
    int i;
    printf("Enter Your Number: ");
    scanf("%d",&i);
    if(0<i) 
        printf("%d is a Positive Number.\n",i);
    else
        printf("%d is a Negative Number.",i);
}