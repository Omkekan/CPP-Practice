/*
 * Array Operations in C++ (without STL / library functions)
 * ------------------------------------------------------------
 * Demonstrates common array operations using only plain arrays
 * and manual loops - no <algorithm>, <vector>, or other STL use.
 * Only <iostream> is used, purely for input/output.
 */

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

// ---------- Function Declarations ----------
void displayArray(int arr[], int size);
void insertAt(int arr[], int &size, int pos, int value);
void deleteAt(int arr[], int &size, int pos);
int linearSearch(int arr[], int size, int key);
int binarySearch(int arr[], int size, int key);
void bubbleSort(int arr[], int size);
void selectionSort(int arr[], int size);
void insertionSort(int arr[], int size);
void reverseArray(int arr[], int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
int sumArray(int arr[], int size);
double averageArray(int arr[], int size);
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[], int &resultSize);

int main() {
    int arr[MAX_SIZE] = {12, 45, 3, 67, 23, 9, 88, 34};
    int size = 8;

    cout << "Original array: ";
    displayArray(arr, size);

    // Insertion
    insertAt(arr, size, 3, 100);
    cout << "\nAfter inserting 100 at position 3: ";
    displayArray(arr, size);

    // Deletion
    deleteAt(arr, size, 0);
    cout << "\nAfter deleting element at position 0: ";
    displayArray(arr, size);

    // Linear search
    int key = 67;
    int idx = linearSearch(arr, size, key);
    if (idx != -1)
        cout << "\nLinear search: " << key << " found at index " << idx;
    else
        cout << "\nLinear search: " << key << " not found";

    // Sum, average, max, min
    cout << "\nSum = " << sumArray(arr, size);
    cout << "\nAverage = " << averageArray(arr, size);
    cout << "\nMax = " << findMax(arr, size);
    cout << "\nMin = " << findMin(arr, size);

    // Bubble sort (on a copy), then binary search
    int sortedArr[MAX_SIZE];
    for (int i = 0; i < size; i++) sortedArr[i] = arr[i];
    int sortedSize = size;
    bubbleSort(sortedArr, sortedSize);
    cout << "\n\nAfter bubble sort: ";
    displayArray(sortedArr, sortedSize);

    int bKey = sortedArr[3];
    int bIdx = binarySearch(sortedArr, sortedSize, bKey);
    cout << "\nBinary search: " << bKey << " found at index " << bIdx;

    // Selection sort demo
    int arr2[MAX_SIZE] = {5, 2, 9, 1, 7};
    int size2 = 5;
    cout << "\n\nBefore selection sort: ";
    displayArray(arr2, size2);
    selectionSort(arr2, size2);
    cout << "\nAfter selection sort: ";
    displayArray(arr2, size2);

    // Insertion sort demo
    int arr3[MAX_SIZE] = {8, 4, 23, 42, 16, 15};
    int size3 = 6;
    cout << "\n\nBefore insertion sort: ";
    displayArray(arr3, size3);
    insertionSort(arr3, size3);
    cout << "\nAfter insertion sort: ";
    displayArray(arr3, size3);

    // Reverse
    cout << "\n\nBefore reversing: ";
    displayArray(arr3, size3);
    reverseArray(arr3, size3);
    cout << "\nAfter reversing: ";
    displayArray(arr3, size3);

    // Merge two arrays
    int mergedArr[MAX_SIZE];
    int mergedSize;
    mergeArrays(arr2, size2, arr3, size3, mergedArr, mergedSize);
    cout << "\n\nMerged array: ";
    displayArray(mergedArr, mergedSize);

    cout << endl;
    return 0;
}

// ---------- Function Definitions ----------

// Traverse and print all elements
void displayArray(int arr[], int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i != size - 1) cout << ", ";
    }
    cout << " ]";
}

// Insert 'value' at index 'pos', shifting later elements right
void insertAt(int arr[], int &size, int pos, int value) {
    if (size >= MAX_SIZE || pos < 0 || pos > size) return; // bounds check

    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    size++;
}

// Delete element at index 'pos', shifting later elements left
void deleteAt(int arr[], int &size, int pos) {
    if (pos < 0 || pos >= size) return; // bounds check

    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

// Linear search: O(n), works on unsorted arrays
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

// Binary search: O(log n), array MUST be sorted ascending
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// Bubble sort: repeatedly swap adjacent out-of-order elements
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break; // already sorted, stop early
    }
}

// Selection sort: repeatedly pick the minimum and place it in front
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIdx]) minIdx = j;
        }
        if (minIdx != i) {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}

// Insertion sort: build sorted portion one element at a time
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Reverse array in place using two pointers
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Find maximum element
int findMax(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    return maxVal;
}

// Find minimum element
int findMin(int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
    }
    return minVal;
}

// Sum of all elements
int sumArray(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) total += arr[i];
    return total;
}

// Average of all elements
double averageArray(int arr[], int size) {
    return (double)sumArray(arr, size) / size;
}

// Merge two arrays into a third (concatenation, no sorting/dedup)
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[], int &resultSize) {
    int k = 0;
    for (int i = 0; i < size1; i++) result[k++] = arr1[i];
    for (int i = 0; i < size2; i++) result[k++] = arr2[i];
    resultSize = k;
}
