#include <stdio.h>

int sumOfDigits(int n) {
  // Abhishek Kumar 10051//
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int main() {
    int n = 4123;
    printf("Output = %d", sumOfDigits(n));
    return 0;
}
//output 
//Output = 10 //