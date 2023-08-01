# Tạo ma trận bàn cờ vua bằng list comprehension
def fill_chess_board(size):
    board = [[(r + c) % 2 for c in range(size)] for r in range(size)]
    return board

# In ma trận bàn cờ ra màn hình
def show(board, size, message):
    print(f'{message}:')
    for r in range(size):
        print(*board[r], sep=' ')

if __name__ == '__main__':
    s = 8
    B = fill_chess_board(s)
    show(B, s, 'Ma trận bàn cờ vua')