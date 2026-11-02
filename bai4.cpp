#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

double tim_so_lon_nhat(int pt, const vector<double>& Gay)
{
    double kq = Gay[0];

    for (int i; i < Gay.size(); i++)
    {
        if (Gay[i] > kq)
        {
            kq = Gay[i];
        }
    }

    return kq;
}

int main()
{
    int pt;
    cout << "nhap phan tu co trong danh sach: ";
    cin >> pt;

    vector<double> A(pt);
    vector<double> A_sqrt(pt);
    double so_lon_nhat;

    for (int i = 0; i < A.size(); i++)
    {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> A[i];
        A_sqrt[i] = round(sqrt(A[i]) * 1000) / 1000;
    }

    so_lon_nhat = tim_so_lon_nhat(pt, A_sqrt);
    auto vitri_kdd = find(A_sqrt.begin(), A_sqrt.end(), so_lon_nhat);
    int vitri = distance(A_sqrt.begin(), vitri_kdd);

    cout << "lon nhat: " << A[vitri] << ", vi tri: " << vitri + 1;
    return 0;
}