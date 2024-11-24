#include<iostream>
using namespace std;


int main() {
    double num1, num2;
    char op;
    cout << "输入两个数和运算符（如：1 + 2）: ";
    cin >> num1 >> op >> num2;
    if (op == '+') {
        cout << num1 + num2 << std::endl;
    }
    else if (op == '-') {
        cout << num1 - num2 << std::endl;
    }
    else if (op == '*') {
        cout << num1 * num2 << std::endl;
    }
    else if (op == '/' && num2 != 0) {
        cout << num1 / num2 << std::endl;
    }
    else {
        cout << "输入错误" << std::endl;
    }
}
