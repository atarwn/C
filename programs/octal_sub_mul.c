#include <stdio.h>
#include <string.h>

void rswu(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            str[i] = '_';
        }
    }
}

int main() {
    char buffer[10];
    printf("octal\n");
    printf("_*|");

    for (int i = 0; i <= 7; i++) {
        sprintf(buffer, "%3o", i);  
        rswu(buffer);  
        printf("%s", buffer);
    }
    
    printf("\n");

    for (int i = 0; i <= 7; i++) {
        printf("%2o|", i);  
        for (int j = 0; j <= 7; j++) {
            printf("%3o", i * j);
        }
        printf("\n");
    }
    
    printf("\n_+|");
    
    for (int i = 0; i <= 7; i++) {
        sprintf(buffer, "%3o", i);  
        rswu(buffer);  
        printf("%s", buffer);
    }
    
    printf("\n");

    for (int i = 0; i <= 7; i++) {
        printf("%2o|", i);  
        for (int j = 0; j <= 7; j++) {
            printf("%3o", i + j);
        }
        printf("\n");
    }

    return 0;
}
