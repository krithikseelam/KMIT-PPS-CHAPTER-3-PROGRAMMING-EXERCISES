#include <stdio.h>

int main(){
    
    int x;
    printf("Enter a number :");
    scanf("%d", &x);
    int i = 1;
    while (i <= 10)
    {
        printf("%d X %d = %d\n", x, i, x*i);
        i++;
    }
    

    return 0;
}

