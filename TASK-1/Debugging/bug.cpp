#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 0;
    int result = 0;

    
    for (int i = 0; i <= a; ++i) {
        b += i;
    }

    result = a / b;
 
    cout << "Result: " << result << endl;

    int c = 0;  // Initialize c with a value
    cout << "Initialized variable c: " << c << endl;

    int d = 10;
    while (d >= 0) {
        cout << "d: " << d << endl;
        d--;  // Decrement d inside the loop
    }

    int array[3] = {1, 2, 3};
    for (int i = 0; i < 3; ++i) {  // Use i < 3 instead of i <= 3
        cout << "array[" << i << "]: " << array[i] << endl;
    }

    return 0;
}