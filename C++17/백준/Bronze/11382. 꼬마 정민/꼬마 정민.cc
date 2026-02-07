#include <iostream>

class tripleAdd
{
private:
    int64_t num1, num2, num3;
    
public:
    tripleAdd() : num1(0), num2(0), num3(0) {}
    tripleAdd(int64_t input1, int64_t input2, int64_t intput3) : num1(input1), num2(input2), num3(intput3){}
    
    inline int64_t allAdd(){return num1 + num2 + num3;}
};

int main(int argc, char* argv[])
{
    int64_t _input1, _intput2, _input3;
    std::cin >>_input1 >> _intput2 >> _input3;
    tripleAdd newTripleAdd(_input1, _intput2, _input3);
    
    std::cout << newTripleAdd.allAdd();
    
    return 0;
}
