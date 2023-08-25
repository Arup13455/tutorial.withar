// write a c program to convert temperature(C to F) and (F to C)
#include<stdio.h>
int main(){
	float c,f;
	printf("Enter temperature(Celsius): ");
	scanf("%f",&c);
	printf("The fahrenheit temperature from celsius is: %f\n",(9.0/5.0)*c+32);
	printf("Enter temperature(Fahrenheit): ");
	scanf("%f",&f);
	printf("The celsius temperature from fahrenheit is: %f\n",(f-32)*5.0/9.0);
	return 0;
}
	


