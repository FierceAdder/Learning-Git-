#include <stdio.h>

//Code to calculate the perimeter and area of a rectangle

int main(){

    double l,b;

    printf("Enter the length of the rectangle\n");

    scanf("%lf",& l);
    
    printf("enter the Breadth of the rectangle\n");

    scanf("%lf",& b);
    
    double perimeter;

    perimeter=2*(l+b);

    double area;

    area=l*b;

    printf("The length entered is : %.2lf\n",l);
    printf("The Breadth entered is : %.2lf\n",b);
    printf("the area of the rectangle is : %.2lf\n",area);
    printf("The Perimeter of the rectangle is : %.2lf\n ",perimeter);

    return 0;
}