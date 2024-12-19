def print_board(board):
    for row in board:
        print(" ".join("Q" if cell else "." for cell in row))
    print()

def is_safe(board, row, col):
    # Check the column
    for i in range(row):
        if board[i][col]:
            return False

    # Check the upper-left diagonal
    i, j = row, col
    while i >= 0 and j >= 0:
        if board[i][j]:
            return False
        i -= 1
        j -= 1

    # Check the upper-right diagonal
    i, j = row, col
    while i >= 0 and j < len(board):
        if board[i][j]:
            return False
        i -= 1
        j += 1

    return True

def solve_n_queens(board, row):
    if row >= len(board):
        print_board(board)
        return True

    found_solution = False
    for col in range(len(board)):
        if is_safe(board, row, col):
            board[row][col] = True
            if solve_n_queens(board, row + 1):
                found_solution = True
            board[row][col] = False

    return found_solution

def n_queens():
    board = [[False] * 8 for _ in range(8)]  # Initialize the 8x8 board
    solve_n_queens(board, 0)

n_queens()