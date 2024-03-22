#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

//Функция проверки строки на палиндром
string delSym(string str, char sym){
	for (int i = 0; i < str.length(); i++) {
		if (str[i]==sym){
			for (int j = i; j < str.length()-1; j++) {
				str[j]=str[j+1];
			}
			str.pop_back();
		}
	}
	return str;
}
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
	cout << "Enter string" << endl;
	string str = "";
	getline(cin, str);
	str=delSym(str, ' ');
	//Вывод результата проверки
	if (isPali(str)) {
		cout << "True";
	} else {
		cout << "False";
	}
}