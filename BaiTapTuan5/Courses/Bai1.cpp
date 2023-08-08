#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<string>& board, int row, int col, int n) {
    // Kiểm tra hàng và cột
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q') return false;
    }
    for (int j = 0; j < col; j++) {
        if (board[row][j] == 'Q') return false;
    }
    
    // Kiểm tra đường chéo chính và đường chéo phụ
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') return false;
    }
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q') return false;
    }
    
    return true;
}

void solveNQueensHelper(vector<vector<string>>& solutions, vector<string>& board, int row, int n) {
    if (row == n) {
        solutions.push_back(board);
        return;
    }
    
    for (int col = 0; col < n; col++) {
        if (isValid(board, row, col, n)) {
            board[row][col] = 'Q';
            solveNQueensHelper(solutions, board, row + 1, n);
            board[row][col] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> solutions;
    vector<string> board(n, string(n, '.'));
    solveNQueensHelper(solutions, board, 0, n);
    return solutions;
}

int main() {
    int n;
    cin >> n;
    vector<vector<string>> solutions = solveNQueens(n);
    cout << "[";
    for (int i = 0; i < (int)solutions.size(); i++) {
        cout << "[";
        for (int j = 0; j < (int)solutions[i].size(); j++) {
            cout << "\"" << solutions[i][j] << "\"";
            if (j < (int)solutions[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < (int)solutions.size() - 1) cout << ",";
    }
    cout << "]" << endl;
    return 0;
}






