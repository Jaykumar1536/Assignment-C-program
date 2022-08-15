/*Write a C Program to Read Temperature in Digree Centigrade and 
Display a suitable Message According to temperature state.*/
#include <stdio.h>
void main(){
    int temp;
    printf("Enter Temperature in Digree Centigrade: ");
    scanf("%d",&temp);
    if (temp<0){
        printf("\nFreezing Weather!");
    }else if(temp>0 && temp<10){
        printf("\nVery Cold Weather!");
    }else if(temp>=10 && temp<20){
        printf("\nCold Weather!");
    }else if(temp>=20 && temp<30){
        printf("\nNormal Weather!");
    }else if(temp>=30 && temp<40){
        printf("\nIts Hot Weather!");
    }else{
        printf("\nIts Very Hot Weather!");
    }
}