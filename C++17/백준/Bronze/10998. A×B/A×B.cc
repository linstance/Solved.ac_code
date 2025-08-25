#include <iostream>
using namespace std;

//전역 변수로 선언
int num1, num2, result;

int main(void)
{
    cin >> num1;
    cin >> num2;

    result = num1 * num2;

    cout << result << endl;

    return 0;
}