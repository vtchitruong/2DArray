#include <iostream>
#include <iomanip>

using namespace std;

const int MAX = 100;
int a[MAX][MAX];

void FillPascalTriangle(int size)
{
    // Khởi tạo hàng đầu tiên của tam giác Pascal
    a[0][0] = 1;

    // Duyệt từng hàng
    for (int r = 1; r < size; r++)
    {
        // Gán phần tử đầu tiên của hàng là 1
        a[r][0] = 1;

        // Gán các phần tử giữa
        for (int c = 1; c < r; c++)
        {
            a[r][c] = a[r - 1][c] + a[r - 1][c - 1];
        }

        // Gán phần tử đầu tiên của hàng là 1
        a[r][r] = 1;
    }
}

// In tam giác Pascal ra màn hình
void Show(int size, string message)
{
    cout << message << ":\n";
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < r + 1; c++)
        {
            cout << setw(4) << a[r][c];
        }
        cout << endl;
    }
}

int main()
{
    // Tam giác có 8 hàng
    int n = 10;

    FillPascalTriangle(n);

    Show(n, "Tam giác Pascal");

    return 0;
}