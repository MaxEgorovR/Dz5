#include "Matrix.h"

int main() {
	int choise, choise1, choise2, length, * arr, elem, index, index1, length1, width1, sign, elem1;
	bool flag = true;
	Matrix<int> matrix;
	while (flag) {
		std::cout << "1 - Task 1\n2 - task 2\nElse - Exit\n";
		std::cin >> choise;
		if (choise == 1) {
			std::cout << "Enter the length of array: ";
			std::cin >> length;
			arr = new int[length];
			std::cout << "Enter all elems:\n";
			Fill(arr, length);
			std::cout << "1 - Search max\n2 - Search min\n3 - Sort array\n4 - Search elem in array\n5 - Replase elem in array\nElse - Replase all data\n";
			std::cin >> choise1;
			if (choise1 == 1) {
				std::cout << "Max: " << SearchMax(arr, length) << std::endl;
			}
			else if (choise1 == 2) {
				std::cout << "Min: " << SearchMin(arr, length) << std::endl;
			}
			else if (choise1 == 3) {
				Sort(arr, length);
				Print(arr, length);
			}
			else if (choise1 == 4) {
				std::cout << "Enter the elem in array: ";
				std::cin >> index;
				std::cout << "The position of elem: " << BinarySearch(arr, index, length) << std::endl;
			}
			else if (choise1 == 5) {
				std::cout << "Enter the position of elem in array: ";
				std::cin >> index1;
				std::cout << "Enter the elem: ";
				std::cin >> elem;
				ReplaseElem(arr, length, index1, elem);
				Print(arr, length);
			}
			else {
				std::cout << "Enter the length of array: ";
				std::cin >> length;
				arr = new int[length];
				std::cout << "Enter all elems:\n";
				Fill(arr, length);
			}
		}
		else if (choise == 2) {
			std::cout << "Enter the length: ";
			std::cin >> length1;
			std::cout << "Enter the width: ";
			std::cin >> width1;
			std::cout << "1 - Allocate memory\n2 - Clear memory\n3 - Fill the matrix\n4 - Fill matrix random\n5 - Print the matrix\n6 - Calculate matrix with\n7 - Search max\nElse - Search min\n";
			std::cin >> choise2;
			if (choise2 == 1) {
				matrix.allocateMemory();
			}
			else if (choise2 == 2) {
				matrix.clearMemory();
			}
			else if (choise2 == 3) {
				matrix.fillMatrixClient();
			}
			else if (choise2 == 4) {
				matrix.fillMatrixRandom();
			}
			else if (choise2 == 5) {
				matrix.printMatrix();
			}
			else if (choise2 == 6) {
				std::cout << "Enter the sign: ";
				std::cin >> sign;
				std::cout << "Enter the elem: ";
				std::cin >> elem1;
				matrix.calculateWith(sign, elem1);
				matrix.printMatrix();
			}
			else if (choise2 == 7) {
				std::cout << "Max: " << matrix.searchMax() << std::endl;
			}
			else{
				std::cout << "Min: " << matrix.searchMin() << std::endl;
			}
		}
		else {
			flag = false;
		}
	}
}