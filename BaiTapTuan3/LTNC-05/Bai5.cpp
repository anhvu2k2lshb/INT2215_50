include <bits/stdc++.h>

int main() {
  int q;
  cin >> q;

  // Tạo một tập hợp `s`.
  set<int> s;

  // Lặp qua `q` lần.
  for (int i = 0; i < q; i++) {
    // Đọc loại thao tác và giá trị `x`.
    int type, x;
    cin >> type >> x;

    // Nếu loại thao tác là 1, thì thêm `x` vào tập `s`.
    if (type == 1) {
      s.insert(x);
    }
    // Nếu loại thao tác là 2, thì xóa `x` khỏi tập `s`.
    else if (type == 2) {
      s.erase(x);
    }
    // Nếu loại thao tác là 3, thì kiểm tra xem `x` có tồn tại trong tập `s` hay không.
    else {
      if (s.find(x) != s.end()) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }

  return 0;
}