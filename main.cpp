// ConsoleApplication9.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <time.h> 
#include "Laboratory.h"
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "Russian");
	Laboratory objLaboratory;
	time_t result = 0;

	objLaboratory.doubleFigures();
	system("pause");
	return 0;
}