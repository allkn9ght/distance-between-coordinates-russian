#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

float x_1 = 0;
float y_1 = 0;
float x_2 = 0;
float y_2 = 0;
float rastoyanie = 0;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введите координаты первой точки(x1,y1): ";
    cin >> x_1 >> y_1;
    cout << "Введите координаты второй точки(x2,y2): ";
    cin >> x_2 >> y_2;
    int k1 = x_2- x_1;
    int k2 = y_2- y_1;

    rastoyanie = sqrt(k1*k1 + k2*k2);
    cout << "Расстояние между точками " << rastoyanie << ".\n";

    cout << "Для выхода нажмите <Enter>.. \n";
    fflush(stdin);
    cin.get();
    return 0;
}
