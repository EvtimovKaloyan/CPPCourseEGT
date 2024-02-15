#include <iostream>

int main()
{
	while (true)
	{
		std::cout << "Enter an integer: ";
		int inputNumber;
		std::cin >> inputNumber;

		if (inputNumber % 2)
		{
			std::cout << inputNumber << " is an odd number." << std::endl;
		}
		else
		{
			std::cout << inputNumber << " is an even number." << std::endl;
		}
	}

    return 0;
}
