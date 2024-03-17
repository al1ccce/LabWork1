#include<string> 
#include <iostream> 
#include <Windows.h> 
using namespace std;
int vowelCount(string str) {
    int kolCount = 0;
    // ‘¯¨á®ª £« á­ëå
    string lettersLower = { 'a','e','u','o','i','y',' ','¥','ñ','¨','ã','®','í','î','ï','ë' };
    string lettersUp = { '€','…','ð','ˆ','“','Ž','','ž','Ÿ','›','A','E','U','O','I','Y' }; 
    // –¨ª« ¯®¨áª  £« á­ëå
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
    // ®¤ª«îç¥­¨¥ àãááª®£® ï§ëª 
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str = "";
    cout << "‚¢¥¤¨â¥ áâà®ªy: " << endl;
    // ‚¢®¤ áâà®ª¨ 
    getline(cin, str);
    int kolCount = vowelCount(str);
    cout << "‚ áâà®ª¥ " << kolCount << " £« á­ëå ¡ãª¢";
    return 0;
}
