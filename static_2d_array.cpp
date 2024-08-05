#include <iostream>

using namespace std;

const int MAX = 100; // hằng số
int Arr[MAX][MAX]; // Khai báo mảng Arr có MAX hàng và MAX cột
int num = 8; // Số phần tử thực dùng là 8x8 = 64 phần tử


// Khởi tạo giá trị 0 cho tất cả phần tử
void initArray(int a[][MAX], int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            a[r][c] = 0;
        }
    }
}


// In mảng hai chiều
void showArray(int a[][MAX], int n, string message)
{
    cout << message << ":\n";
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            cout << a[r][c] << ' ';
        }
        cout << '\n';
    }
}


// Gán giá trị value cho các phần tử nằm trên đường chéo chính 
void fillMainDiagonal(int a[][MAX], int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        a[i][i] = value;
    }
}


// Gán giá trị value cho các phần tử nằm trong vùng tam giác dưới so với đường chéo chính
void fillLowerTriangle(int a[][MAX], int n, int value)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < r; c++)
        {
            a[r][c] = value;
        }
    }
}


// Gán giá trị value cho các phần tử nằm trong vùng tam giác trên so với đường chéo chính
void fillUpperTriangle(int a[][MAX], int n, int value)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = r + 1; c < n; c++)
        {
            a[r][c] = value;
        }
    }
}


int main()
{
    num = 8;
    initArray(Arr, num);
    showArray(Arr, num, "Initial array:");

    // Gán 1 cho các phần tử nằm trên đường chéo chính
    fillMainDiagonal(Arr, num, 1);
    showArray(Arr, num, "Modify the main diagonal");

    // Gán 2 cho các phần tử nằm trong vùng tam giác dưới
    fillLowerTriangle(Arr, num, 2);
    showArray(Arr, num, "Modify the strictly lower triangle");

    // Gán 3 cho các phần tử nằm trong vùng tam giác trên
    fillUpperTriangle(Arr, num, 3);
    showArray(Arr, num, "Modify the strictly upper triangle");

    return 0;
}