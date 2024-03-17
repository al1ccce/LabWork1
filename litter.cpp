#include<string> 
#include <iostream> 
using namespace std; 
/* 
 Подсчет количества гласных букв в строке; 
*/ 
int vowelCount(string str) { 
    int kolCount = 0; 
    string lettersLower = { 'a','e','u','o','i','y'};//Список гласных 
    string lettersUp = { 'A','E','U','O','I','Y' };//Список гласных 
    for (int i = 0; i < str.length(); i++) { 
        for (int j = 0; j < lettersUp.length(); j++) { 
            if (str[i] == lettersLower[j] || str[i] == lettersUp[j]) {//поиск гласных и перевод латинских букв в нижний регистр  
                kolCount++;// подсчет кол-во гласных 
                break; 
            } 
        } 
    } 
    return kolCount; 
} 
int main() 
{ 
    string str=""; 
    cout << "Enter: " << endl; 
    getline(cin, str);//ввод строки 
    int kolCount=vowelCount(str); 
    cout << kolCount; 
    return 0; 
}