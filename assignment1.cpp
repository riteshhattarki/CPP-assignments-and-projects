#include <iostream>
#include <string>
using namespace std;

int findMax(const int arr[], int size) {
    int maxValue = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

int findMin(const int arr[], int size) {
    int minValue = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
    }
    return minValue;
}

int main() {
    int myArray[10];
    for (int i = 0; i < 10; i++) {
        cout << "Enter a value: ";
        cin >> myArray[i];
    }

    int max = findMax(myArray, 10);
    int min = findMin(myArray, 10);

    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;

}