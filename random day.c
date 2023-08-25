#include<stdio.h>
int main(){
	int day;//1-mon,2-tues,3-wed
	printf("Enter day(1-7): ");
	scanf("%d",&day);
	switch(day){
		case-1:
		    printf("Monday");
		    break;
		case-2:
		    printf("Tuesday");
		    break;
		case-3:
		    printf("Wednesday");
		    break;
		case-4:
		    printf("Thursday");
		    break;
		case-5:
		    printf("Friday");
		    break;
		case-6:
		    printf("Satarday");
		    break;
		case-7:
		    printf("sunday!");
		    break;
		default:
			printf("Invalid day!");			
	}
	return 0;
}
