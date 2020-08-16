#include <stdio.h>

int main() {
    int namota = 5;
    int iLoop = 1;

    while(iLoop <= 10) {
        printf("%d x %d = %d\n", namota, iLoop, namota * iLoop);

        iLoop++;
    }

    return 0;
}