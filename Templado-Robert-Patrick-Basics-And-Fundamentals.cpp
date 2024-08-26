#include <iostream>
using namespace std;

int main() {
    // Declare arrays and variables
    // The both arrays can hold up to each 10 elements.
    // The merged array 'mergedArr' is of size 20 because contain both arrays
    int arrA[10], arrB[10], mergedArray[20];
    int countA, countB, totalCount;

    // Input the number of elements for array A
    cout << "Enter the number of elements for the first array (max of 10): ";
    cin >> countA;

    // Ensure the number of elements does not exceed the array size
    if (countA > 10) {
        cout << "Number of elements exceeds the maximum size of 10.\n";
        return 1;
    }

    // Input elements for array A
    cout << "Enter the elements for the first array: ";
    for (int i = 0; i < countA; i++) {
        cin >> arrA[i];
    }

    // Input the number of elements for array B
    cout << "Enter the number of elements for the second array (max of 10): ";
    cin >> countB;

    // Ensure the number of elements does not exceed the array size
    if (countB > 10) {
        cout << "Number of elements exceeds the maximum size of 10.\n";
        return 1;
    }

    // Input elements for array B
    cout << "Enter the elements for the second array: ";
    for (int i = 0; i < countB; i++) {
        cin >> arrB[i];
    }

    // Merge the two arrays into 'mergedArray'
    totalCount = countA + countB;
    for (int i = 0; i < countA; i++) {
        mergedArray[i] = arrA[i];
    }
    for (int i = 0; i < countB; i++) {
        mergedArray[countA + i] = arrB[i];
    }

    // Sort the merged array in descending order using a simple bubble sort
    for (int i = 0; i < totalCount - 1; i++) {
        for (int j = i + 1; j < totalCount; j++) {
            if (mergedArray[i] < mergedArray[j]) {
                // Swap elements to sort in descending order
                int temp = mergedArray[i];
                mergedArray[i] = mergedArray[j];
                mergedArray[j] = temp;
            }
        }
    }

    // Output the merged array in descending order
    cout << "The merged array in descending order is: ";
    for (int i = 0; i < totalCount; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
