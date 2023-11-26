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

/*
 В таверне трактирщик предлагает сыграть путникам в игру: он берет колоду карт, 
 состоящую из валетов, дам, королей и тузов 4х мастей (черви, бубни, крести и пики) и 
 загадывает одну из этих карт. Задача путника - угадать, какую карту или какую масть 
 загадал трактирщик. Напишите программу, которая предлагает пользователю выбрать карту 
 и ее масть. Если пользователь угадал карту или масть, то он получает пирог. Если он 
 угадал и карту, и масть, то трактирщик дает ему месячный запас кваса. Если же игрок ничего 
 не угадал, то ему приходится заплатить 100 золотых.
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

	cout << " Я — трактирщик. Перед Вами колода карт, состоящая из валетов, дам, королей и тузов," << endl
		<< "всех 4 - х мастей (черви, бубни, крести и пики)." << endl
		<< "Ваша задача угадать какую достоинство карты или какую масть загадал я." << endl
		<< "Если Вы угадаете достоинство карты или масть, то Вы получаете пирог." << endl
		<< "Если угадаете и достоинство карты, и масть, то я дам Вам месячный запас кваса." << endl
		<< "Если же Вы ничего не угадаете, то Вам придётся заплатить 100 золотых." << endl;
	
	cout << "Введите достоинство карты" << endl;
	string UserAnswer1;
	cin >> UserAnswer1;
	cout << "Введите масть карты" << endl;
	string UserAnswer2;
	cin >> UserAnswer2;

	if ((UserAnswer1 == "Дама" || UserAnswer1 == "дама")
		and (UserAnswer2 == "Черви" || UserAnswer2 == "черви")) {
			cout << "Вы получаете месячный запас кваса!";
	}
	else if ((UserAnswer1 == "Дама" || UserAnswer1 == "дама")
		or (UserAnswer2 == "Черви" || UserAnswer2 == "черви")) {
			cout << "Вы получаете пирог!";
	}
	else {
		cout << "Вам придётся заплатить 100 золотых!";
	}
}

/*
Напишите программу, которая поможет игроку решить, какого спутника взять на следующее задание.
Пользователь должен выбрать спутника из списка и получить информацию о его классе,
количестве здоровья, оружии и уроне.
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

	cout << "Выберите себе спутника из предложенного списка:" << endl
		<< "1. Саб-Зиро" << endl
		<< "2. Скорпион" << endl
		<< "3. Шан Цун" << endl
		<< "4. Лю Кан" << endl;

	cout << "Введите номер Вашего спутника" << endl;

	int UserNumber;
	cin >> UserNumber;

	switch (UserNumber) {
		case 1:
			cout << "Ваш выбор - Саб-Зиро, грандмастер клана Лин Куэй. " << endl
			<< "Здоровье - 100%. Оружие - холод. Урон - 40 единиц. " << endl;
		break;
		
		case 2:
			cout << "Ваш выбор - Скорпион, воин клана ниндзя Сирай Рю. " << endl
				<< "Здоровье - 100%. Оружие - кунай. Урон - 45 единиц. " << endl;
		break;
		
		case 3:
			cout << "Ваш выбор - Шан Цун, колдун и некромант. " << endl
				<< "Здоровье - 100%. Оружие - черепа и души. Урон - 50 единиц. " << endl;
		break;
		
		case 4:
			cout << "Ваш выбор - Лю Кан, воин от Шао Линь. " << endl
				<< "Здоровье - 100%. Оружие - огонь. Урон - 45 единиц. " << endl;
		break;
		
		default:
			cout << "Выберите число от 1 до 4." << endl;
	}
}

/*
На планете Иден Прайм год длится в два раза меньше, чем на Земле. Напишите программу,
которая расскажет космическим туристам название месяца, который они выберут.
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

	cout << "Вы на планете Иден Прайм, здесь год дится в два раза меньше, чем на Земле. Местные месяцы:" << endl
		<< "1. Январефевраль" << endl
		<< "2. Мартоапрель" << endl
		<< "3. Маеиюнь" << endl
		<< "4. Июлеавгуст" << endl
		<< "5. Сентябреоктябрь" << endl
		<< "6. Ноябредекабрь" << endl;

	cout << "Введите номер Вашего месяца" << endl;

	int UserNumber;
	cin >> UserNumber;

	switch (UserNumber) {
		case 1:
			cout << "Ваш месяц - январефевраль. " << endl;
		break;
		
		case 2:
			cout << "Ваш месяц - мартоапрель. " << endl;
		break;
		
		case 3:
			cout << "Ваш месяц - маеиюнь. " << endl;
		break;
		
		case 4:
			cout << "Ваш месяц - июлеавгуст." << endl;
		break;
		
		case 5:
			cout << "Ваш месяц - сентябреоктябрь. " << endl;
		break;
		
		case 6:
			cout << "Ваш месяц - ноябредекабрь. " << endl;
		break;
		
		default:
			cout << "Выберите число от 1 до 6." << endl;
	}
}

/*
Гаррус недавно заработал 30 монет. Однако он большой любитель азартных игр, и каждый день
он проигрывает в казино по п монет. Выведите на экран количество дней, за которые он потратит
все свои деньги.
*/
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	// Установка локали и уникода
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите количество денег, которые Гаррус проигрывает каждый день в казино." << endl
		<< "Введённая сумма не должна превышать 30 и быть больше 0" << endl;
	
	int AllMoney = 30;
	int SpendMoney;
	cin >> SpendMoney;
	int Days = 0;
	
	while (AllMoney >  0) {
		AllMoney -= SpendMoney;
		++Days;
	}
	cout << Days << ". Столько дней понадобится Гаррусу, чтобы проиграть все деньги в казино." << endl;
}

/*
У Явика есть p патронов, причем p не меньше 2. Он стал раскладывать патроны по подсумкам.
Выведите наименьшее количество патронов (отличное от 1), которые он может положить в свои
подсумки так, чтобы в каждом из них было одинаковое количество аммуниции, а у Явика не осталось
бы лишних патронов.
*/
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	// Установка локали и уникода
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите количество патронов." << endl;
	int p;
	cin >> p;

	// Минимальное количество патронов, которое можно положить в подсумки
	int MinBullets = p; 

	for (int i = 2; i <= p; i++) {
		// Если количество патронов делится нацело на i
		if (p % i == 0) { 
			// То i - это минимальное количество патронов, которое можно положить в подсумки
			MinBullets = i;
		break;
		}
	}

	cout << MinBullets << ". Такое наименьшее количество, которое можно положить в подсумки." << endl;
}
