#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


void print(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void install(int *arr,int size)
{
  for(int j=0;j<size;j++)
  {
    arr[j] = rand() %10;
  }
}


void merge_algo(int array[], int low, int m, int high) {
  int id1 = 0;
  int id=0;
	int id2 = 0;
  int* array1 = new int[m - low + 1];
	int* array2 = new int[high - m + 1];

	for (int i = low; i <= m; i++) {
		array1[id1++] = array[i];
	}

	for (int i = m + 1; i <= high; i++) {
		array2[id2++] = array[i];
	}

	int* arr = new int[high - low + 1];

	int i = 0, j = 0;
	for (i = 0, j = 0; i < id1 && j < id2; ) {
		if (array1[i] < array2[j]) {
			arr[id++] = array1[i++];
		}
		else {
			arr[id++] = array2[j++];
		}
	}

  for (; i < id1; i++) {
		arr[id++] = array1[i];
	}

  for (; j < id2; j++) {
		arr[id++] = array2[j];
	}

	for (int k = 0; k < id; k++) {
		array[low + k] = arr[k];
	}

  delete[] arr;
	delete[] array1;
	delete[] array2;
}
void merge_sort(int arr[], int low, int high) {
	if(low < high) {
	  int middle = (low + high) / 2;
		merge_sort(arr, low, middle);
		merge_sort(arr, middle + 1, high);
		merge_algo(arr, low, middle, high);
	}
}



int main() {
  const int m=15;
	int a[m];
  install(a,m);
  print(a,m);
  int new_var=m-1;
	merge_sort(a,0,new_var);
  cout<<"---------------after sort:----------------"<<endl;
  print(a, m);

  return 0;
}
