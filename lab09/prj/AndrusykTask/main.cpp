#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <locale.h>
#include <bitset>
#include <math.h>
#include "ModulesAndrusyk.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << ("|Andrusyk Bohdan, CNTU|")<<endl;
    char checkbox;

    while (true){

        cout << "����i�� 'k' ��� ������� s_calculation."<< endl
        << "����i�� 'h' ��� ������� �����i� �����i 9.1."<< endl
        << "����i�� 'g' ��� ������� �����i� �����i 9.2."<< endl
        << "����i�� 'f' ��� ������� �����i� �����i 9.3."<< endl
        << "����i�� 'd', 'D' ��� 'c' ��� ������ � ��������."<< endl
        << "����i�� ����:";
        cin >> checkbox;
        if (checkbox == 'k')
            {
                float a = 0, b = 0, c = 0;
                cout << "x: ";
                cin >> a;

                cout << "y: ";
                cin >> b;

                cout << "z: ";
                cin >> c;

                cout << "���������: " << s_calculation(a, b, c) << endl;
            }
            if(checkbox == 'h')
            {
                deposit();
            }
            if(checkbox == 'g')
            {
                weather();
            }
            if(checkbox == 'f')
            {
                binaryNum();
            }
            if(checkbox == 'c' || checkbox == 'D' || checkbox == 'd')
            {
                break;
            }
            else{
                Beep(500,500);
            }
        }
        return 0;
    }

