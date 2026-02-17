#include <iostream>

class Table
{
private:
    int Num;
    
public:
    Table() {Num = 0;}
    
    Table(int Input) {Num = Input;}
    
    void StartCalculate()
    {
        for (int i = 1; i <= 9; i++) {
            std::cout << Num << " * " << i << " = " << Num * i << "\n";
        }
    }
};

int main(int argc, char* argv[])
{
    int InputNum;
    
    std::cin>>InputNum;
    Table MyTable(InputNum);
    MyTable.StartCalculate();
    return 0;
}
