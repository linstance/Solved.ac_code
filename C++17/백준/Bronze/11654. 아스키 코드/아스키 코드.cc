#include <iostream>

class Data
{
private:
    char DataNum;
public:
    Data() : DataNum(NULL) {}
    Data(char InputData) : DataNum(InputData) {}
    
    int const GetASCII()
    {
        return (int)DataNum;
    }
};

int main(int argc, char* argv[])
{
    char InputNum;
    std::cin >> InputNum;
    Data MyData(InputNum);
    
    
    std::cout << MyData.GetASCII() << "\n";
    return 0;
}
