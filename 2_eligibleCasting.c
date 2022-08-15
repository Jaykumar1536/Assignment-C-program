/*Write a C Program to Eligible for Casting or Not.*/
#include <stdio.h>
void main(){
    int i;
    printf("Enter Your Age: ");
    scanf("%d",&i);
    if(i>18)
        printf("Congratulation! You are eligible for casting");
    else
        printf("You are NOT eligible for casting");
}