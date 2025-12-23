#include <stdio.h>

int main() {
    //abhishek kumar erp 10051//
    int n, i, sum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        if(i % 2 != 0)
            continue;
        sum += i;
    }
    printf("%d", sum);
    return 0;
}
// output
4
6
//