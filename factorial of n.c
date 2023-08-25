// print the factorial of a number n
#include<stdio.h>
int main(){
	int n;
	printf("Enter num: ");
	scanf("%d",&n);
	int fact=1;
	for(int i=1; i<=n; i++){
		fact = fact*i;		
		}
	printf("Factorial of %d is:%d\n",n,fact);
	return 0;
}
