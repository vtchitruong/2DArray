# Tạo tam giác Pascal
def fill_pascal_triangle(size):   
    # Khởi tạo hàng đầu tiên của tam giác Pascal
    T = [[] for r in range(size)]
    T[0].append(1)

    # Duyệt từng hàng, bắt đầu từ hàng 1
    for r in range(1, size):
        # Gán phần tử đầu tiên của hàng là 1
        T[r].append(1)

        # Gán các phần tử ở giữa
        for c in range(1, r):
            T[r].append(T[r - 1][c] + T[r - 1][c - 1])

        # Gán phần tử đầu tiên của hàng là 1
        T[r].append(1)

    return T


# In tam giác Pascal ra màn hình
def show(T, message):
    print(f'{message}:')
    
    width = 4    
    for row in T:
        for e in row:
            print(str(e).rjust(width), end='')
        print()


if __name__ == '__main__':
    # Tam giác có 10 hàng
    n = 10
    
    pascal = fill_pascal_triangle(n)

    show(pascal, 'Tam giác Pascal')