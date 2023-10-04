#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{

	cout << "Введите номер задания:\n";
	cout << "1) Вывести, сколько памяти (в байтах) на вашем компьютере отводится под различные типы данных со спецификаторами и без: int, short int, long int, float, double, long double, char и bool.\n";
	cout << "2) Вывести на экран двоичное представление в памяти (все разряды) целого числа. При выводе необходимо визуально обозначить знаковый разряд и значащие разряды отступами или цветом.\n";
	cout << "3) Вывести на экран двоичное представление в памяти (все разряды) типа float. При выводе необходимо визуально обозначить знаковый разряд мантиссы, знаковый разряд порядка (если есть), мантиссу и порядок.\n";
	
	int vvod;
	cin >> vvod;

	if (vvod == 1) {
		cout
			<< "int: " << sizeof(int) << '\n' <<
			"short int: " << sizeof(short int) << '\n' <<
			"float: " << sizeof(float) << '\n' <<
			"double: " << sizeof(double) << '\n' <<
			"long double: " << sizeof(long double) << '\n' <<
			"char: " << sizeof(char) << '\n' <<
			"bool: " << sizeof(bool) << '\n';

	}

	if (vvod == 2) {
		int a = -127;
		int order = sizeof(int) * 8 - 1;
		int mask = 1 << order;
		cout << a << ' ' << &a << ' ' << order << ' ' << mask << '\n';
	}

	if (vvod == 3) {
		int a = -127;
		int order = sizeof(int) * 8 - 1;
		int mask = 1 << order;
		for (int i = 0; i <= order; i++) {
			cout << ((a & mask) ? 1 : 0);
			a = a << 1;
			if (!i || (i + 1) % 8 == 0)
			{
				cout << ' ';
			}
		}
		union {
			int integerA = 127;
			float floatB;
		};
	}

	if (vvod >= 4) {
		HANDLE COLOR = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(COLOR, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "Доступно только три задания!!!";
	}

}