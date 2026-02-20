#include <iostream>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        //공백 출력: (n - i)개만큼 출력.
        //j가 1부터 시작해서 n - i가 될 때까지 반복.
        for(int j = 1; j <= n - i; j++) std::cout << " ";
            
        //별 출력: i개만큼 출력.
        for(int k = 1; k <= i; k++) std::cout << "*";
            
        std::cout << "\n";
    }
    
    return 0;
}

