#include <iostream>
#include <math.h>
#include <string>
#include <clocale>
#include <stdlib.h>
#include <cmath>
#include <bitset>
#include <windows.h>
#include <fstream>
#include <ctime>
#include "ModulesAndrusyk.h"

using namespace std;


float s_calculation(float x, float y, float z){
    const double P = 3.141592653589793;
    float S = fabs((pow((y*z),fabs(x)))-(y/P)-(sqrt(x)));
    return S;
}

void deposit()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float annualRate = 0;
    float depositSum = 0;
    float profit = 0;

    int monthAmount = 0;

    cout << "���� ��������: ";
    cin >> depositSum;

    while (true)
    {
        if (depositSum <= 0)
        {
            cout << "�������! ������ ����� ���: ";
            cin >> depositSum;
        }

        else
        {
            break;
        }
    }

    cout << "������ ������� ������ (6 ��� 12): ";
    cin >> monthAmount;

    while(true)
    {
        if(monthAmount == 6 || monthAmount == 12)
        {
            break;
        }

        else
        {
            cout << "�������! ������ ����� ���: " ;
            cin >> monthAmount;
        }
    }

    switch (monthAmount)
    {
        case 6: annualRate = 16;
            break;
        case 12: annualRate = 18;
            break;
    }

    cout << "���� �� �����: ";

    profit = (depositSum * (annualRate / 100)  / 12 * monthAmount) / monthAmount;

    cout << profit << endl;

    cout << "���� �� ���� ���: ";

    profit = depositSum * (annualRate / 100)  / 12 * monthAmount;

    cout << profit << endl;
}

void weather()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int SpeedBeaufs[31];
    float SpeedMeters[31];

    for (int i = 0; i < 31; i++)
    {
        SpeedBeaufs[i] = 0;
    }

    for (int i = 0; i < 31; i++)
    {
        cout << "������ ��������� �� " << i + 1 << " �����: ";
        cin >> SpeedMeters[i];
    }

    for (int i = 0; i < 31; i++)
    {
        if(SpeedMeters[i] < 0.3)
        {
            SpeedBeaufs[i] = 0;
        }
        if(SpeedMeters[i] >= 0.3 && SpeedMeters[i] <= 1.5)
        {
            SpeedBeaufs[i] = 1;
        }
        if(SpeedMeters[i] >= 1.6 && SpeedMeters[i] <= 3.3)
        {
            SpeedBeaufs[i] = 2;
        }
        if(SpeedMeters[i] >= 3.4 && SpeedMeters[i] <= 5.4)
        {
            SpeedBeaufs[i] = 3;
        }
        if(SpeedMeters[i] >= 5.5 && SpeedMeters[i] <= 7.9)
        {
            SpeedBeaufs[i] = 4;
        }
        if(SpeedMeters[i] >= 8.0 && SpeedMeters[i] <= 10.7)
        {
            SpeedBeaufs[i] = 5;
        }
        if(SpeedMeters[i] >= 10.8 && SpeedMeters[i] <= 13.8)
        {
            SpeedBeaufs[i] = 6;
        }
        if(SpeedMeters[i] >= 13.9 && SpeedMeters[i] <= 17.1)
        {
            SpeedBeaufs[i] = 7;
        }
        if(SpeedMeters[i] >= 17.2 && SpeedMeters[i] <= 20.7)
        {
            SpeedBeaufs[i] = 8;
        }
        if(SpeedMeters[i] >= 20.8 && SpeedMeters[i] <= 24.4)
        {
            SpeedBeaufs[i] = 9;
        }
        if(SpeedMeters[i] >= 24.5 && SpeedMeters[i] <= 28.4)
        {
            SpeedBeaufs[i] = 10;
        }
        if(SpeedMeters[i] >= 28.5 && SpeedMeters[i] <= 32.6)
        {
            SpeedBeaufs[i] = 11;
        }
        if(SpeedMeters[i] > 32.6)
        {
            SpeedBeaufs[i] = 12;
        }
    }

    int maxValue = SpeedBeaufs[0];

    for (int i = 0; i < 31; i++)
    {
        if (SpeedBeaufs[i] > maxValue)
        {
            maxValue = SpeedBeaufs[i];
        }
    }

    cout << endl << maxValue << " �������" << endl;
}

void binaryNum()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string numBinary = "";
    int numDecimal = 0;
    int binZero = 0;

    while (true)
    {
        cout << "������ ����� �� 0 �� 90080000: " << endl;
        cin >> numDecimal;
        if (numDecimal >= 0 && numDecimal < 90080000)
        {
            break;
        }
        else
        {
            cout << "�������! ���� ����� �������� �� ������ ���! ��������� �� ���!" << endl;
        }
    }

    numBinary = bitset<16>(numDecimal).to_string();
    cout << numBinary << endl;

    int i = 0;

    while (numBinary[i])
    {
        if (numBinary[i] == '0') binZero++;
        i++;
    }

    cout << "            ^13 ��!" << endl;
//    cout << "13 BIT: " << numBinary[numBinary.length() - 13] << endl;

    if (numBinary[12] == '0')
    {
        cout << "���������: " << binZero << endl;
    }

    else
    {
        cout << "���������: " << 16 - binZero << endl;
    }
}


void task_10_1(char *OutFile,char *InFile)
{
   ofstream outFile;
   outFile.open(OutFile);
   outFile << "|Andrusyk Bohdan, CNTU|";
   ifstream inFile;
   inFile.open(InFile);
   string fromFile;
   inFile >> fromFile;
   inFile.close();
   int amount = 0;
   for (int i=0; i<fromFile.length(); i++)
   {
       if (fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�')
       amount++;
   }
   outFile << "\nʳ������ �������� ���� � ���� \"" << fromFile << "\": " << amount << endl;

   string kraplina = "�� ����� �� ����� ������ �����."
                     "� ��� ���� - ���� �� ��� �� �����."
                     "��������� ������ ������ ����� ������ -"
                     "�������� ������� ��������� �����.";

    if(kraplina.find(fromFile) != string::npos)
        outFile << "C���� \"" << fromFile << "\" � � ��������� ³���� ��������." << endl;
    else
        outFile << "C���� \"" << fromFile << "\" ������ � ��������� ³���� ��������." << endl;
    outFile.close();
}

void task_10_2(char *OutInFile)
{
   ifstream inFile;
   inFile.open(OutInFile);
   string fromFile;
   inFile >> fromFile;
   inFile.close();
   ofstream in_File;
   in_File.open(OutInFile, ios::app);
   int amoun = 0;

       for (int i=0; i<fromFile.length(); i++)
   {
       if (!(fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�' || fromFile[i] == '�'))
       amoun++;
   }
    in_File << "\nʳ������ ����������� ���� � ����: " << amoun << endl;
    time_t times = time(NULL);
    in_File << "��� �������� :"  << asctime (localtime( &times )) << endl;
    in_File.close();

}

void task_10_3(float x,float y, float z, float b,char *OutFile)
{
   ofstream outFile;
   outFile.open(OutFile, ios::app);
   if (x>4)
        outFile << "\n��������� ��������� ������� s_calculation: S = " << s_calculation(x,y,z) << endl;
    else
        outFile << "\n��������� ��������� ������� s_calculation ��������� ��������� (� ������� ���� ������ �� 0)!" << endl;
   if (b>0)
        outFile<< "����� " << b << " � ��������� ���: " << bitset<32>(b) << endl;
    else
        outFile<< "����� " << b << " �� ����������." << endl;
   outFile.close();
}
