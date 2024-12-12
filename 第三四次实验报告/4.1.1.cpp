#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int count = 0;

    cout << "请输入10个数：" << endl;
    for (int i = 0; i < 10; i++) {
        int num;
        bool a = true;
        cin >> num;

        // 检查该数是否已存在于数组中
        for (int j = 0; j < count; j++) {
            if (arr[j] == num) {
                a = false;
                break;
            }
        }

        if (a) {
            arr[count] = num;
            count++;
        }
    }

    cout << "不同的数为：" << endl;
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}