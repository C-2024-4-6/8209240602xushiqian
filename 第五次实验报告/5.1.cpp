#include <iostream>
using namespace std;

class Time             // ����Time��
{
public:
    // ���캯�������ڳ�ʼ������
    Time() {
        hour = 0;
        minute = 0;
        sec = 0;
    }
    // ��Ա������������ʱ��
    void setTime() {
        cin >> hour;
        cin >> minute;
        cin >> sec;
    }
    // ��Ա�����������ʱ��
    void showTime() {
        cout << hour << ":" << minute << ":" << sec << endl;
    }

private:
    int hour;
    int minute;
    int sec;
};

int main()
{
    Time t1;           // ����t1ΪTime�����
    t1.setTime();      // ͨ����Ա��������ʱ��
    t1.showTime();     // ͨ����Ա�������ʱ��
    return 0;
}