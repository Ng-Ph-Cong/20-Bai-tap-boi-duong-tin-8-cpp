#include <iostream>
#include <vector>
#include <cmath>
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
        cout << "Nhập phần tử thứ " << i + 1 << ": ";
        cin >> A[i];

        kq.push_back(floor(sqrt(A[i])));
    }

    for (int i = 0; i < kq.size(); i++)
    {
        cout << "phần nguyên của căn bậc hai " << A[i] << " là: " << kq[i] << endl;
    }

    return 0;
}