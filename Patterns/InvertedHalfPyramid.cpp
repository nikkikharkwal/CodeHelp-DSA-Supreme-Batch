#include <iostream>
using namespace std;

int main() {
  int N; //No. Of Rows
  cin >> N;

  for(int row = 0;row < N;row++){
    for(int col = row;col < N;col++){
      cout << "* ";
    }
    cout << endl;
  }
}