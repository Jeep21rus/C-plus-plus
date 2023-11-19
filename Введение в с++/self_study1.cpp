/*
Написать программу с инициализацией переменных, необходимых в игре
HP - здоровье, значение до 99.99
Damage - урон, значение до 100000
MagicDamage - урон от заклинаний, значение до 99.999
*/
#include <iostream>

int main()
{
	// Здоровье игрока
	float HP = 99.99f;
	std::cout << HP << std::endl;

	// Урон
	int Damage = 100000;
	std::cout << Damage << std::endl;

	// Урон от заклятий
	float MagicDamage = 99.999f;
	std::cout << MagicDamage << std::endl;
}

/*
Модифицировать предыдущую программу. Программа должна приветствовать пользователя
и предлагать ему самому ввести значения переменных
*/
#include <iostream>

int main()

{
	// Приветствие и ввод здоровья
	std::cout << "Hello, my friend!" << std::endl
		<< "Enter your HP" << std::endl;
	float HP;
	std::cin >> HP;
	std::cout << HP << std::endl;

	// Ввод урона
	std::cout << "Enter Damage" << std::endl;
	int Damage;
	std::cin >> Damage;
	std::cout << Damage << std::endl;

	// Ввод урона от заклятий
	std::cout << "Enter Magic Damage" << std::endl;
	float MagicDamage;
	std::cin >> MagicDamage;
	std::cout << MagicDamage << std::endl;
}

/*
Создайте программу, которая с помощью элементов Escape-последовательностей выводит на консоль следующий текст:
Вас приветствует гильдия торговцев "Валтасар"
Для Вас доступно задание:
Уничтожить бандитов на космическом корабле \Покоренный Искатель\
Оплата: 1000 кредитов
*/
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Вас приветствует гильдия торговцев \"Валтасар\"" << endl
		<< "Для Вас доступно задание:" << endl
		<< "Уничтожить бандитов на космическом корабле \\Покоренный Искатель\\" << endl
		<< "Оплата: 1000 кредитов" << endl;
}

/*
В алхимическом магазине продаются зелье лечения за 500 монет, зелье силы за 430 монет
и зелье невидимости за 690 монет. Путешественник Кадзума хочет купить 2 зелья здоровья,
1 зелье невидимости и продать 2 зелья силы. У Кадзумы в запасе N монет, притом N вводится пользователем.
Напишите программу, которая выводит на консоль количество монет, оставшихся у Кадзумы после торговли.
*/
#include <iostream>
using namespace std;

int main()
{
	int CurePotion = 500;
	int PowerPotion = 430;
	int InvisiblePotion = 690;
	float KazumaMoney;
	cout << "Enter the amount of money" << endl;
	cin >> KazumaMoney;

	cout << (KazumaMoney - (2 * CurePotion) - InvisiblePotion) + (2 * PowerPotion);
}

/*
После удачно выполненного задания группа наемников из 6 человек получила вознаграждение
в размере 880 крон. Благородные войны решили разделить деньги поровну. Сколько получит 
каждый участник группы? Сколько крон останется?
*/
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int Award = 880;
	int Group_of_Mercenaries = 6;
	cout << Award / Group_of_Mercenaries << " крон получит каждый участник группы" << endl;
	cout << Award % Group_of_Mercenaries << " крон(ы) останется" << endl;
}

/*
Вальтер пришел на битву с боссом. Когда началась битва, босс ударил Вальтера 
и снял ему одно сердце, после чего Вальтер выпил зелье здоровья, восстановив 1 сердце, и победил босса. 
Используя полученные знания по инкрементации и дискрементации, напишите программу, 
которая реализует данную ситуацию при условии, что у Вальтера изначально было 3 сердца.
*/
#include <iostream>
using namespace std;

int main()
{
	int WalterHealth = 3;
	--WalterHealth;
	++WalterHealth;
	cout << WalterHealth << endl;
}

/*
У Рина в кармане было 10 монет. Когда он начал подниматься по лестнице, его карман порвался, 
и на нечетной ступеньке у него выпадало по 1 монете, а на четной он находил 1 монету. 
Всего на лестнице было 5 ступенек. Используя полученные знания, напишите программу, 
которая реализует данную ситуацию и на каждой ступеньке выводит количество оставшихся у Рина монет.
*/
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int AllMoney = 10;
	cout << "На первой ступеньке у Рина " << --AllMoney << " монет" << endl;
	cout << "На второй ступеньке у Рина " << ++AllMoney << " монет" << endl;
	cout << "На третьей ступеньке у Рина " << --AllMoney << " монет" << endl;
	cout << "На четвёртой ступеньке у Рина " << ++AllMoney << " монет" << endl;
	cout << "На пятой ступеньке у Рина " << --AllMoney << " монет" << endl;
}