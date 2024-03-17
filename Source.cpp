#include<iostream>
#include<string>
#include<locale>
#include<Windows.h> // подключение заголовочных файлов
using namespace std; // пространство имен std
void ChangingCase(string ss) { // функция изменения регистра
	cout << "To lower case: ";
	for (int i = 0; i < ss.length(); i++) {
		putchar(tolower(ss[i]));
	}
	cout << endl;
	cout << "To upper case: ";
	for (int i = 0; i < ss.length(); i++) {
		putchar(toupper(ss[i]));
	}

}

int main() {
	SetConsoleCP(1251); // задаем кодировку
	SetConsoleOutputCP(1251);
	locale ru{ "ru_RU.UTF-8" }; // локализация Ру
	string ss = "";
	cout << "Enter the string: ";
	getline(cin, ss); // ввод строки
	ChangingCase(ss);
	return 0;
}