// Row wise sum of 2d array


#include <stdio.h>

int main() {
    // Abhishek Kumar 10051
    int arr[3][3] = {
    
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(int i = 0; i < 3; i++) {
        int sum = 0;   

        for(int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}


// output

// Sum of row 1 = 6
// Sum of row 2 = 15
// Sum of row 3 = 24
