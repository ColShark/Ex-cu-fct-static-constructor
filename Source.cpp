#include <iostream>

class Program
{
public:
	Program()
	{
		std::cout << "Constructorul s-a executat." << std::endl;
	}

	~Program()
	{
		std::cout << "Destructorul s-a executat." << std::endl;
	}
};

void Obiect()
{
	static Program p;
}

int main()
{
	std::cout << "Programul a inceput." << std::endl;
	Obiect();
	std::cout << "Programul s-a terminat." << std::endl;

	//system("pause");
}