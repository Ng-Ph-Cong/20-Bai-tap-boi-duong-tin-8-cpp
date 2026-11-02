
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
    cout << "Nhap so phan tu: ";
    cin >> pt;

    vector<int> A(pt);
    vector<double> kq;

    for (int i = 0; i < pt; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> A[i];

        if (A[i] < 0) continue;

        int can = sqrt(A[i]);

        if (can * can != A[i]) continue;

        int n = can;
        int dx = 0;

        while (n > 0)
        {
            dx = dx * 10 + n % 10;
            n /= 10;
        }

        if (can == dx)
        {
            kq.push_back(can);
        }
    }

    for (int i = 0; i < kq.size(); i++)
    {
        cout << kq[i] << endl;
    }

    return 0;
}
