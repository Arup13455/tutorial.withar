#include<stdio.h>
int main(){	
	int n;
	printf("Enter num: ");
	scanf("%d",&n);
	int sum = 0;	
    for(int j=n; j>=1; j--){
    	sum = sum + j;
		printf("%d\n",j);
	}
	printf("sum of n numbers is: %d",sum); 
    return 0;		
}
