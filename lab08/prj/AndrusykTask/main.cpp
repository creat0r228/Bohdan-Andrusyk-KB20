#include <iostream>
#include "ModulesAndrusyk.h"
#include <windows.h>
#include <locale.h>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukr");
    cout << ("|Andrusyk Bohdan, CNTU |")<< endl;
    float x, y, z;
    char a, b;
    cout << "����i�� x: ";
    cin >> x;
    cout << "����i�� y: ";
    cin >> y;
    cout << "����i�� z: ";
    cin >> z;
    do{
        if(x < 0){
            cout << "���������� ������� ��������, x �� ���� ���� ������ �� ����" << endl;
            cout << "����i�� x: ";
            cin >> x;
        }
    }while(x == 0);
    cout << "����i�� a: ";
    cin >> a;
    cout << "����i�� b: ";
    cin >> b;
    cout << "a + 7 = b: " << boolalpha << (a + 7 == b) << endl;
    cout << "x � ��������i� ������i = " << dec << x << endl;
    cout << "x � �i�����������i�  ������i = " << hex << x << endl;
    cout << "y � ��������i� ������i = " << dec << y << endl;
    cout << "y � �i�����������i�  ������i = " << hex << y << endl;
    cout << "z � ��������i� ������i = " << dec << z << endl;
    cout << "z � �i�����������i�  ������i = " << hex << z << endl;
    cout << "\nS = " << s_calculation(x, y, z) << endl;
    system("pause");
}
