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

/*
Максимильян собирается спускаться в высокоуровневое подземелье, полное опасностей.
Напишите программу, которая будет спрашивать, достигли он нужного уровня и в случае,
если ответ "да" пропускает его внутрь, а если ответ "нет", отправляет его в спортивный зал.
*/
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	// Установка локали и уникода
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Максимильян, достиг ли ты нужного уровня? Ответь да или нет." << endl;
	string UserAnswer;
	cin >> UserAnswer;

	// Условия
	if (UserAnswer == "Да" or "да") {
		cout << "Теперь ты можешь пройти внутрь!" << endl;
	}
	else {
		cout << "Немедленно отправляйся в спортивный зал и отжимайся! Тут опасно!" << endl;
	}
}

/*
В городе Риверсдейл путникам предлагается сыграть в игру "Наперстки". 
Суть игры такова: у ведущего есть 5 непрозрачных наперстков, под 2 из которых он кладет шарики,
а затем перемешивает все наперстки между собой. Необходимо написать программу, 
которая реализует эту игру: пользователь вводит два числа от 1 до 5, и если он угадывает один из 
наперстков с шариком, то побеждает, в противном случае ведущий забирает его сапоги.
*/
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	// Установка локали и уникода
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Перед Вами пять напёрстков. Выберите 1, 2, 3, 4 или 5, чтобы выбрать напёрсток. " << endl
		<< "Если Вы угадываете один из напёрстков с шариком, то побеждаете." << endl;
	cout << "Введите номер первого напёрстка" << endl;
	int UserNumber1;
	cin >> UserNumber1;
	cout << "Введите номер второго напёрстка" << endl;
	int UserNumber2;
	cin >> UserNumber2;

	if (UserNumber1 == 1 or UserNumber2 == 1) {
		cout << "Вы победили!!!";
	}
	else if (UserNumber1 == 3 or UserNumber2 == 3) {
		cout << "Вы победили!!!";
	}
	else {
		cout << "Вы проиграли :-(";
	}
}
