/*Write a C Program to Read any Month Number in Integer and 
Display the number of days for this month.*/
#include <stdio.h>
void main(){
    int i;
    printf("Enter Month have a Days (Enter 1-12 Number): ");
    scanf("%d",&i);
    switch(i){
        case 1: 
            printf("Month have 31 Days!");
            break;
        case 2: 
            printf("Month have 28 Days!");
            break;
        case 3: 
            printf("Month have 31 Days!");
            break;
        case 4: 
            printf("Month have 30 Days!");
            break;
        case 5: 
            printf("Month have 31 Days!");
            break;
        case 6: 
            printf("Month have 30 Days!");
            break;
        case 7: 
            printf("Month have 31 Days!");
            break;
        case 8: 
            printf("Month have 31 Days!");
            break;
        case 9: 
            printf("Month have 30 Days!");
            break;
        case 10: 
            printf("Month have 31 Days!");
            break;
        case 11: 
            printf("Month have 30 Days!");
            break;
        case 12: 
            printf("Month have 31 Days!");
            break;
        default: 
            printf("Invalid Input, Try again!");
    }
}