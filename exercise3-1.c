#include<stdio.h>
int main(){
	int n;
	int i = 1;
	float sum = 0;
	
	printf("series 1 + 1/2 + 1/3 + ..... + 1/n \n");
	printf("Enter a number for n: \n");
	scanf("%d",&n);

	while(i <= n){
		sum = sum + (1.0/i);
		i++;
	}	
	printf("The sum of the given series = %f",sum);

	return 0;
}

