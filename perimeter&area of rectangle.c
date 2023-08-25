// write a c program to find the perimeter & area of a rectangle
#include<stdio.h>
int main(){
	float length,breadth;
	printf("Enter the length of rectangle: ");
	scanf("%f",&length);
	printf("Enter the breadth of rectangle: ");
	scanf("%f",&breadth);
	printf("The perimeter of rectangle is: %f\n",2*(length+breadth));
	printf("The area of rectangle is: %f",(length*breadth));	
	return 0;
}
	


