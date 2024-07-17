#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    cout << "after eslection sort : " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {12, 36, 26, 11, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "before selection sort : " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << "\n";
    selection_sort(arr, n);
    return 0;
}
