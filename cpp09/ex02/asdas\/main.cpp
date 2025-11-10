#include <string>
#include <iostream>

int main()
{
	char ola[] = {"como estas?"};

	std::string ola2(ola);
	std::cout << ola2;
}