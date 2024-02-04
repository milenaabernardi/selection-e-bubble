#include <iostream>
using namespace std;

void bubbleSortRecursive(int arr[], int n){
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i + 1]){
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSortRecursive(arr, n - 1);
}

int main(){
    int arr[] = {7, 2, 5, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Vetor original: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    bubbleSortRecursive(arr, n);

    cout << "\nVetor ordenado: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}