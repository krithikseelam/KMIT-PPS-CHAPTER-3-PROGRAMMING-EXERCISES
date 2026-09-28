#include<stdio.h>
int main(){
	float p_rice = 16.75;
	float p_sugar = 15.00;
	
	float w_rice,w_sugar;
	float A_rice,A_sugar;

	// p --- price w --- weight A --- total price
	
	printf("*** LIST OF ITEMS ***\n");
	printf("Item     Price\n");
	printf("Rice     Rs. %.2f\n",p_rice);
	printf("Sugar    Rs. %.2f\n\n\n",p_sugar);

	printf("Enter amount of Kgs of Rice: \n");
	scanf("%f",&w_rice);

	printf("Enter amount of kgs of Sugar: \n");
	scanf("%f",&w_sugar);
	
	A_rice = p_rice * w_rice;
	A_sugar = p_sugar * w_sugar;

	printf("Rice: %.2f\n",A_rice);
	printf("Sugar: %.2f\n",A_sugar);
	printf("Total: %.2f",A_rice + A_sugar);
	

        return 0;
}

