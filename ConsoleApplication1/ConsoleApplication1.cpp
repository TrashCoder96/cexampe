// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream> 
#include <string> // это необходимо для использования строковых переменных! 

int main()
{
	int f_1 = 1;
	int f_2 = 1;
	for (int i = 0; i < 1000; i++) {
		std::cout << f_1 << std::endl;
		std::cout << f_2 << std::endl;
		f_1 = f_1 + f_2;
		f_2 = f_1 + f_2;
	}
	system("pause");
	return 0;
}

