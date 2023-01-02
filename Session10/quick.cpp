#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high) {
    int x = (rand() % (high - low)) + low;
    swap(&arr[high], &arr[x]);
	int pivot = arr[high]; // pivot
	int i = (low - 1); // Index of smaller element and indicates
				// the right position of pivot found so far

	for (int j = low; j <= high - 1; j++) {
		// If current element is smaller than the pivot
		if (arr[j] < pivot) {
			i++; // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int arr[1000005];
int main() {
    srand(time(0));
    for (int i = 0; i < 1000000; i++) {
        arr[i] = (rand() % 1000) + 1; // 1 - 100
        // printf("%d ", arr[i]);
    }
    // printf("\n");
    quickSort(arr, 0, 999999);
    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
