/*Wite a C Program to Check Whether an Alphabet is 
a Vowel or Consonant.*/
#include <stdio.h>
void main(){
    char ch;
    printf("Enter Your an Alphabet: ");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel!");
            break;
        default:
            printf("Consonant!");
        }
}