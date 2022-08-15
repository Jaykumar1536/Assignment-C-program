/*Write a C Program to read any Month Number in integer and 
display Month name in the Word.*/
#include <stdio.h>
void main(){
    int i;
    printf("Enter Value 1-12 for read Month: ");
    scanf("%d",&i);
    switch(i){
        case 1:
            printf("January!");
            break;
        case 2: 
            printf("February!");
            break;
        case 3: 
            printf("March!");
            break;
        case 4: 
            printf("April!");
            break;
        case 5: 
            printf("May!");
            break;
        case 6: 
            printf("Jun!");
            break;
        case 7: 
            printf("July!");
            break;
        case 8: 
            printf("August!");
            break;
        case 9: 
            printf("September!");
            break;
        case 10: 
            printf("October!");
            break;
        case 11: 
            printf("November!");
            break;
        case 12: 
            printf("December!");
            break;
        default: 
            printf("Invalid Input, Try again!");
    }
}