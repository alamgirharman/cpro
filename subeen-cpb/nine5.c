#include <stdio.h>

int stringLength(char str[]) {
    int i, length = 0;

    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }
    return length;
}

int main() {

    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    
    int countryLength = stringLength(country);

    printf("%d\n", countryLength);


    return 0;
}

