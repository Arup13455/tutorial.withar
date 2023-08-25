// print the reverse table of a number n
#include<stdio.h>
int main(){
	int n,rev_table;
	printf("Enter num: ");
	scanf("%d",&n);
	printf("Reverse table of %d is:%d\n",n);
	for(int i=10; i>=1; i--){
		rev_table = n*i;
		printf("%d\n",rev_table);		
	}
	return 0;
}
