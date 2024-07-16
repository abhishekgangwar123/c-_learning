// code to reverse an array using recursion:-

#include <iostream>
using namespace std;

void printArray(int ans[], int n)
{
    cout << "the reversed array is :- ";
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}

void reverseArray(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start + 1, end - 1);
}


int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];  // Dynamic array allocation

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, 0, n - 1);

    printArray(arr, n);

    delete[] arr;  // Free the dynamically allocated memory

    return 0;
}