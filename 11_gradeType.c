/*Write a C program to Accept a Grade and declare the Equivalent
description:
grade              Description
  E                 Excellent
  V                 VeryGood
  G                 Good
  A                 Average
  F                 Fail
*/
#include <stdio.h>
void main(){
    char ch;
    printf("Enter the grade E,V,G,A and F: ");
    scanf("%c",&ch);
    switch(ch){
        case 'E':
            printf("\nExcellent!");
            break;
        case 'V':
            printf("\nVeryGood!");
            break;
        case 'G':
            printf("\nGood!");
            break;
        case 'A':
            printf("\nAverage!");
            break;
        case 'F':
            printf("\nFail!");
            break;
        case 'e':
            printf("\nExcellent!");
            break;
        case 'v':
            printf("\nVeryGood!");
            break;
        case 'g':
            printf("\nGood!");
            break;
        case 'a':
            printf("\nAverage!");
            break;
        case 'f':
            printf("\nFail!");
            break;
        default:
            printf("\nInvalid Grade Input!");
    }

}