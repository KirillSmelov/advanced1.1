#include<iostream>
#include<vector>
#include<Windows.h>
int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::vector<int> v{ 4,7,9,14,12 };
	std::cout << "Входные данные: ";
	for (const auto& number : v)
	{
		std::cout << number << ' ';
	}
	std::cout << std::endl;
	std::cout << "Выходные данные: ";
	for (auto number : v)
	{
		if (number % 2 != 0)
		{
			number *= 3;
		}
		std::cout << number << " ";
	}


	return 0;
}
