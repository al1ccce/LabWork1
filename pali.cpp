#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

//Функция проверки строки на палиндром
int isPali(string str) {
	//Сравнение i-ых элементов с начала и с конца строки
	for (int i = 0; i < str.length() / 2; i++) {
		if (tolower(str[i]) != tolower(str[str.length() - i - 1])) {
			return 0;
		}
	}
	return 1;
}

int main() {
	//Русский язык
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Ввод строки
	cout << "Введите строку" << endl;
	string str = "";
	getline(cin, str);
	//Вывод результата проверки
	if (isPali(str)) {
		cout << "Строка является палиндромом";
	} else {
		cout << "Строка не является палиндромом";
	}
}