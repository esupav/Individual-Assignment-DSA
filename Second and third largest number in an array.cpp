#include <iostream>
using namespace std;
int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array too small" << endl;
        return INT_MIN;
    }
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == INT_MIN) {
        cout << "No second largest element exists" << endl;
        return INT_MIN;
    }
    return second;
}
int findThirdLargest(int arr[], int size) {
    if (size < 3) {
        cout << "Array too small" << endl;
        return INT_MIN;
    }
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }
    if (third == INT_MIN) {
        cout << "No third largest element exists" << endl;
        return INT_MIN;
    }
    return third;
}

int main() {
    int arr[] = {11, 35, 1, 10, 37, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    // Find second largest
    int secondLargest = findSecondLargest(arr, size);
    if (secondLargest != INT_MIN) {
        cout << "Second largest element is: " << secondLargest << endl;
    }
    // Find third largest
    int thirdLargest = findThirdLargest(arr, size);
    if (thirdLargest != INT_MIN) {
        cout << "Third largest element is: " << thirdLargest << endl;
    }
    return 0;
}
