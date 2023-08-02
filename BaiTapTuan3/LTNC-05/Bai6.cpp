#include <iostream>
#include <map>

using namespace std;

int main() {
  int Q;
  cin >> Q;

  map<string, int> scores;

  for (int i = 0; i < Q; i++) {
    int type;
    string student;
    int point;

    cin >> type >> student;

    if (type == 1) {
      cin >> point;
      scores[student] += point;
    } else if (type == 2) {
      scores.erase(student);
    } else {
      cout << scores[student] << endl;
    }
  }

  return 0;
}