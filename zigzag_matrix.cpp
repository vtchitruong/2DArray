#include <iostream>
#include <iomanip>

using namespace std;

const int MAX = 100;
int a[MAX][MAX];

// Tạo ma trận zigzag
void FillZigzagMatrix(int size)
{
    int value = 1;

    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            // Đối với hàng lẻ 1, 3, 5, etc, thì gán giá trị value từ phải sang trái
            // Đối với hàng chẵn 0, 2, 4, etc, thì gán giá trị value từ trái sang phải 
            if (r % 2)
            {
                a[r][size - c - 1] = value++;
            }
            else
            {
                a[r][c] = value++;
            }
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
            cout << setw(4) << a[r][c];
        }
        cout << endl;
    }
}

int main()
{
    // Ma trận có có kích 8x8
    int n = 8;

    FillZigzagMatrix(n);

    Show(n, "Ma trận zigzag (ma trận rắn)");

    return 0;
}