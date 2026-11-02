#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int pt;
    cout << "nhap phan tu co trong danh sach: ";
    cin >> pt;

    vector<int> A(pt);
    vector<double> A_sqrt(pt);
    int x;

    for (int i = 0; i < A.size(); i++)
    {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> A[i];
        A_sqrt[i] = sqrt(A[i]);
    }

    cout << "Nhap x = ";
    cin >> x;

    bool timthay = false;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == x)
        {
            timthay = true;
            break;
            
        }
    }

    if (timthay)
    {
        cout << "Tim thay" << endl;
    }
    else
    {
        double kcgg = 999;
        int gan_nhat;
        for (int i = 0; i < A_sqrt.size(); i++)
        {
            double kc = abs(A_sqrt[i] - x);
            if (kc < kcgg)
            {
                kcgg = kc;
                gan_nhat = A[i];
            }
        }
        cout << "gan nhat theo can: "<< gan_nhat;
    }

    return 0;
}