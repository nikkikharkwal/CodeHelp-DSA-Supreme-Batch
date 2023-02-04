#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  for(int row = 0; row < n;  row++){
    //spaces 
    for(int col = 0; col < n - row;col++){
      cout << " ";
    }
    //stars
    for(int col = 0;col < 2*row+1;col++){
      if(col == 0){
        cout << 1;
      }
      else if(col == 2*row){
        cout << row+1;
      }
      else {
        cout << " ";
      }
    }
    cout << endl;
  }
  for(int col = 0; col <= n;col++){
    cout << col+1 << " ";
  }
  cout << endl;
}