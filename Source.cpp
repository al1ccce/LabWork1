#include<iostream>
#include<string> // ����������� ������������ ������
using namespace std; // ������������ ���� std
void ChangingCase(string ss) { // ������� ��������� ��������
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