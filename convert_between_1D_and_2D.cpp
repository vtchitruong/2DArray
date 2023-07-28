#include <iostream>

using namespace std;

// Khởi tạo mảng-2-chiều ngẫu nhiên
int** Init2D(int rows, int cols)
{
    // Cấp phát bộ nhớ cho các hàng
    int** a = new int*[rows];

    // Duyệt mảng a theo hàng
    for (int r = 0; r < rows; r++)
    {
        // Ứng với mỗi hàng, cấp phát bộ nhớ cho các cột
        a[r] = new int[cols];
        
        for (int c = 0; c < cols; c++)
        {
            a[r][c] = rand() % 10;
        }
    }
    
    return a;
}

// Chuyển đổi từ mảng-2-chiều thành mảng-1-chiều
int* Convert_2D_To_1D(int** a, int rows, int cols)
{
    int size = rows * cols;

    int* b = new int[size];

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            // Công thức tính vị trí của phần tử nào đó trong mảng-1-chiều
            int i = r * cols + c;
            b[i] = a[r][c];
        }
    }

    return b;
}

// Khởi tạo mảng-1-chiều ngẫu nhiên
int* Init1D(int size)
{
    // Cấp phát bộ nhớ cho các phần tử
    int* a = new int[size];

    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 10;
    }
    
    return a;
}

// Chuyển đổi từ mảng-1-chiều thành mảng-2-chiều
int** Convert_1D_To_2D(int* a, int size, int rows, int cols)
{
    if (rows * cols == size)
    {
        // Cấp phát bộ nhớ cho các hàng của mảng-2-chiều b        
        int** b = new int*[rows];

        for (int r = 0; r < rows; r++)
        {
            // Ứng với mỗi hàng, cấp phát bộ nhớ cho các cột
            b[r] = new int[cols];
        }

        // Duyệt các phần tử của mảng-1-chiều
        for (int i = 0; i < size; i++)
        {
            // Công thức tính chỉ số hàng và chỉ số cột của phần tử nào đó trong mảng-2-chiều
            int r = i / cols;
            int c = i % cols;

            b[r][c] = a[i];
        }

        return b;
    }
    else
    {
        // Trả về con trỏ rỗng khi kích thước của mảng-1-chiều không thể chia thành kích thước hàng và cột của mảng-2-chiều 
        return nullptr;
    }
}

// In mảng-2-chiều
void Show2D(int** a, int rows, int cols, string message)
{
    cout << '\n' << message << ":\n";

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            cout << a[r][c] << ' ';
        }

        cout << endl;
    }
}

// In mảng-1-chiều
void Show1D(int* a, int size, string message)
{
    cout << '\n' << message << ":\n";

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << ' ';
    }
}

int main()
{
    // Bàn cờ có kích 8x8
    int Rows = 4;
    int Cols = 6;

    // Khởi tạo mảng-2-chiều
    int** Arr_2D = Init2D(Rows, Cols);

    // Chuyển đổi thành mảng-1-chiều
    int* Arr_1D = Convert_2D_To_1D(Arr_2D, Rows, Cols);

    Show2D(Arr_2D, Rows, Cols, "Mảng-2-chiều");
    Show1D(Arr_1D, Rows * Cols, "Chuyển đổi thành mảng-1-chiều");

    // Khởi tạo mảng-1-chiều
    int Size = 21;
    int* C_1D = Init1D(Size);

    // Chuyển đổi thành mảng-2-chiều có kích thước 3x7
    Rows = 3;
    Cols = 7;
    int** C_2D = Convert_1D_To_2D(C_1D, Size, Rows, Cols);

    
    Show1D(C_1D, Size, "Mảng-1-chiều");
    Show2D(C_2D, Rows, Cols, "Chuyển đổi thành mảng-2-chiều");

    return 0;
}