// write a c program to find the perimeter & area of a triangle
#include<stdio.h>
int main(){
	float base,height,side;
	printf("Enter the base of triangle: ");
	scanf("%f",&base);
	printf("Enter the height of triangle: ");
	scanf("%f",&height);
	printf("The area of triangle is: %f\n",0.5*(base*height));
	printf("Enter the side of triangle: ");
	scanf("%f",&side);		
	printf("The perimeter of triangle is: %f\n",3*side);		
	return 0;
}
	


