#include <iostream>
using namespace std;
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int* arr, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int size;
    cout << "请输入数组元素个数：";
    cin >> size;

    // 使用new创建动态数组
    int* dynamicArray = new int[size];

    cout << "请输入数组元素：";
    for (int i = 0; i < size; i++) {
        cin >> dynamicArray[i];
    }
    bubbleSort(dynamicArray, size);
    cout << "排序后的数组元素为：";
    for (int i = 0; i < size; i++) {
        cout << *(dynamicArray + i) << " ";
    }
    cout << endl;
    delete[] dynamicArray;

    return 0;
}