#include<stdio.h>
int main(){
	int n;
	printf("Enter num: ");
	scanf("%d",&n);
	printf(" Table of %d is:",n);
	for(int i=1;i<=10;i++){
		printf("%d\n",n*i);
    }
    return 0;		
}
