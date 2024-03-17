<<<<<<< HEAD
﻿#include<string>
=======
#include<string> 
>>>>>>> 4405a2c63faee8f7fd8b9f3423922cf32a6fbbfc
#include <iostream> 
#include <Windows.h> 
using namespace std;
int vowelCount(string str) {
    int kolCount = 0;
<<<<<<< HEAD
    // Список гласных
    string lettersLower = { 'a','e','u','o','i','y','а','е','ё','и','у','о','э','ю','я','ы' };
    string lettersUp = { 'А','Е','Ё','И','У','О','Э','Ю','Я','Ы','A','E','U','O','I','Y' };
    // Цикл поиска гласных
=======
    // ‘¯¨á®ª £« á­ëå
    string lettersLower = { 'a','e','u','o','i','y',' ','¥','ñ','¨','ã','®','í','î','ï','ë' };
    string lettersUp = { '€','…','ð','ˆ','“','Ž','','ž','Ÿ','›','A','E','U','O','I','Y' }; 
    // –¨ª« ¯®¨áª  £« á­ëå
>>>>>>> 4405a2c63faee8f7fd8b9f3423922cf32a6fbbfc
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
<<<<<<< HEAD
    // Подключение русского языка
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str = "";
    cout << "Введите строкy: " << endl;
    // Ввод строки 
    getline(cin, str);
    int kolCount = vowelCount(str);
    cout << "В строке " << kolCount << " гласных букв";
=======
    // ®¤ª«îç¥­¨¥ àãááª®£® ï§ëª 
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str = "";
    cout << "‚¢¥¤¨â¥ áâà®ªy: " << endl;
    // ‚¢®¤ áâà®ª¨ 
    getline(cin, str);
    int kolCount = vowelCount(str);
    cout << "‚ áâà®ª¥ " << kolCount << " £« á­ëå ¡ãª¢";
>>>>>>> 4405a2c63faee8f7fd8b9f3423922cf32a6fbbfc
    return 0;
}
