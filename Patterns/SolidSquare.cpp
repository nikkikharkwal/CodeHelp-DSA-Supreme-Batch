#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  for(int row = 0;row < N;row++){
    for(int col = 0;col < N;col++){
      cout << "* ";
    }
    cout << endl;
  }
}