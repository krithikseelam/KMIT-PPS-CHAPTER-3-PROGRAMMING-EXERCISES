#include<stdio.h>
int main(){
	int number,negative = 0,positive = 0;
	int i = 1;
	while(i<=10){
		printf("No: \n");
		scanf("%d",&number);
		if(number < 0){
			positive++;
		}
		else if(number > 0){
			negative++;
		}
		else{
			break;
		}
	}

	printf("Positive: %d \n Negative: %d",positive,negative);
	return 0;	
}
