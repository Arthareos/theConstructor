#pragma once

#include <iostream>

class intQueue {

public:
	bool isEmpty()
	{
		if (start == 0 && end == -1)
			return 1;
		return 0;
	}

	bool isFull()
	{
		if (end == size)
			return 1;
		return 0;
	}

	void push(char elem)
	{
		data[end] = elem;
		end++;
	}

	void pop()
	{
		end--;
	}

	int front()
	{
		return data[end];
	}

	void list()
	{
		for (int index = start; index < end; index++)
			std::cout << data[index] << " ";
		std::cout << std::endl;
	}

private:
	int start = 0, end = -1, size;
	int data[10000];

};

class floatQueue {

public:
	bool isEmpty()
	{
		if (start == 0 && end == -1)
			return 1;
		return 0;
	}

	bool isFull()
	{
		if (end == size)
			return 1;
		return 0;
	}

	void push(char elem)
	{
		data[end] = elem;
		end++;
	}

	void pop()
	{
		end--;
	}

	float front()
	{
		return data[end];
	}

	void list()
	{
		for (int index = start; index < end; index++)
		{
			std::cout << data[index] << " ";
		}
		std::cout << std::endl;
	}

private:
	int start = 0, end = -1, size;
	float data[10000];

};
