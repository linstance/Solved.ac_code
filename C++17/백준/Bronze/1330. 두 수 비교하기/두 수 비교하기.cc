#include <iostream>

class CoModule
{
private:
    int num1;
    int num2;
    
public:
    CoModule() : num1(0), num2(0) {}
    CoModule(int input1, int input2) : num1(input1), num2(input2) {}
    
    inline void ex()
    {
     
        if (num1 > num2)
        {
            std::cout << ">";
        }
        else if (num1 < num2)
        {
            std::cout << "<";
        }
        else // num1 == num2 인 경우
        {
            std::cout << "==";
        }
    }
};

int main()
{
    int a, b;
    if (!(std::cin >> a >> b)) return -1;
    
    CoModule myCo(a, b);
    myCo.ex();
    
    return 0;
}

