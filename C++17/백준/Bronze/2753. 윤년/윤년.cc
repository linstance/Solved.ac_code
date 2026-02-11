#include <iostream>

class YearAnalyze
{
private:
    int year;
    
public:
    YearAnalyze() : year(0) {}
    YearAnalyze(int ThisYear) : year(ThisYear){}
    
    void ThisLeapYear()
    {
        if((year% 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            std::cout << "1" << std::endl;
        }
        else
        {
            std::cout << "0" << std::endl;
        }
    }
};

int main(int argc, char* argv[])
{
    int InputYear;
    
    std::cin >> InputYear;
    
    YearAnalyze MyYear(InputYear);
    MyYear.ThisLeapYear();
    
    return 0;
}
