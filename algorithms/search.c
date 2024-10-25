#include <stdio.h>

int linear_search(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return arr[i];
    }
  }
  return -1;
}

int binary_search(int arr[], int size, int target) {
  int low = 0;
  int high = size;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (target < arr[mid]) {
      high = mid - 1;
    }

    if (target > arr[mid]) {
      low = mid + 1;
    }

    if (target == arr[mid]) {
      return mid;
    }
  }

  return -1;
}

int main() {
  int arr[] = {2, 3, 4, 10, 40};
  int size = sizeof(arr) / sizeof(arr[0]);
  int target = 10;

  int result = binary_search(arr, size, target);
  if (result != -1) {
    printf("Element found at index %d\n", result);
  } else {
    printf("Element not found in array\n");
  }
}
