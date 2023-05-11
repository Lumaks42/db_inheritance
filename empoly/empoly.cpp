// empoly.cpp 
// пример написания базы данных сотрудников с использованием наследования
#include <iostream>
using namespace std;
const int LEN = 80;			// максимальная длина имени

class employee				// каой-то сотрудник
{
private:
	char name[LEN];			// имя сотрудника
	unsigned long number;		// номер сотрудника
public:
	void getdata() 
	{
		cout << "\n Enter last_name: "; cin >> name;
		cout << "\n Enter number: ";	cin >> number;
	}
	void putdata() const
	{
		cout << "\n Last_name: " << name;
		cout << "\n Number: " << number;
	}
};

class manager : public employee		// менеджер
{
private:
	char title[LEN];			// должность, например виице-президент
	double dues;				// сумма взносов вгольф клуб
public:
	void getdata() 
	{
		employee::getdata();
		cout << " Enter position: "; cin >> title;
		cout << " Enter the amount of the contribution to the golf club: "; cin >> dues;
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\n Position: " << title;
		cout << "\n The amount of the contribution to the golf club: " << dues;
	}
};

class scientist : public employee // ученый
{
private:
	int pubs;					// кол-во публикацйи
public:
	void getdata()
	{
		employee::getdata();
		cout << " Enter number of publications: "; cin >> pubs;
	}
	void putdtat() const
	{
		employee::putdata();
		cout << "\n Number of publications: " << pubs;
	}
};

class laborer : public employee // рабочий
{
};

int main()
{
	manager m1, m2;
	scientist s1;
	laborer l1;

	// вводим информацию о нескольких сотрудниках
	cout << endl;
	cout << "\nOutput information first manager: ";
	m1.getdata();

	cout << "\nOutput information second manager: ";
	m2.getdata();

	cout << "\nOutput information first scientist: ";
	s1.getdata();

	cout << "\nOutput information first laborer: ";
	l1.getdata();

	// выведем полученную информацию на экран
	cout << "\nInformation about the first manager: ";
	m1.putdata();

	cout << "\nInformation about the second manager: ";
	m2.putdata();

	cout << "\nInformation about the first scientist: ";
	s1.putdata();

	cout << "\nInformation about the first laborer: ";
	l1.putdata();

	cout << endl;
	return  0;
}

