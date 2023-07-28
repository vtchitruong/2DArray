#include <iostream>

using namespace std;

const int MAX = 100;
int a[MAX][MAX];

// Khởi tạo tất cả phần tử đều là 0 
void Init(int size)
{
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            a[r][c] = 0;
        }
    }
}

// Gán giá trị value cho các phần tử nằm trên đường chéo chính 
void FillMainDiagonal(int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        a[i][i] = value;
    }
}

// Gán giá trị value cho các phần tử nằm trong vùng tam giác dưới so với đường chéo chính
// (không tính đường chéo chính)
void FillLowerTriangle(int size, int value)
{
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < r; c++)
        {
            a[r][c] = value;
        }
    }
}

// In ma trận ra màn hình
void Show(int size, string message)
{
    cout << message << ":\n";
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            cout << a[r][c] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    // Ma trận có có kích 8x8
    int n = 8;

    Init(n);

    // Gán 1 cho các phần tử nằm trên đường chéo chính
    FillMainDiagonal(n, 1);

    // Gán 2 cho các phần tử nằm trong vùng tam giác dưới
    FillLowerTriangle(n, 2);

    Show(n, "Ma trận");

    return 0;
}