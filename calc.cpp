#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int a, b, op;   double result;

    cout << "������ ����� �����\n";   cin >> a;

    cout << "������ ��������\n1\t+\n2\t-\n3\t*\n4\t/\n5\ta^b\n\n";  cin >> op;

    cout << "������ ����� �����\n";     cin >> b;

    switch (op) {

    case 1:     
    {
        result = a + b;
        break;
    }
    case 2: 
    {
        result = a - b;
        break;
    }

    case 3:
    {
        result = a * b;
        break;

    case 4:
    {
        result = a / b;
        break;

    }
    case 5:
    {
        result = pow(a, b);
        break;

    }
    }
    cout << "��������� = " << result
        << endl << 1 / 3;
    return 0;
}