#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int temp = 0;


    cout << "Rentrer deux nombres" << endl;

    cin >> a >> b;
    cout << "a: " << a << "b: " << b << endl;
    /* Solution avec temp
    temp = a;
    a = b;
    b = temp;
    */

    a=a+b;
    b=a-b;
    a=a-b;


    cout << "a: " << a << "b: " << b << endl;

    return 0;
}