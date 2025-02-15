#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int y;
    cout << "calculator manu" << endl;
    cout << "1 adda" << endl;
    cout << "2 subtraction" << endl;
    cout << "3 multiplye" << endl;
    cout << "4 division" << endl;
    cout << "5 back" << endl;

    cout << "select 1 to 5";
    cin >> y;
    if (y == 1)
    {
        cout << "enter a and b" << endl;
        cin >> a >> b;
        c = a + b;
        cout << c;
    }
    else if (y == 2)
    {
        cout << "enter a b no";
        cin >> a >> b;
        c = a - b;
        cout << c;
    }
    else if (y == 3)
    {
        cout << "enter a and b" << endl;
        cin >> a >> b;
        c = a * b;
        cout << c;
    }
    else if (y == 4)
    {
        cout << "enter a and b" << endl;
        cin >> a >> b;
        c = a / b;
        cout << c;
    }
    else
        cout << "back";
    return 0;
}