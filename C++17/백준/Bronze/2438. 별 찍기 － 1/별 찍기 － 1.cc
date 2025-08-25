#include<iostream>
using namespace std;

int main(void)
{
    int star;
    cin >> star;

    for (int i = 1; i <= star; i++) // 0부터 시작한다면 의도치 않은 공백을 추가할수 있음
    {
        //값을 입력 받으면 첫번째 루프에서 바로 별 1개를 찍고 아래 반복문을 실행
        //첫번째 반복문은 별이 찍힐 층을 계산한다고 생각하면 좋음
        //두번째 반복문은 말 그래로 찍힐 별의 개수를 계산
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
        
    }
    

    return 0;
}
