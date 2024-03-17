// подключение заголовочных файлов
#include<iostream>
#include<string>
#include<locale>
#include<Windows.h>
// пространство имен std
using namespace std;
// функция изменения регистра
void ChangingCase(string ss) { 
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
	// задаем кодировку консоли
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	// локализация Ру
	locale ru{ "ru_RU.UTF-8" }; 
	string ss = "";
	cout << "Enter the string: ";
	// ввод строки с сохранением пробела
	getline(cin, ss); 
	ChangingCase(ss);
	return 0;
}