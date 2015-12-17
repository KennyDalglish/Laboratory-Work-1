#include "stdafx.h"
#include <iostream>
#include <time.h>
#include "Laboratory.h"

using namespace std;

void Laboratory::mod(int value_one, int value_two, bool mode)
{
	fmod_result = fmod(value_one, value_two);
	if (fmod_result == 0)
	{
		cout << "Остатка нет" << endl;
	}
	else
	{
		cout << "Остаток:  " << fmod_result << endl;
		if (mode == true)
		{
			cout << "Остаток * 100 | Равен:  " << fmod_result * 100 << endl;
			value_one = value_one - static_cast< int >(fmod_result);
			fmod_result = fmod(value_one, 10 + 1);
			cout << "Остаток от value_one на 10 + 1 | Равен: = " << fmod_result << endl;
		}
	}
}
void Laboratory::div(int value_one, int value_two)
{
	div_result = ldiv(value_one, value_two);
	cout << "Значение первого числа:  " << div_result.quot << " | " << "Значение второго числа: " << div_result.rem << endl;
}
void Laboratory::pigsInBlankets(int count_rub, int purchase_value)
{
	if (count_rub == 0 || purchase_value == 0)
		return;
	counter_pigs = count_rub / purchase_value;
	counter_rub = count_rub - (count_rub / purchase_value) * purchase_value;
	if (counter_rub == 0)
	{
		cout << "Сдачи нет" << endl;
	}
	else
	{
		cout << "Сдача: " << counter_rub << endl;
	}
	cout << "Количество сосисок: " << counter_pigs << endl;
}
void Laboratory::pasties(int value)
{
	pasties_fmod_result = fmod(value, DIVISOR);
	if (pasties_fmod_result > 0)
		return;
	philip_and_christina = (value / 3) / 2;
	alla = philip_and_christina * 4;
	cout << "Кристина с Филлипом съели по:  " << philip_and_christina << endl;
	cout << "Алла съела: " << alla << endl;
}
void Laboratory::doubleFigures()
{
	int value = 0;
	cout << "Введите число от 0 до 99" << endl;
	while (!(cin >> value) || value < 0 || value > 99)
	{
		cout << "Введите число от 0 до 99" << endl;

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	value_one = value / 10;
	value_two = value % 10;
	value = value_one + value_two;
	cout << "Сумма цифр:  " << value << endl;
}
void Laboratory::numbersGame()
{
	int value = 0;
	cout << "Введите число от 100 до 999" << endl;
	while (!(cin >> value) || value < 100 || value > 999)
	{
		cout << "Введите число от 100 до 999" << endl;

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	double nDigits = floor(log10(abs(value))) + 1;
	result_game = value * pow(10, nDigits) + value;
	result_game = result_game / 13;
	result_game = result_game / abs(value);
	cout << "Число = " << result_game << endl;
}
void Laboratory::mathematicalExample(double params1, double params2, double params3)
{
	result_mathematicalExample = pow(params2, pow(abs(params1), 1 / 3)) + pow(cos(params2), 3)* ((abs(params1 - params2)*(1 + pow(sin(params3), 2) / sqrt(params1 + params2)) / (exp(abs(params1 - params2)) + params1 / 2)));
	cout << "Результат вычисления: " << result_mathematicalExample << endl;
}
void Laboratory::ConverterTime()
{
	time_t time;
	struct tm * ptm;
	cout << "Введите дату в UNIX-TIME формате, а я Вам выведу в UTC: " << std::endl;
	cin >> time;
	ptm = gmtime(&time);
	cout << "Время в UTC формате: " << ptm->tm_hour << ":" << ptm->tm_min << ":" << ptm->tm_sec << endl;
}
void Laboratory::random(int value)
{
	srand(static_cast< unsigned int > (time(NULL)));
	value = rand() % value + 1;
	cout << "Рандомное число от 1 - 6: " << value << endl;
}
Laboratory::~Laboratory()
{

}
Laboratory::Laboratory()
{

}
