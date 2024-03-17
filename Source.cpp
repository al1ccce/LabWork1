#include<iostream>
#include<string> // подключение заголовочных файлов
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
	string ss = "";
	cout << "Enter the string: ";
	getline(cin, ss);
	ChangingCase(ss);
	return 0;
}