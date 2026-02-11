#include <iostream>

int main(int argc, char* argv[])
{
    int input = 0; // 입력 받을 정수
    std::cin >> input;
    
    if(input >= 90 && input <= 100) //90보다 크거다 같을때 작동, 100보다 작거나 같을때 or 연산.
    {
        std::cout << "A" << std::endl;
    }
    else if(input >= 80 && input <= 89)
    {
        std::cout << "B" << std::endl;
    }
     else if(input >= 70 && input <= 79)
    {
        std::cout << "C" << std::endl;
    }
    else if(input >= 60 && input <= 69)
    {
        std::cout << "D" << std::endl;
    }
     else //조건 그 이외에 정수 일때.
    {
        std::cout << "F" << std::endl;
    }
    return 0;
}