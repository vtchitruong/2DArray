#include <iostream>

using namespace std;

const int MAX = 100;
int a[MAX][MAX];

// Khởi tạo ma trận a có giá trị ngẫu nhiên
void Init(int rows, int cols)
{
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            a[r][c] = rand() % 10;
        }
    }
}

// Tạo ma trận chuyển vị, nghĩa là hàng thành cột và cột thành hàng
int** Transpose(int rows, int cols)
{
    int newRows = cols;
    int newCols = rows;

    // Khai báo mảng mới, cấp phát bộ nhớ cho các hàng
    int** aTranspose = new int*[newRows];

    // Duyệt mảng a theo hàng
    for (int r = 0; r < newRows; r++)
    {
        // Cấp phát bộ nhớ cho các cột trong từng hàng
        aTranspose[r] = new int[newCols];

        for (int c = 0; c < newCols; c++)
        {
            aTranspose[r][c] = a[c][r];
        }
    }
     
    return aTranspose;
}

// In ma trận a
void Show_A(int rows, int cols, string message)
{
    cout << message << ":\n";
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            cout << a[r][c] << ' ';
        }
        cout << endl;
    }
}

// In ma trận b
void Show_B(int** b, int rows, int cols, string message)
{
    cout << message << ":\n";
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            cout << b[r][c] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    // Ma trận a có có kích 4x8
    int Rows = 4;
    int Cols = 8;

    // Khởi tạo ma trận a
    Init(Rows, Cols);

    // B là ma trận chuyển vị của A
    int** B = Transpose(Rows, Cols);

    Show_A(Rows, Cols, "Ma trận A");

    Show_B(B, Cols, Rows, "Ma trận B, là chuyển vị của A");

    return 0;
}