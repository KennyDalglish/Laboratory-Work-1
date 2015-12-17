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
		cout << "������� ���" << endl;
	}
	else
	{
		cout << "�������: " << fmod_result << endl;
		if (mode == true)
		{
			cout << "������� * 100 | �����: " << fmod_result * 100 << endl;
			value_one = value_one - static_cast< int >(fmod_result);
			fmod_result = fmod(value_one, 10 + 1);
			cout << "������� �� value_one �� 10 + 1 | �����: = " << fmod_result << endl;
		}
	}
}
void Laboratory::div(int value_one, int value_two)
{
	div_result = ldiv(value_one, value_two);
	cout << "�������� ������� �����: " << div_result.quot << " | " << "�������� ������� �����: " << div_result.rem << endl;
}
void Laboratory::pigsInBlankets(int count_rub, int purchase_value)
{
	if (count_rub == 0 || purchase_value == 0)
		return;
	counter_pigs = count_rub / purchase_value;
	counter_rub = count_rub - (count_rub / purchase_value) * purchase_value;
	if (counter_rub == 0)
	{
		cout << "����� ���" << endl;
	}
	else
	{
		cout << "�����: " << counter_rub << endl;
	}
	cout << "���������� �������: " << counter_pigs << endl;
}
void Laboratory::pasties(int value)
{
	pasties_fmod_result = fmod(value, DIVISOR);
	if (pasties_fmod_result > 0)
		return;
	philip_and_christina = (value / 3) / 2;
	alla = philip_and_christina * 4;
	cout << "�������� � �������� ����� ��: " << philip_and_christina << endl;
	cout << "���� �����: " << alla << endl;
}
void Laboratory::doubleFigures()
{
	int value = 0;
	cout << "������� ����� �� 0 �� 99" << endl;
	while (!(cin >> value) || value < 0 || value > 99)
	{
		cout << "������� ����� �� 0 �� 99" << endl;

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	value_one = value / 10;
	value_two = value % 10;
	value = value_one + value_two;
	cout << "����� ����: " << value << endl;
}
void Laboratory::numbersGame()
{
	int value = 0;
	cout << "������� ����� �� 100 �� 999" << endl;
	while (!(cin >> value) || value < 100 || value > 999)
	{
		cout << "������� ����� �� 100 �� 999" << endl;

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	double nDigits = floor(log10(abs(value))) + 1;
	result_game = value * pow(10, nDigits) + value;
	result_game = result_game / 13;
	result_game = result_game / abs(value);
	cout << "����� = " << result_game << endl;
}
void Laboratory::mathematicalExample(double params1, double params2, double params3)
{
	result_mathematicalExample = pow(params2, pow(abs(params1), 1 / 3)) + pow(cos(params2), 3)* ((abs(params1 - params2)*(1 + pow(sin(params3), 2) / sqrt(params1 + params2)) / (exp(abs(params1 - params2)) + params1 / 2)));
	cout << "��������� ����������: " << result_mathematicalExample << endl;
}
void Laboratory::ConverterTime()
{
	time_t time;
	struct tm * ptm;
	cout << "������� ���� � UNIX-TIME �������, � � ��� ������ � UTC: " << std::endl;
	cin >> time;
	ptm = gmtime(&time);
	cout << "����� � UTC �������: " << ptm->tm_hour << ":" << ptm->tm_min << ":" << ptm->tm_sec << endl;
}
void Laboratory::random(int value)
{
	srand(static_cast< unsigned int > (time(NULL)));
	value = rand() % value + 1;
	cout << "��������� ����� �� 1 - 6: " << value << endl;
}
Laboratory::~Laboratory()
{

}
Laboratory::Laboratory()
{

}
