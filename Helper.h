#pragma once
#include <ctime>

class Array {
	const static int N = 15;
	int array[N][N], currentIndex;
public:
	Array();
	double pow_double(const double& num);
	void FindOddNumbers(int Limit, bool IsOdd);
	void show_array();
	void sumIndexRow();
};