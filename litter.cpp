?#include<string> 
#include <iostream> 
#include <Windows.h> 
using namespace std;
int vowelCount(string str) {
    int kolCount = 0;
    // ���᮪ ������
    string lettersLower = { 'a','e','u','o','i','y','�','�','�','�','�','�','�','�','�','�' };
    string lettersUp = { '�','�','�','�','�','�','�','�','�','�','A','E','U','O','I','Y' }; 
    // ���� ���᪠ ������
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
    // ������祭�� ���᪮�� �몠
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str = "";
    cout << "������ ��பy: " << endl;
    // ���� ��ப� 
    getline(cin, str);
    int kolCount = vowelCount(str);
    cout << "� ��ப� " << kolCount << " ������ �㪢";
    return 0;
}