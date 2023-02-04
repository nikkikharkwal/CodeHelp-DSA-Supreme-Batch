#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  //Uper Half 
  for(int row = 0; row < n;row++){
    //For Spaces
    for(int col = 0; col < n - row; col++){
      cout << " ";
    }

    //For Stars
    for(int col = 0; col <= 2 * row + 1;col++){
      if(col == 0 || col == 2*row){
        cout << "*";
      }
      else {
        cout << " ";
      }
    }

    cout << endl;
  }

  //Lower Half

  for(int row = 0;row < n;row++){
    //For Spaces
    for(int col = 0; col <= row;col++){
      cout << " ";
    }

    //For Stars
    for(int col = 0; col <= 2 * (n - row);col++){
      if(col == 0 || col == 2*(n-row - 1)){
        cout << "*";
      }
      else {
        cout << " ";
      }
    }
    cout << endl;
  }
}