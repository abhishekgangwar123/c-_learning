// merge sort means divide and merge.

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int n, int low, int high, int mid)
{
    vector<int> temp; /*temporary array*/
    int left = low;   /*starting index of left half array */
    int right = high; /*starting index of right half array*/

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i < high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void merge_sort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);      /*left half*/
    merge_sort(arr, mid + 1, high); /*right half*/
    merge(arr, low, mid, high);     /*merge sorted halves*/
}

int main()
{
    vector<int> arr = {5, 9, 3, 6, 7, 4, 5, 1};
    int n = 8;
    cout << "befor sorting the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    merge_sort(arr, 0, n - 1);
    cout << "after sorting the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    return 0;
}