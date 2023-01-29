#include <iostream>
using namespace std;

int main() {
  int N;
  int M;
  cin >> N;
  cin >> M;

  for(int row = 0;row < N;row++){
    for(int col = 0;col < M;col++){
      //First Row And Last Row
      if(row == 0 || row == N-1){
        cout << "* ";
      }
      else {
        //First Column And Last Column
        if(col == 0 || col == M-1){
          cout << "* ";
        }
        else {
          cout << "  ";
        }
      }
    }
    cout << endl;
  }
}