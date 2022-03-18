#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void insertSort(int arr[], int size){   // time limit
    int i, j, tmp;
    for(i = 1; i < size; ++i){
        tmp = arr[i];

        for(j = i - 1; j >= 0; --j){
            if(arr[j] > tmp) arr[j + 1] = arr[j];
            else break;
        }

        arr[j + 1] = tmp;
    }
}

void bubbleSort(int arr[], int size){   // time limit
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size - i - 1; ++j){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectSort(int arr[], int size){   // time limit
    int pos;
    for(int i = 0; i < size - 1; ++i){
        pos = i;
        for(int j = i + 1; j < size; ++j){
            if(arr[j] < arr[pos]) pos = j;
        }
        swap(arr[i], arr[pos]);
    }
}

void mergeSort(int arr[], int size){
    
}

int main(){
    int size;
    cin >> size;

    int arr[size], tmp;
    for(int i = 0; i < size; ++i){
        cin >> tmp;
        arr[i] = tmp;
    }

    selectSort(arr, size);
    for(int i = 0; i < size; ++i){
        cout << arr[i] << "\n";
    }
}