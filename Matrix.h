#pragma once
#include "ToolsForArray.h"
template <typename T>

class Matrix {
	T** matrix;
	int length;
	int width;
public:
	void allocateMemory();

	void clearMemory();

	void fillMatrixClient();

	void fillMatrixRandom();

	void printMatrix();

	void calculateWith(char sign, T elem);

	T searchMax();

	T searchMin();
};