/*Write a C Program to Calculate Profit and Loss
on a Transaction.*/
#include <stdio.h>
void main(){
    int c,s,result;
    printf("Enter Cost Price: ");
    scanf("%d",&c);
    printf("Enter Selling Price: ");
    scanf("%d",&s);
    result = s-c;
    if(result>0){
        printf("\nYou Can Booked your Profit Amount: %d",result);
    }else{
        printf("\nYou Can Booked your Loss Amount: %d",-(result));
    }
}