# Khởi tạo tất cả phần tử đều là 0 
def init_matrix(size, value_main_diagonal, value_lower, value_upper):
    matrix = []
    
    for r in range(size):
        # Các ô thuộc tam giác dưới
        matrix.append([value_lower for c in range(r)])
        
        # Các ô nằm trên đường chéo chính 
        matrix[r].append(value_main_diagonal)
        
        # Các ô thuộc tam giác trên
        matrix[r].extend([value_upper for c in range(r + 1, size)])

    return matrix


def show(matrix, message):
    print(f'{message}:')
    for r in range(len(matrix)):
        print(*matrix[r], end=' ')
        print()


if __name__ == '__main__':
    # Ma trận có kích thước 8x8
    n = 8
    
    # Khởi tạo ma trận
    m = init_matrix(n, 1, 2, 3)

    show(m, 'Ma trận và đường chéo chính')