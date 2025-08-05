// Transport_Info.cpp: определяет точку входа для приложения.
//

#include "Transport_Info.h"

using namespace std;

bool onlyNumInStrCheck(char* str); // Проверка, что в строке char* только символы чисел (в том числе без "-")

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus"); // для корректного отображения русских букв
	if (argc == 1)
	{
		cout << "Для работы программы передайте ей числовые аргументы при запуске." << endl;
		return 0;
	}
	for (int i=1; i<argc; i++) // перебрать переданные программе аргументы
	{
		Transport* transport = TransportFactory::create(atoi(argv[i])); // создать объект соответствующего класса в фабрике
		if (!onlyNumInStrCheck(argv[i])) // проверка, что данный аргумент содержит только числа
			transport = NULL;
		if (transport) // если номер типа транспорта корректен, вывести инфо о нём
		{
			transport->showInfo();
			delete transport; // очистить память
		}
		else
			cout << "Неизвестный тип транспорта: " << argv[i] << endl;
		cout << endl;
	}
	return 0;
}

bool onlyNumInStrCheck(char* str) // Проверка, что в строке char* только символы чисел (в том числе без "-")
{
	if (str == NULL || *str == '\0') // проверка на пустую строку
		return false;
	for (int i = 0; str[i] != '\0'; i++) // проверка, что в строке только числа
	{
		if (str[i] < '0' || str[i] > '9')
			return false;
	}
	return true;
}