#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

struct Data {
    int score;
    char name[100];
};

void swap(Data* a, Data* b)
{
	Data t = *a;
	*a = *b;
	*b = t;
}

int partition(Data arr[], int low, int high) {
    int x = (rand() % (high - low)) + low;
    swap(&arr[high], &arr[x]);
	Data pivot = arr[high]; // pivot
	int i = (low - 1); // Index of smaller element and indicates
				// the right position of pivot found so far

	for (int j = low; j <= high - 1; j++) {
		// If current element is smaller than the pivot
		if (strcmp(arr[j].name, pivot.name) > 0) {
			i++; // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(Data arr[], int low, int high)
{
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

struct Data arr[1000005];
int main() {
    int n;
    scanf("%d", &n); getchar();
    for (int i = 0; i < n; i++) {
        scanf("%d %[^\n]", &arr[i].score, arr[i].name);
    }
    quickSort(arr, 0, n-1);
    for (int i = 0; i < 100; i++) {
        printf("%s\n", arr[i].name);
    }
    return 0;
}
