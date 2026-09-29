#include <stdio.h>

int main(){
    
    int x;
    printf("Enter no. of days : ");
    scanf("%d", &x);

    printf("No. of years : %d\n", x / 365);
    printf("No. of months: %d\n", (x%365)%7);
    printf("No. of weeks : %d\n", (x%365) / 7);

    return 0;
}

