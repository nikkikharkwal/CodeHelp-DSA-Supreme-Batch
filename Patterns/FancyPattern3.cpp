#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for(int row = 0;row < n;row++){
    //Start
    for(int col = 0; col < n+3-row;col++){
      cout << "*";
    }
    //For Numbers
    for(int col = 0;col <= 2*row+1;col++){
      if(col%2==0){
        cout << "*";
      }
      else {
        cout << row+1;
      }
    }
    //Ending Stars
    for(int col = 0; col < n+3-row;col++){
      cout << "*";
    }
    cout << endl;
  }
}