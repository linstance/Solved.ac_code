#include <iostream>

class Discriminator
{
private:
	int CoinNumber;
	int Price;

public:
	Discriminator() : CoinNumber(0), Price(0) {}
	Discriminator(int NewCoinNumber, int NewPrice) : CoinNumber(NewCoinNumber), Price(NewPrice) {}

	void Compare()
	{
		if (CoinNumber * 100 >= Price)
		{
			std::cout << "Yes" << std::endl;
		}
		else
		{
			std::cout << "No" << std::endl;
		}
	}

};


int main(int argc, char* argv[])
{
	int MyCoin = 0;
	int ThisPrice = 0;
	std::cin >> MyCoin >> ThisPrice;

	Discriminator NewDiscriminator(MyCoin, ThisPrice);
	NewDiscriminator.Compare();

	return 0;
}