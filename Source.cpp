#include <iostream>
#include <string>
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
	char symb;

	cout << "Ввод данных: ";
	cin >> symb;

	while (symb != '-' && symb != '+' && symb != '=' && symb != '*')
	{
		cout << "Ошибка, повторите ввод еще раз:  ";
		cin >> symb;
	}

	string s;
	cout << "Введите строку: ";
	cin >> s;

	bool notFound = true;
	for (int i = 0; i < s.length(); i++) {

		if (s[i] == symb && notFound)
		{
			cout << "Символ занимает " << i + 1 << " номер в строке";
			notFound = false;
		}
	}

	if (notFound) cout << "Такой символ в строке не найден.";
	

	return 0;
}
