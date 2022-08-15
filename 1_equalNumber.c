/*Write a C Program to Check Two Number is Equal to OR Not Equal to.*/
#include <stdio.h>
void main(){
    //Two Equal Number 
    int num1,num2;
    printf("Enter of Num1 Value: ");
    scanf("%d",&num1);
    printf("Enter of Num2 Value: ");
    scanf("%d",&num2);
    if(num1==num2){
        printf("Num1 and Num2 are equal");
    }else{
        printf("Num1 and Num2 are not equal");
    }
}