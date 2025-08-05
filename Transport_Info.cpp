// Transport_Info.cpp: определяет точку входа для приложения.
//

#include "Transport_Info.h"

using namespace std;

int main(int argc, char* argv[])
{

	for (int i=1; i<argc; i++)
	{
		Transport* transport = TransportFactory::create(atoi(argv[i]));
		if (transport)
		{
			transport->showInfo();
			delete transport; // Очистить память
		}
		else
			cout << "Неизвестный тип транспорта: " << argv[i] << endl;
		cout << endl;
	}

	return 0;
}
