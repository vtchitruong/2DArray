# Tạo ma trận xoắn ốc từ ngoài vào trong
def fill_spiral_matrix(size):
    
    # Khởi tạo ma trận toàn 0
    M = [[0 for c in range(size)] for r in range(size)]
    
    r = 0
    c = 0

    #  value là giá trị sẽ gán vào từng phần tử
    value = 0   

    while True:
        
        # Ứng với cạnh trên (hàng đầu), gán value từ cột đầu đến cột áp chót
        for i in range(c, size - r - 1):
            value += 1
            M[r][i] = value
        
        # Cho c nhảy đến cột cuối cùng của vòng xoăn
        c = size - r - 1;

        # Ứng với cạnh phải (cột cuối), gán value từ hàng đầu đến hàng áp chót
        for i in range(r, c):
            value += 1
            M[i][c] = value

        # Cho r nhảy đến hàng cuối cùng của vòng xoăn
        r = c

        # Ứng với cạnh dưới (hàng cuối), gán value từ cột cuối về cột áp đầu
        for i in range(c, size - r - 1, -1):
            value += 1
            M[r][i] = value

        # Cho c nhảy về cột đầu tiên của vòng xoắn
        c = size - r - 1

        # Ứng với cạnh trái (cột đầu), gán value từ hàng cuối về hàng áp đầu
        for i in range(r, c, -1):
            value += 1
            M[i][c] = value
        
        # Cho r nhảy về hàng áp đầu của vòng xoắn
        r = c + 1
        
        # Tăng thêm một cột để bắt đầu vòng xoắn mới
        c += 1

        # Khi value đạt đến giá trị cuối cùng thì ngắt vòng lặp while
        if size * size == value:
            break
    
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
    # Ma trận có kích thước
    n = 8

    spiral_matrix = fill_spiral_matrix(n)

    show(spiral_matrix, 'Ma trận xoắn ốc')