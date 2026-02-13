#include <iostream>

class NCount
{
private:
    int num;
public:
    NCount() : num(0) {}
    NCount(int input) : num(input) {}

    inline void RepeatCount()
    {
        //  std::endl 보다 '\n'이 빠르기 때문에 사용
        for (int i = 1; i <= num; i++)
        {
            std::cout << i << '\n';
        }
    }
};

int main(int argc, char* argv[])
{
    //C와 C++의 표준 스트림 동기화 해제
    std::ios_base::sync_with_stdio(false);

    //입력과 출력의 연결을 해제
    std::cin.tie(NULL);

    int InputValue;
    if (!(std::cin >> InputValue)) return 0;

    NCount NewNCount(InputValue);
    NewNCount.RepeatCount();

    return 0;
}
