// подключение заголовочных файлов
#include<iostream>
#include<string>
#include<Windows.h>
// пространство имен
using namespace std;
// function of changing case
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
	// устанавливаем кодировку консоли
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	// new comment
	string ss = "";
	cout << "Enter the string: ";
	// ввод via getline, чтобы учитывался пробел
	getline(cin, ss); 
	ChangingCase(ss);
	return 0;
}