// Sum of diagnol elements of 2d array

#include <stdio.h>

int main() {
    // Abhishek Kumar 10051
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == j) {
                sum += arr[i][j];
            }
        }
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}



// output

// Sum of diagonal elements = 15
