#include<iostream>
using namespace std;
int main()
{
    int n, a[100];
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    // nhap vao danh sach phan tu
    for (int i = 0; i < n; i++)
    {
        cout << "    So thu " << i + 1 << ": ";
        cin >> a[i];
    }

    // hien thi ds phan tu
    cout << "Danh sach phan tu vua nhap: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }

    // danh sach phan tu con thoa man
    cout << "\nDanh sach con thoa man: ";
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                k = j;
            }
        }
        if (k <= i)
            cout << a[i] << "  ";
    }


}
