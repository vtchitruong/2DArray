#include <iostream>
#include <iomanip>

using namespace std;

const int MAX = 100;
int a[MAX][MAX];

// Tạo ma trận xoắn ốc từ ngoài vào trong
void FillSpiralMatrix(int size)
{
    int r = 0;
    int c = 0;

    // value là giá trị sẽ gán vào từng phần tử
    int value = 0;

    // Mỗi while sẽ chạy một "vòng" của ma trận con (sub-matrix), ứng với 4 cạnh
    while (1)
    {
        // Ứng với cạnh trên (hàng đầu), gán value từ cột đầu đến cột áp chót
        do
        {
            a[r][c] = ++value;;
            c++;
        } while (c < size - r - 1);

        // Ứng với cạnh phải (cột cuối), gán value từ hàng đầu đến hàng áp chót
        do
        {
            a[r][c] = ++value;;
            r++;
        } while (c > r);

        // Ứng với cạnh dưới (hàng cuối), gán value từ cột cuối về cột áp đầu
        do
        {
            a[r][c] = ++value;;
            c--;
        } while (c > size - r - 1);

        // Ứng với cạnh trái (cột đầu), gán value từ hàng cuối về hàng áp đầu
        do
        {
            a[r][c] = ++value;;
            r--;
        } while (c < r - 1);
    
        // Khi value đạt đến giá trị cuối cùng thì ngắt vòng lặp while
        if (value == size * size) break;
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
    // Ma trận có kích 8x8
    int n = 8;

    FillSpiralMatrix(n);

    Show(n, "Ma trận xoắn ốc");

    return 0;
}