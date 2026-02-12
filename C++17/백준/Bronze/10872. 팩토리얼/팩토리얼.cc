#include <iostream>

class facModule
{
private:
    int inputNum;
    int temp;
    
public:
    facModule() : inputNum(0), temp(1) {} //기본 생성자 = 초기값 설정
    facModule(int newInput) : inputNum(newInput), temp(1) {} //매개 변수를 받는 생성자
    
    int64_t runFactorial()
    {
        for(int i = 1; i <= inputNum; i++)
        {
            temp *= i;
        }
        return temp;
    }
};


 int main(int argc, char* argv[])
 {
 int num;
 std::cin >> num;
 facModule MyfacModule(num);
 std::cout << MyfacModule.runFactorial();
 return 0;
 }
