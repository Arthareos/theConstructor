#pragma once

#include <iostream>
#include <fstream>

class intStack {

public:
	int size, top = -1;
	int data[10000];

	intStack(int x)
	{
		size = x;
	}

	bool isEmpty()
	{
		if (top == -1)
			return 1;
		return 0;
	}

	bool isFull()
	{
		if (top == size)
			return 1;
		return 0;
	}

	void push(int element)
	{
		top++;
		data[top] = element;
	}

	void pop()
	{
		top--;
	}

	int lastElement()
	{
		return data[top];
	}

	void list()
	{
		for (int index = top; index >= 0; index--)
			std::cout << data[index] << " ";
		std::cout << std::endl;
	}

	void fillKeyboard()
	{
		int aux, cinSize;

		do {
			std::cout << " +> Introduceti cate elemente doriti sa introduceti: ";
			std::cin >> cinSize;
		} while (cinSize >= size);

		for (int index = 0; index < cinSize; index++)
		{
			std::cout << "  +> Introduceti elementul de pe pozitia " << index + 1 << " a stack-ului. ";
			std::cin >> aux;
			push(aux);
		}
	}

	void fillFile()
	{
		int aux;

		std::ifstream file("text.txt");

		while (!(file.eof()))
		{
			file >> aux;
			push(aux);
		}
	}

};

class floatStack {

public:
	int size, top = -1;
	float data[10000];

	void fillKeyboard()
	{
		std::cout << " +> Introduceti marimea stack-ului: ";
		std::cin >> size;

		for (int index = 0; index < size; index++)
		{
			std::cout << "  +> Introduceti elementul de pe pozitia " << index + 1 << " a stack-ului. ";
			std::cin >> data[index];
		}

		top += size;
	}

	bool isEmpty()
	{
		if (top == -1)
			return 1;
		return 0;
	}

	bool isFull()
	{
		if (top == size)
			return 1;
		return 0;
	}

	void push(int element)
	{
		top++;
		data[top] = element;
	}

	void pop()
	{
		top--;
	}

	float lastElement()
	{
		return data[top];
	}

	void list()
	{
		for (int index = top; index > 0; index--)
			std::cout << data[index] << " ";
	}

};

class charStack {

public:
	int size, top = -1;
	char data[10000];

	void fillKeyboard()
	{
		std::cout << " +> Introduceti marimea stack-ului: ";
		std::cin >> size;

		for (int index = 0; index < size; index++)
		{
			std::cout << "  +> Introduceti elementul de pe pozitia " << index + 1 << " a stack-ului. ";
			std::cin >> data[index];
		}
	}

	bool isEmpty()
	{
		if (top == -1)
			return 1;
		return 0;
	}

	bool isFull()
	{
		if (top == size)
			return 1;
		return 0;
	}

	void push(int element)
	{
		top++;
		data[top] = element;
	}

	void pop()
	{
		top--;
	}

	char lastElement()
	{
		return data[top];
	}

	void list()
	{
		for (int index = top; index > 0; index--)
			std::cout << data[index] << " ";
	}

};