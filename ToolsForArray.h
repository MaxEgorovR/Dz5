#pragma once
#include <iostream>
#include <string>
template <typename T>

T SearchMax(T* arr,int length) {
	T max = arr[0];
	for (int i = 1; i < length; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

template <typename T>
T SearchMin(T* arr, int length) {
	T min = arr[0];
	for (int i = 1; i < length; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

template <typename T>
void Sort(T* arr, int length) {
	T tmp;
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

template <typename T>
int BinarySearch(T* arr, T elem, int length) {
	T low = SearchMin(arr, length), high = SearchMax(arr, length);
	T mid;
	while (low <= high) {
		mid = low + (high - low) / 2;
		if (arr[mid] == elem) return mid;
		if (arr[mid] < elem) low = mid + 1;
		else high = mid - 1;
	}
	return -1;
}

template <typename T>
void ReplaseElem(T* arr, int length, int index, T elem) {
	for (int i = 0; i < length; i++) {
		if (i == index) {
			arr[i] = elem;
			break;
		}
	}
}

template <typename T>
void Print(T* arr, int length) {
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

template <typename T>
void Fill(T* arr, int length) {
	for (int i = 0; i < length; i++) {
		std::cin >> arr[i];
	}
}