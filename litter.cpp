
#include <iostream> 
#include <Windows.h> 
#include<string>
using namespace std;
//22.03
int vowelCount(string str) {
    int kolCount = 0;
    // Список гласных
    string lettersLower = { 'a','e','u','o','i','y','а','е','ё','и','у','о','э','ю','я','ы' };
    string lettersUp = { 'А','Е','Ё','И','У','О','Э','Ю','Я','Ы','A','E','U','O','I','Y' };
    // Цикл поиска гласных
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < lettersUp.length(); j++) {
            if (str[i] == lettersLower[j] || str[i] == lettersUp[j]) {
                kolCount++;
                break;
            }
        }
    }
    return kolCount;
}
int main()
{
    // Подключение русского языка
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str = "";
    cout << "Введите строкy: " << endl;
    // Ввод строки 
    getline(cin, str);
    int kolCount = vowelCount(str);
    cout << "В строке " << kolCount << " гласных букв";
    return 0;
}
