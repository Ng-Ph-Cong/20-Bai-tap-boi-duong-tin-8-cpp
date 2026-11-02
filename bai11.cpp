#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int pt;
    cout << "Nhập số phần tử có trong danh sách: ";
    cin >> pt;

    vector<int> A(pt);
    vector<int> C(pt);

    for (int i = 0; i < A.size(); i++)
    {
        cout << "Nhập phần tử thứ " << i + 1 << ": ";
        cin >> A[i];

        C[i] = A[i] * A[i];
    }

    for (int i = 0; i < C.size(); i++)
    {
        cout << "Căn bậc 2 của " << A[i] << " là: " << C[i] << endl;
    }

    return 0;
}