#include<stdio.h>
int main(){
	int ascii_val;
	printf("Enter a value for which you want the ASCII character (0-128): ");
	scanf("%d",&ascii_val);

	printf("ASCII character: %c",ascii_val);
	return 0;
}
