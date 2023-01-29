#include <iostream>
using namespace std;

int main() {
  int N = 3;
  int M = 5;
  for(int row = 0;row < N;row++){
    for(int col = 0;col < M;col++){
      cout << "* ";
    }
    cout << endl;
  }
}