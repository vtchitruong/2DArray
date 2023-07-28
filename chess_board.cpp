#include <iostream>

using namespace std;

const int MAX = 100;
int a[MAX][MAX];

// Tạo bàn cờ vua 
void FillChessBoard(int size)
{
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            a[r][c] = (r + c) % 2;
        }
    }
}

// In ma trận bàn cờ ra màn hình
void Show(int size, string message)
{
    cout << message << ":\n";
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            cout << a[r][c] << "  ";
        }
        cout << endl;
    }
}

int main()
{
    // Bàn cờ có kích 8x8
    int n = 8;

    FillChessBoard(n);

    Show(n, "Ma trận");

    return 0;
}