#include<iostream>
#include<vector>
#include<Windows.h>
#include <algorithm>
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

	std::for_each(v.begin(), v.end(), [](int& v) {if (v % 2 != 0) { v *= 3; }});
	std::cout << "Выходные данные: ";
	
	for (const auto& number : v)
	{
		std::cout << number << ' ';
	}

	return 0;
}
