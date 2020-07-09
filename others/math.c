#include <stdio.h>

int main() {
    int result = 1;
    int howMany = 30;
    int squareR = 2;

    int i;

    for(i = 1; i <= howMany; i++) {
        result *= squareR; 
    }

    printf("%d\n", result);

    return 0;
}