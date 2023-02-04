#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  //Upper Half
  for(int row = 0; row < n; row++){
    //Inverted
    for(int col = 0; col < n - row;col++){
      cout << "*";
    }
    //Triangle
    for(int col = 0; col < 2 * row + 1;col++){
      cout << " ";
    }
    //Inverted
    for(int col = 0;col < n- row;col++){
      cout << "*";
    }
    cout << endl;
  }

  //Lower Half
  for(int row = 0; row < n;row++){
    //Half Pyramid
    for(int col = 0;col <= row;col++){
      cout << "*";
    }
    //Spaces
    for(int col = 0; col < 2 * (n-row) - 1;col++){
      cout << " ";
    }
    //Half Pyramid
    for(int col = 0;col <= row;col++){
      cout << "*";
    }
    cout << endl;
  }
}