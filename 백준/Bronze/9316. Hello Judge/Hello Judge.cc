#include <iostream>

class Printer
{
private:
	int Count; // 출력 할 줄 수

public:
	Printer() : Count(0) {}
	Printer(int NewCount) : Count(NewCount) {}

	void execute()
	{
		for (int i = 1; i<= Count; i++)
		{
			std::cout << "Hello World, Judge " << i << "!"<< std::endl;
		}
	}
};


int main(int argc, char* argv[])
{
	int InputCount = 0;
	std::cin >> InputCount;
	Printer MyPrinter(InputCount);
	MyPrinter.execute();

	return 0;
}