#include <iostream>
using namespace std;

int main() {
  int N; //No. Of Rows
  cin >> N;

  for(int row = 0;row < N;row++){
    for(int col = 0;col < row+1;col++){
      cout << col + 1 << " ";
    }
    cout << endl;
  }
}