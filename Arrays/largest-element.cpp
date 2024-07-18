// Find the largest element in the array

#include <iostream>
using namespace std;

int findLargestElement(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[] = {1, 8, 3, 4, 9, 10};
    int n = 6;
    int largest = findLargestElement(arr, n);
    cout << "The largest element in the array is: " << largest << endl;
}