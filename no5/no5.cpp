#include <iostream>
#include <math.h>
using namespace std;

void fun(int a) {
    int number[8] = { 0 };
    for (int i = 7; i >= 0; i--)
    {
        number[i] = a % 2;
        a = a / 2;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << number[i];
    }
}
void fun1(int a) {

    a = a * -1;
    int number[8] = { 0 };
    for (int i = 7; i >= 0; i--)
    {
        number[i] = a % 2;
        a = a / 2;
    }
    int k;
    for (int i = 7; i >= 0; i--)
    {
        if (number[i] == 1)
        {
            k = i;
            break;
        }
    }
    for (int i = k - 1; i >= 0; i--)
    {
        if (number[i] == 1)number[i] = 0;
        else
            number[i] = 1;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << number[i];
    }
}
int main()
{
    int number1;
    cin >> number1;
    if (number1 >= 0)fun(number1);
    else fun1(number1);
    return 0;
}
