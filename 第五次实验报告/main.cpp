//main.cpp                      ������ģ��
#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
int main()
{
	Student stud;                //�������
	Student stud1(007, "tcg", 'm');
	stud.display();              //ִ��stud�����display����
	stud1.display();			//ִ��stud1�����display����
	return 0;
}