#pragma once
class Laboratory
{
public:
	void div(int, int);
	void mod(int, int, bool mode = false);
	void pigsInBlankets(int, int);
	void pasties(int);
	void doubleFigures();
	void numbersGame();
	void mathematicalExample(double, double, double);
	void ConverterTime();
	void random(int value);
	Laboratory();
	~Laboratory();
private:
	ldiv_t div_result;
	double fmod_result;
	int counter_pigs = 0;
	int counter_rub = 0;
	int philip_and_christina = 0;
	int alla = 0;
	double pasties_fmod_result = 0;
	const int DIVISOR = 6;
	int value_one = 0;
	int value_two = 0;
	double result_game = 0;
	double result_mathematicalExample;
};

