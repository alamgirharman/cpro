#include <stdio.h>

int main() {

    char country[] = {'B', 'A', 'N', 'G', 'L', 'A', 'D', 'E', 'S', 'H'};

    printf("%s\n", country);

    int i, length;
    length = 10;

    for(i = 0; i < length; i++) {
        if(country[i] <= 'Z' && country[i] >= 'A') {
            country[i] = 'a' + (country[i] - 'A');
        }
    }

    printf("%s\n", country);


    return 0;
}