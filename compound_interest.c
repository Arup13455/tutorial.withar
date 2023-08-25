// write a c program to find the compound interest
#include<stdio.h>
#include<math.h>
int main(){
	float p,t,r;
	printf("Enter the primary price: ");
	scanf("%f",&p);
	printf("Enter the time span(in years): ");
	scanf("%f",&t);
	printf("Enter the interest rate: ");
	scanf("%f",&r);
	printf("The compound interest for %f is: %f",p,p*(pow((1+r/100),t)));
	return 0;
}
	


