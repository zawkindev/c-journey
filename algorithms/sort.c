#include "stdio.h"

void swap(int a, int b, int arr[]) {
  int temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}

void selection_sort(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    int min_index = i;
    for (int j = i + 1; j < size; j++) {
      int min = arr[min_index];
      int current = arr[j];
      if (min > current) {
        min_index = j;
      }
    }

    swap(min_index, i, arr);
  }
}


int main() {
  int arr[] = {64, 25, 12, 22, 11};
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  selection_sort(arr, size);

  printf("Sorted array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
