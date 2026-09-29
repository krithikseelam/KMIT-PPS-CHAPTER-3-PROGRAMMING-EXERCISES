#include <stdio.h>

int main(){
    
    int x;
    printf("Enter a number :");
    scanf("%d", &x);
    int y = 1;
    while (y < 11)
    {
        printf("%d X %d = %d\n", x, y, x * y);
        y++;
    }
    

    return 0;
}

