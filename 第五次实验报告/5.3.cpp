#include <iostream>
using namespace std;
class Cuboid {
private:
    double length;  
    double width;   
    double height;  
public:
  
    void setDimensions() {
        cout << "�����볤����ĳ������ߣ�";
        cin >> length >> width >> height;
    }   
    double calculateVolume() {
        return length * width * height;
    }
    void displayVolume() {
        cout << "�ó����������ǣ�" << calculateVolume() << endl;
    }
};

int main() {
    Cuboid cuboids[3];   
    for (int i = 0; i < 3; ++i) {
        cuboids[i].setDimensions();
    }
    for (int i = 0; i < 3; ++i) {
        cuboids[i].displayVolume();
    }
    return 0;
}