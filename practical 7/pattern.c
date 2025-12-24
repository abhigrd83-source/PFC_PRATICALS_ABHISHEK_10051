#include <iostream>
using namespace std;
int main()
{
    // Abhishek Kumar 10051
    int i, j, n = 4;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << (char)('A' + j - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}

// output
// A 
// A B 
// A B C 
// A B C D 
