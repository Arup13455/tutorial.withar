#include<stdio.h>
int main(){
	int num;
	printf("Enter num: ");
	scanf("%d",&num);
	if(num<30){
		printf("Grade: C");		
	}else if(30<=num && num<70){
		printf("Grade: B");
	}else if(70<=num && num<90){
		printf("Grade: A");
	}else if(90<=num && num<100){
		printf("Grade: A+");
	}
    return 0;		
}
