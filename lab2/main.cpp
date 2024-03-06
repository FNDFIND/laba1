// Вариант 3
// Установить значение i - го бита числа в 0.

#include <iostream>

int main() {

	using namespace std;

	unsigned char number;
	unsigned int bit, change;

	cout << "Enter the number: ";
	cin >> number; // Вводим число, бит которого мы хотим изменить
	cout << "Which bit you want to change?" << endl;
	cin >> bit; // Какой бит изменить
	cout << "To what?" << endl;
	cin >> change; // На что

	number |= (change << bit); // Изменяем бит

	cout << number << endl; // Выводим результат
}