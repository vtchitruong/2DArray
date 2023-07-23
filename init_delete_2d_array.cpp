#include <iostream>

using namespace std;

// Khởi tạo mảng-2-chiều có các phần tử được gán sẵn giá trị
void Init()
{
    int B[3][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        };
    
    cout << "Mảng B được gán sẵn giá trị:" << endl;

    // Duyệt mảng B theo hàng
    // Ứng với mỗi hàng, duyệt theo cột
    for (int r = 0; r < 3; r++)
    {
        // In các phần tử trong cùng hàng
        for (int c = 0; c < 4; c++)
        {
             cout << B[r][c] << ' ';
        }

        // Hết hàng thì xuống dòng
        cout << endl;
    }
}

// Khởi tạo mảng-2-chiều với các phần tử có giá trị giống nhau
int** Init(int rows, int cols, int value)
{
    // Khai báo a là mảng gồm nhiều hàng (số hàng là rows)
    int** a = new int*[rows];

    // Duyệt mảng a theo hàng
    for (int r = 0; r < rows; r++)
    {
        // Khai báo a[r] là mảng-một-chiều gồm cols phần tử, mỗi phần tử là một số nguyên
        a[r] = new int[cols];

        for (int c = 0; c < cols; c++)
        {
            a[r][c] = value;
        }
    }

    return a;
}

// Khởi tạo mảng 2 chiều ngẫu nhiên
int** Init(int rows, int cols)
{
    // Khai báo a là mảng gồm nhiều hàng (số hàng là rows)
    int** a = new int*[rows];

    // Duyệt mảng a theo hàng
    for (int r = 0; r < rows; r++)
    {
        // Khai báo a[r] là mảng-một-chiều gồm cols phần tử, mỗi phần tử là một số nguyên
        a[r] = new int[cols];
        
        // Duyệt mảng a[r], đồng nghĩa với duyệt từng cột của mảng-2-chiều-a
        for (int c = 0; c < cols; c++)
        {
            a[r][c] = rand() % 10;
        }
    }
    
    return a;
}

void Show(int** a, int rows, int cols, string message)
{
    cout << message << endl;

    // Duyệt mảng-2-chiều-a theo hàng
    // Ứng với mỗi hàng, duyệt theo cột
    for (int r = 0; r < rows; r++)
    {
        // In các phần tử trong cùng hàng
        for (int c = 0; c < cols; c++)
        {
            cout << a[r][c] << ' ';
        }

        // Hết hàng thì xuống dòng
        cout << endl;
    }
}

// Xóa toàn bộ mảng-2-chiều
void Delete(int ** a, int rows)
{
    // Hủy vùng nhớ đã cấp phát cho các cột trong mỗi hàng (de-allocate memory)
    for (int r = 0; r < rows; r++)
    {
        delete[] a[r];
    }

    // Hủy vùng nhớ đã cấp phát cho các hàng
    delete[] a;
}

int main()
{
    // Khởi tạo và in mảng B gán sẵn giá trị 
    Init();

    // Tổng số hàng và số cột của mảng-2-chiều
    int _rows = 4;
    int _cols = 5;


    int** zero_arr = Init(_rows, _cols, 0);
    Show(zero_arr, _rows, _cols, "Mảng zero gồm toàn các phần tử 0:");

    int** A = Init(_rows, _cols);
    Show(A, _rows, _cols, "Mảng A ban đầu:");

    Delete(A, _rows);

    // Khi chạy, chương trình sẽ báo lỗi vì vùng nhớ của mảng đã bị de-allocate
    Show(A, _rows, _cols, "Xóa mảng:");

    return 0;
}