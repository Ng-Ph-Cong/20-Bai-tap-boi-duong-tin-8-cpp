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
    vector<int> kq;

    for (int i = 0; i < A.size(); i++)
    {
        cout << "Nhập phần tử thứ " << i +1 << ": ";
        cin >> A[i];
        if (A[i] == 0 or A[i] % 2 == 0)
        {
            kq.push_back(0);
        }
        else
        {
            kq.push_back(1);
        }
    }

    for (int i = 0; i < kq.size(); i++)
    {
        cout << kq[i] << " ";
    }

    return 0;
}