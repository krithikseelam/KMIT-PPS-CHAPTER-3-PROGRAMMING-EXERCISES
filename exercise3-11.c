#include <stdio.h>

int main(){
    
    float x, y;
    printf("Enter km travelled(in km) : ");
    scanf("%d", &x);
    printf("Enter fuel consumed(in litres) : ");
    scanf("%d", &y);

    printf("Mileage of the car is equal to: %.2f km/l", x / y);


    return 0;
}

