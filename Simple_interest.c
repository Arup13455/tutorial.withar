// write a c program to find the simple interest
#include<stdio.h>
int main(){
	float p,t,r;
	printf("Enter the primary price: ");
	scanf("%f",&p);
	printf("Enter the time(in years): ");
	scanf("%f",&t);
	printf("Enter the Interest rate: ");
	scanf("%f",&r);
	printf("The simple interest for %f is: %f",p,(p*t*r)/100);
	return 0;
}
	


