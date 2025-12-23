#include <stdio.h>

int main() {
    // abhishek kumar erp 10051 //
    int pin = 1234, input, attempts = 3;

    while(attempts > 0) {
        scanf("%d", &input);
        if(input == pin) {
            printf("Access Granted");
            return 0;
        } else {
            attempts--;
            printf("Wrong PIN\n");
        }
    }

    printf("Card Blocked");
    return 0;
}
// output
2
Wrong PIN
//