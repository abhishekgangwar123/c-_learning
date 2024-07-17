// reverse the digits of a number
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<< "entre the number to be reversed"<<endl;
    cin >> n;
    int revnum = 0;
    while (n > 0)
    {
        int i = n % 10;

        revnum = (revnum * 10) + i;

        n = n / 10;
    }

    cout <<"reversed bumber is: " << revnum << endl;
}
