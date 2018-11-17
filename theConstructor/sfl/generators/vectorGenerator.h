#pragma once

#include <random>
#include <iostream>
#include <time.h>

void printVector(int vector[], int size)
{
	for (int index = 0; index < size; index++)
	{
		std::cout << vector[index] << " ";
	}

	std::cout << std::endl;
}

void elementGenerator(int vector[], int &size)
{
	std::cout << std::endl;
	std::cout << "  +> Introduceti cate elemente generate doriti. ";
	std::cin >> size;

	srand(time(NULL));

	for (int index = 0; index < size; index++)
	{
		vector[index] = rand() % 100;
	}
}