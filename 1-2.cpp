#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>
int main()
{
	double rad, degree, minutes, seconds;
	std::cout << "������� �������";
	std::cin >> rad;
	degree = (180 / M_PI) * rad;
	minutes = (60 * 180) / M_PI * rad;
	seconds = (3600 * 180) / M_PI * rad;
	std::cout << "�������" << degree << std::endl;
	std::cout << "������" << minutes << std::endl;
	std::cout << "�������" << seconds << std::endl;
	return 0;
}