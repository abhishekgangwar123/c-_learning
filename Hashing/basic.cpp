// => Hashing ?
// It means Pre-storing/Fetching.

// Step 1 - Pre-storing: In this step, we will create an array(named hash array) of size 13(so that we can get the index 12) initialized with 0.
// In this hash array, we are going to store the frequency of each element(i.e. The number of times each element appears in the array) of the
// given array. To do so, we will iterate over the given array, and for each element arr[i], we will do hash[arr[i]] += 1.
// This step is named pre-storing as we are pre-calculating the information about the element of the array before answering the queries.

// Step 2 - Fetching: In this step, we will select each query i.e. the number and for the query, we will just fetch the value of hash[number]
// and return it instead of running a ‘for loop’ every time.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "enter the number";
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
    return 0;
}