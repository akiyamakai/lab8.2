#include <iostream>
#include <cmath>

using namespace std;

bool isFibonacci(int n) {
    int a = 5 * n * n;
    return sqrt(a + 4) == (int)sqrt(a + 4) || sqrt(a - 4) == (int)sqrt(a - 4);
}

int main() {
    const int size = 30;
    double arr[size];


    cout << "Enter 30 real numbers for the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

  
    double sum = 0;
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (isFibonacci(i)) {
            sum += arr[i];
            count++;
        }
    }


    double average = count > 0 ? sum / count : 0;


    cout << "Average of elements at Fibonacci indices: " << average << endl;

    return 0;
}
