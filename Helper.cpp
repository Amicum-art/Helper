#include "Helper.h"
#include <iostream>

Array::Array() 
{
	for (auto row = 0; row < N; ++row) {
		for (auto column = 0; column < N; ++column) {
			array[row][column] = row + column;
		}
	}
	std::time_t t = std::time(nullptr);
	std::tm* currentTime = std::localtime(&t);
	currentIndex = currentTime->tm_mday % N;
}

double Array::pow_double(const double& num){ return num * num; }

void Array::FindOddNumbers(int Limit, bool IsOdd) 
{
	for (int num = IsOdd ? 1 : 0; num < Limit; num += 2)
		std::cout << num << ' ';
}

void Array::show_array() {
	for (const auto& it: array) {
		for (const auto& it1 : array) {
			std::cout.width(2);
			std::cout << array[*it][*it1] << ' ';
		}
		std::cout << std::endl;
	}
}

void Array::sumIndexRow() {
	int sum {};
	std::cout << "The row: ";
	for (const auto& it : array) {
		std::cout << array[currentIndex][*it] << ' ';
		sum += array[currentIndex][*it];
	}
	std::cout << "\nThe sum: " << sum << std::endl;
}
