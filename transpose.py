import random as rd

# Khởi tạo ma trận ngẫu nhiên
def init_matrix(rows, cols):
    L2 = [[rd.randint(0, 9) for c in range(cols)] for r in range(rows)]
    return L2


# Tạo ma trận chuyển vị, nghĩa là hàng thành cột và cột thành hàng
def transpose_matrix(m):
    rows = len(m)
    cols = len(m[0])

    m_transpose = [[m[r][c] for r in range(rows)] for c in range(cols)] 
    return m_transpose


# In ma trận
def show_matrix(matrix, message):
    print(f'{message}:')
    for row in matrix:
        print(*row, sep=' ')


if __name__ == '__main__':
    rows = 4
    cols = 8
    
    # Khởi tao ma trận
    original = init_matrix(rows, cols)

    transpose = transpose_matrix(original)

    show_matrix(original, 'Ma trận gốc')
    show_matrix(transpose, 'Ma trận chuyển vị')