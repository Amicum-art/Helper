#pragma once

double pow_double(const double& num)
{
	return num * num;
}

void FindOddNumbers(int Limit, bool IsOdd) {
	for (int num = IsOdd ? 1 : 0; num < Limit; num += 2)
		std::cout << num << ' ';
}