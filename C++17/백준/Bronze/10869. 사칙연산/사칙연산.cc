#include <iostream>


class calculate
{
private:
    int num1, num2;
    
public:
    calculate() :num1(0), num2(0) {}
    calculate(int input1, int input2) : num1(input1), num2(input2) {}
    
    inline int Addition()
    {
        return num1 + num2;
    }
    
    inline int Subtraction()
    {
        return num1 - num2;
    }
    
    inline int Multiplication()
    {
        return num1 * num2;
    }
    
    inline int Division()
    {
        return num1 / num2;
    }
    
    inline int Remainder()
    {
        return num1 % num2;
    }
    
};



int main(int argc, char* argv[])
{
    int input1, intput2;
    std::cin >>input1 >>intput2;
    
    calculate myCalculate(input1, intput2);
    
    std::cout << myCalculate.Addition() << std::endl;
    std::cout << myCalculate.Subtraction() << std::endl;
    std::cout << myCalculate.Multiplication() << std::endl;
    std::cout << myCalculate.Division() << std::endl;
    std::cout << myCalculate.Remainder();
    
    return 0;
}
