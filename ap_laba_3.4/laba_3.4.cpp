// Lab_03_4.cpp
// ����� �������
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 12

#include <iostream>
using namespace std;
int main()
{
    double x; // ������� ��������
    double y; // ������� ��������
    double R; // ������� ��������
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    

    // ������������ � ����� ����
    if ((y <= R && y>=0 && x >= -R && x<= 0 && R*R<= (x+R)* (x + R)+(y-R)* (y - R)) ||
        (y >=-R && y <= 0 && x>=0 && x<= R && R * R <= (x - R) * (x - R) + (y + R) * (y + R)))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    cin.get();
    return 0;
}