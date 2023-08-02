#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int N = 10;

// Kiểm tra xem từ có thể điền vào ô chữ tại vị trí (r, c) không
bool canFill(vector<string>& crossword, string word, int r, int c, int dir) {
    if (dir == 0) { // đi từ trái sang phải
        int len = word.length();
        if (c + len > N) return false;
        for (int i = 0; i < len; i++) {
            if (crossword[r][c + i] != '-' && crossword[r][c + i] != word[i]) {
                return false;
            }
        }
    } else { // đi từ trên xuống dưới
        int len = word.length();
        if (r + len > N) return false;
        for (int i = 0; i < len; i++) {
            if (crossword[r + i][c] != '-' && crossword[r + i][c] != word[i]) {
                return false;
            }
        }
    }
    return true;
}

// Điền từ vào ô chữ tại vị trí (r, c) theo hướng dir (0: từ trái sang phải, 1: từ trên xuống dưới)
void fillWord(vector<string>& crossword, string word, int r, int c, int dir) {
    if (dir == 0) { // đi từ trái sang phải
        int len = word.length();
        for (int i = 0; i < len; i++) {
            crossword[r][c + i] = word[i];
        }
    } else { // đi từ trên xuống dưới
        int len = word.length();
        for (int i = 0; i < len; i++) {
            crossword[r + i][c] = word[i];
        }
    }
}

// Xoá từ khỏi ô chữ tại vị trí (r, c) theo hướng dir (0: từ trái sang phải, 1: từ trên xuống dưới)
void removeWord(vector<string>& crossword, string word, int r, int c, int dir) {
    if (dir == 0) { // đi từ trái sang phải
        int len = word.length();
        for (int i = 0; i < len; i++) {
            crossword[r][c + i] = '-';
        }
    } else { // đi từ trên xuống dưới
        int len = word.length();
        for (int i = 0; i < len; i++) {
            crossword[r + i][c] = '-';
        }
    }
}

// Hàm giải bài toán ô chữ bằng thuật toán quay lui
bool solveCrossword(vector<string>& crossword, vector<string>& words, int idx) {
    if (idx == words.size()) {
        return true; // Tất cả các từ đã điền vào đúng vị trí
    }

    string word = words[idx];
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            // Thử điền từ word vào ô chữ tại vị trí (r, c) theo hướng từ trái sang phải
            if (canFill(crossword, word, r, c, 0)) {
                vector<string> backup = crossword;
                fillWord(crossword, word, r, c, 0);
                if (solveCrossword(crossword, words, idx + 1)) {
                    return true;
                }
                crossword = backup; // Khôi phục trạng thái ban đầu
            }

            // Thử điền từ word vào ô chữ tại vị trí (r, c) theo hướng từ trên xuống dưới
            if (canFill(crossword, word, r, c, 1)) {
                vector<string> backup = crossword;
                fillWord(crossword, word, r, c, 1);
                if (solveCrossword(crossword, words, idx + 1)) {
                    return true;
                }
                crossword = backup; // Khôi phục trạng thái ban đầu
            }
        }
    }
    return false;
}

int main() {
    vector<string> crossword(N);
    for (int i = 0; i < N; i++) {
        getline(cin, crossword[i]);
    }

    string words;
    getline(cin, words);
    vector<string> wordList;

    string word = "";
    for (char ch : words) {
        if (ch == ';') {
            wordList.push_back(word);
            word = "";
        } else {
            word += ch;
        }
    }
    wordList.push_back(word);

    if (solveCrossword(crossword, wordList, 0)) {
        for (const string& row : crossword) {
            cout << row << endl;
        }
    } else {
        cout << "Cannot solve crossword puzzle" << endl;
    }

    return 0;
}
