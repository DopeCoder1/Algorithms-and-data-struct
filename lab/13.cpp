#include <iostream>
#include<algorithm>
#include <cstdlib>
#include <chrono>
#include <iterator>
using namespace std;


int partition(int* a, int low, int high);
void quickSort(int* a, int low, int high);

int partition(int* a, int left, int right) {
	int pivot = a[right];
	while (left < right) {
		while (a[left] < pivot) left++;

		while (a[right] > pivot) right--;

		if (left < right) {
			swap(a[left], a[right]);
			if (a[left] < pivot) left++;
			else
				if (a[right] >= pivot)right--;
		}
	}
	return right;
}


void quickSort(int* a, int low, int high) {
	if (low < high)
	{
		int pivot = partition(a, low, high);
		quickSort(a, low, pivot - 1);
		quickSort(a, pivot + 1, high);

	}
}
void merge(int a[], int low, int m, int high) {
	int* a1 = new int[m - low + 1];
	int* a2 = new int[high - m + 1];
	int index1 = 0;
	int index2 = 0;

	for (int i = low; i <= m; i++) {
		a1[index1++] = a[i];
	}
	for (int i = m + 1; i <= high; i++) {
		a2[index2++] = a[i];
	}
	int* arr = new int[high - low + 1];
	int index = 0;
	int i = 0, j = 0;
	for (i = 0, j = 0; i < index1 && j < index2; ) {
		if (a1[i] < a2[j]) {
			arr[index++] = a1[i++];
		}
		else {
			arr[index++] = a2[j++];
		}
	}
	for (; i < index1; i++) {
		arr[index++] = a1[i];
	}
	for (; j < index2; j++) {
		arr[index++] = a2[j];
	}

	for (int k = 0; k < index; k++) {
		a[low + k] = arr[k];
	}

	cout << endl;
	delete[] arr;
	delete[] a1;
	delete[]a2;
}
void merge_sort(int a[], int low, int high) {
	if (low < high) {
		int middle = (low + high) / 2;
		merge_sort(a, low, middle);
		merge_sort(a, middle + 1, high);
		merge(a, low, middle, high);
	}
}


void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}

}

int main() {
	const int SIZE = 4000;
	srand(time(NULL));
	int a[SIZE];
	for (int i = 0; i < SIZE; i++) {
		a[i] = rand() % 100;
	}

	int a2[SIZE];
	int a3[SIZE];
	int a_reverse[SIZE];

	for (int i = 0; i < SIZE; i++) {
		a2[i] = a[i];
		a3[i] = a[i];
	}


	auto start1 = chrono::high_resolution_clock::now();
	quickSort(a, 0, 3999);
	auto end1 = chrono::high_resolution_clock::now();
	chrono::duration<double> duration1 = end1 - start1;
	cout << "Duration quicksort: " << duration1.count() << endl;

	auto start2 = chrono::high_resolution_clock::now();
	merge_sort(a2, 0, -1);
	auto end2 = chrono::high_resolution_clock::now();
	chrono::duration<double> duration2 = end2 - start2;
	cout << "Duration merge sort : " << duration2.count() << endl;

	auto start3 = chrono::high_resolution_clock::now();
	bubbleSort(a3, 4000);
	auto end3 = chrono::high_resolution_clock::now();
	chrono::duration<double> duration3 = end3 - start3;
	cout << "Duration bubble sort: " << duration3.count() << endl;

	int count = 0;
	for (int i = SIZE - 1; i > 0; i--) {
		a_reverse[count] = a[i];
		count++;
	}

	auto start4 = chrono::high_resolution_clock::now();
	quickSort(a, 0, 3999);
	auto end4 = chrono::high_resolution_clock::now();
	chrono::duration<double> duration4 = end4 - start4;
	cout << "Duration quicksort for reverse array: " << duration4.count() << endl;

}
