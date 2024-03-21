#include <iostream>


using namespace std;

int main() {

    const int n = 7;
    double arr[n];


    cout << "Enter 7 real numbers for the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }


    int count_positive = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0)
            count_positive++;
    }


    int last_zero_index = -1;
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] == 0) {
            last_zero_index = i;
            break;
        }
    }


    double sum_after_zero = 0;
    if (last_zero_index != -1) {
        for (int i = last_zero_index + 1; i < n; ++i) {
            sum_after_zero += arr[i];
        }
    }
    else {
        cout << "There are no zero elements in the array." << endl;
    }

    // Виведення результатів
    cout << "The number of positive array elements: " << count_positive << endl;
    cout << "The sum of array elements after the last null element: " << sum_after_zero << endl;

    return 0;
}
