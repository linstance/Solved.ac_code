//백준 27433번
//문제 :0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.
//작성일 2025-12-01

#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	// 예를 들어 3!이면 1 * 2 * 3 까지 곱하는거기 때문에 시작 숫자가 1로 고정됨.
	// !0은 곱할 수가 자기 자신 만 있기 때문에 결과값이 1이된다.
	// 따라서 1 에다가 지속적으로 커지는 수를 곱해서 더하면 된다.


	long long baseNum = 1; //증가하는 숫자를 곱할 기본값
	int inputNum; //입력할 숫자
	
	cin >> inputNum;


		for (int i = 1; i <= inputNum; i++)
		{
			if (0<= inputNum <= 20)
			{
				baseNum *= i;
			}
		}
		cout << baseNum;
	
	return 0;
}