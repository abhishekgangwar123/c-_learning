// => What is Recursion?

// It is a phenomenon when a function calls itself indefinitely until a specified condition is fulfilled.

// ----------------------------------------------------------------------------------------------------------------------------

// => What is Stack Overflow in Recursion?

// Whenever recursion calls are executed, they’re simultaneously stored in a recursion stack where they wait for the completion
// of the recursive function. A recursive function can only be completed if a base condition is fulfilled and the control returns
//  to the parent function.
// But, when there is no base condition given for a particular recursive function, it gets called indefinitely which results
//  in a Stack Overflow i.e, exceeding the memory limit of the recursion stack and hence the program terminates
//  giving a Segmentation Fault error.

//----------------------------------------------------------------------------------------------------------------------------

// => Base Condition

// It is the condition that is written in a recursive function in order for it to get completed and not to run infinitely.
// After encountering the base condition, the function terminates and returns back to its parent function simultaneously.

// ---------------------------------------------------------------------------------------------------------------------------

// code to print numbers from 0 to 2:-

#include <iostream>
using namespace std;

int cnt = 0;
void print()
{
    if (cnt == 3)
        return;
    cout << cnt << endl;

    cnt++;
    print();
}

int main()
{
    print();
    return 0;
}