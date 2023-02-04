#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for(int row = 0; row < n;row++){
    int end = row-1;
    for(int col = 0; col < 2*row+1;col++){
      if(col == 0 || col == 2*row){
        cout << "* ";
      }
      else if(row >= col) {
        cout << col << " ";
        }
      else {
        cout << end-- << " ";
      }

    }
    cout << endl;
  }

  //Lower Half 
  for(int row = n-1; row >= 0;row--){
    int end =  row - 2;
    for(int col = 0; col < 2*row-1;col++){
      if(col == 0 || col == 2*row-2){
        cout << "* ";
      }
      else if(row > col) {
        cout << col << " ";
        }
      else {
        cout << end-- << " ";
      }
    }
    cout << endl;
  }
}

