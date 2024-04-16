// Binary to Decimal Conversion.
// Write a program in C++ that converts binary number into decimal number.

// Ques1 -->  101;

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int num, i, r, ans = 0;
    cout << "Enter binary number";
    cin >> num;

    i = 0;

    while (num > 0)
    {

        r = num % 10;
        ans += r * pow(2, i);
        i++;
        num /= 10;
    }

    cout << ans << endl;

    return 0;
}