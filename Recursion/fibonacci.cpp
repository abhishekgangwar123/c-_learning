#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int last = fibonacci(n - 1);
    int slast = fibonacci(n - 2);

    return last + slast;
}
void printFibonacciSeries(int n)
{
    for (int i = 0; i <= n; ++i)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << "fibonacci series from 0 to" << n << "number is : ";
    printFibonacciSeries(n);
    return 0;
}