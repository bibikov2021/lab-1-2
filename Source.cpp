#include <iostream>
#include <string>
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
	char symb;

	cout << "���� ������: ";
	cin >> symb;

	while (symb != '-' && symb != '+' && symb != '=' && symb != '*')
	{
		cout << "������, ��������� ���� ��� ���:  ";
		cin >> symb;
	}

	string s;
	cout << "������� ������: ";
	cin >> s;

	bool notFound = true;
	for (int i = 0; i < s.length(); i++) {

		if (s[i] == symb && notFound)
		{
			cout << "������ �������� " << i + 1 << " ����� � ������";
			notFound = false;
		}
	}

	if (notFound) cout << "����� ������ � ������ �� ������.";
	

	return 0;
}