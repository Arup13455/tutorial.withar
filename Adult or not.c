#include<stdio.h>
int main(){
	int age;
	printf("Enter age: ");
	scanf("%d",&age);
	if (age>=18){
		printf("Adult");
	}else if(age>=13&&age<18){
		printf("Teenager");
	}
	else{
		printf("Child");
	}
	return 0;
}
