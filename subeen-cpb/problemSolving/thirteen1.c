#include <stdio.h>

int main() {
    int i, j;
    char text[] = {'*', '\0'};

    for(i= 7; i > 0; i--) {
        for(j = 0; j < i; j++) {
            printf("%s", text);
        }
           if(i > 1) {
               printf("\n");
           } 
    }

    printf("\n");

    for(i= 2; i < 8; i++) {
        for(j = 0; j < i; j++) {
            printf("%s", text);
        }
               if(i < 7) {
                   printf("\n");
               }
    }
    

        

    

    return 0;
}