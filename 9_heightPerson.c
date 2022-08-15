/*Write a C Program to Accept the Height of a person in Centimeter
and Categorize the person according to their Height.*/
#include <stdio.h>
void main()
{
    int h;
    printf("Enter Your Height (cm): ");
    scanf("%d",&h);
    if (h < 150)
    {
        printf("\nThe Person is Dwarf!");
    }
    else if (h>=150 && h<165)
    {
        printf("\nThe Person is Average Height!");
    }
    else if (h>=165 && h<=195)
    {
        printf("\nThe Person is Taller!");
    }
    else
    {
        printf("\nAbnormal Height!");
    }
}