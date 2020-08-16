#include <stdio.h>

int main() {
    int n = 1;
    while(n <= 100) {
        printf("%d\n", n);
        n++;
        if(n > 50) {
            break;
        }
    }
    
    return 0;
}