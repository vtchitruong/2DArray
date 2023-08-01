# Tạo ma trận zigzag
def fill_zigzag_matrix(size):
    # Khởi tạo ma trận rỗng
    M = []
    
    value = 1

    for r in range(size):
        # Đối với hàng lẻ 1, 3, 5, etc, thì gán giá trị value từ phải sang trái
        # Đối với hàng chẵn 0, 2, 4, etc, thì gán giá trị value từ trái sang phải 
        if r % 2 == 0:
            M.append([i for i in range(value, value + size)])
        else:
            M.append([i for i in range(value + size - 1, value - 1, -1)])

        # Gán giá trị lớn nhất của hàng đang xét cho value
        value += size

    return M


# In ma trận ra màn hình
def show(matrix, message):
    print(f'{message}:')

    width = 4
    for row in matrix:
        for e in row:
            print(str(e).rjust(width), end='')
        print()

    
if __name__ == '__main__':
    # Ma trận có có kích 8x8
    n = 8

    zigzag_matrix = fill_zigzag_matrix(n)

    show(zigzag_matrix, 'Ma trận zigzag')