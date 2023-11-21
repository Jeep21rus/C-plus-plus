/*
Напишите программу, которая будет запрашивать у пользователя его имя, а потом выводить его на экран.
*/
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	// установка локали и уникода
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите Ваше имя" << endl;
	string UserName;
	cin >> UserName;
	cout << "Привет, " << UserName;
}

/*
Создайте программу регистрации в новых пользователей. Программа должна запрашивать логин,
пароль, имя и возраст пользователя и выводить их на экран.
*/
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	// установка локали и уникода
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Логин
	cout << "Введите Ваш логин" << endl;
	string UserLogin;
	cin >> UserLogin;
	cout << "Ваш логин: " << UserLogin << endl;
	// Пароль
	cout << "Введите Ваш пароль" << endl;
	string UserPassword;
	cin >> UserPassword;
	cout << "Ваш пароль: " << UserPassword << endl;
	// Имя
	cout << "Введите Ваше имя" << endl;
	string UserName;
	cin >> UserName;
	cout << "Ваше имя: " << UserName << endl;
	// Возраст
	cout << "Введите Ваш возраст" << endl;
	int UserAge;
	cin >> UserAge;
	cout << "Ваш возраст: " << UserAge << endl;
}
