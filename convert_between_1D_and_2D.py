import random as rd

# Khởi tạo mảng-2-chiều ngẫu nhiên
def init_2d(rows, cols):
    L2 = [[rd.randint(0, 9) for c in range(cols)] for r in range(rows)]
    return L2


# Chuyển đổi từ mảng-2-chiều thành mảng-1-chiều
def convert_2d_to_1d(L2):
    rows = len(L2)
    cols = len(L2[0])
    
    # Khởi tạo số lượng phần tử cho mảng-1-chiều
    L1 = [0 for i in range(rows * cols)]   

    for r in range(rows):
        for c in range(cols):
            # Công thức tính vị trí của phần tử nào đó trong mảng-1-chiều
            i = r * cols + c;
            L1[i] = L2[r][c]
    
    return L1


# Khởi tạo mảng-1-chiều ngẫu nhiên
def init_1d(size):
    L = [rd.randint(0, 9) for i in range(size)]
    return L


# Chuyển đổi từ mảng-1-chiều thành mảng-2-chiều
def convert_1d_to_2d(L1, rows, cols):
    size = len(L1)
        
    if rows * cols == size:
        # Khởi tạo mảng-2-chiều
        L2 = [[0 for c in range(cols)] for r in range(rows)]

        # Duyệt các phần tử của mảng-1-chiều
        for i in range(size):
            # ông thức tính chỉ số hàng và chỉ số cột của phần tử nào đó trong mảng-2-chiều
            r = i // cols
            c = i % cols
            L2[r][c] = L1[i]
        
        return L2
    else:
        # Trả về mảng rỗng khi kích thước của mảng-1-chiều không thể chia thành kích thước hàng và cột của mảng-2-chiều
        return []


# In mảng-2-chiều
def show_2d(L, message):
    print(f'{message}:')
    for r in range(len(L)):
        print(*L[r], sep=' ')


# In mảng-1-chiều
def show_1d(L, message):
    print(f'{message}:')
    print(*L, sep=' ')


if __name__ == '__main__':
    rows = 4
    cols = 6
    
    # Khởi tạo mảng-2-chiều
    arr_2D = init_2d(rows, cols)

    # Chuyển đổi thành mảng-1-chiều
    arr_1D = convert_2d_to_1d(arr_2D)

    show_2d(arr_2D, 'Mảng-2-chiều')
    show_1d(arr_1D, 'Chuyển đổi thành mảng-1-chiều')

    # Khởi tạo mảng-1-chiều
    size = 21
    c_1D = init_1d(size)

    # Chuyển đổi thành mảng-2-chiều có kích thước 3x7
    rows = 3
    cols = 7
    
    c_2D = convert_1d_to_2d(c_1D, rows, cols)

    show_1d(c_1D, 'Mảng-1-chiều')
    show_2d(c_2D, 'Chuyển đổi thành mảng-2-chiều')