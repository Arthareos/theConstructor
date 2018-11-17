#pragma once

void swap(int &value1, int &value2)
{
	int aux = value1;

	value1 = value2;
	value2 = aux;
}

void quickSortAux(int vector[], int size, int start, int end)
{
	int indexStart = start, indexEnd = end, pivot = vector[(start + end) / 2];

	while (indexStart <= indexEnd)
	{
		while (vector[indexStart] < pivot)
		{
			indexStart++;
		}
		while (vector[indexEnd] > pivot)
		{
			indexEnd--;
		}
		if (indexStart <= indexEnd)
		{
			swap(vector[indexStart], vector[indexEnd]);
			indexStart++;
			indexEnd--;
		}
	}

	if (start < indexEnd)
	{
		quickSortAux(vector, size, start, indexEnd);
	}

	if (end > indexStart)
	{
		quickSortAux(vector, size, indexStart, end);
	}
}

void quickSort(int vector[], int size, int start, int end)
{
	quickSortAux(vector, size, 0, size - 1);
}