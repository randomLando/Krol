#include <iostream>

using namespace std;

int main() {
  char col;
  int row;
  cin >> col >> row;

  int col_idx = col - 'a';
  int row_idx = row - 1;

  int count = 0;

  if (col_idx > 0) {
    count++;
  }

  if (col_idx < 7) {
    count++;
  }

  if (row_idx > 0) {
    count++;
  }

  if (row_idx < 7) {
    count++;
  }

  if (col_idx > 0 && row_idx > 0) {
    count++;
  }

  if (col_idx < 7 && row_idx > 0) {
    count++;
  }

  if (col_idx > 0 && row_idx < 7) {
    count++;
  }

  if (col_idx < 7 && row_idx < 7) {
    count++;
  }

  cout << count << endl;

  return 0;
}
