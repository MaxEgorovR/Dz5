#include "Matrix.h"
template <typename T>

void Matrix<T>::allocateMemory() {
	this->length = length;
	this->width = width;
	this->matrix = new T * [this->length];
	for (int i = 0; i < this->length; i++) {
		this->matrix[i] = new T[this->width];
	}
}

template <typename T>
void Matrix<T>::clearMemory() {
	for (int i = 0; i < this->length; i++) {
		delete[] this->matrix[i];
	}
	delete[] this->matrix;
}

template <typename T>
void Matrix<T>::fillMatrixClient() {
	for (int i = 0; i < this->length; i++) {
		for (int j = 0; j < this->width; j++) {
			std::cin >> matrix[i][j];
		}
	}
}

template <typename T>
void Matrix<T>::fillMatrixRandom() {
	for (int i = 0; i < this->length; i++) {
		for (int j = 0; j < this->width; j++) {
			matrix[i][j] = rand();
		}
	}
}

template <typename T>
void Matrix<T>::printMatrix() {
	for (int i = 0; i < this->length; i++) {
		for (int j = 0; j < this->width; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

template <typename T>
void Matrix<T>::calculateWith(char sign, T elem) {
	switch (sign)
	{
	case '/':
		for (int i = 0; i < length; i++) {
			for (int j = 0; j < width; j++) {
				this->matrix[i][j] /= elem;
			}
		}
	case '*':
		for (int i = 0; i < length; i++) {
			for (int j = 0; j < width; j++) {
				this->matrix[i][j] *= elem;
			}
		}
	case '+':
		for (int i = 0; i < length; i++) {
			for (int j = 0; j < width; j++) {
				this->matrix[i][j] += elem;
			}
		}
	case '-':
		for (int i = 0; i < length; i++) {
			for (int j = 0; j < width; j++) {
				this->matrix[i][j] -= elem;
			}
		}
	}
}

template <typename T>
T Matrix<T>::searchMax() {
	T* temp = new T[this->length];
	for (int i = 0; i < this->length; i++) {
		temp[i] = SearchMax(this->matrix[i], this->width);
	}
	T max = SearchMax(temp, this->length);
	delete[] temp;
	return max;
}

template <typename T>
T Matrix<T>::searchMin() {
	T* temp = new T[this->length];
	for (int i = 0; i < this->length; i++) {
		temp[i] = SearchMin(this->matrix[i], this->width);
	}
	T min = SearchMin(temp, this->length);
	delete[] temp;
	return min;
}