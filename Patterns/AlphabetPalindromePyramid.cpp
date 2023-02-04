#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  char ch = 65;

  for(int row = 0; row < n; row++){
    for(int col = 0; col < row +1;col++){
        cout << ch << " ";
        ch++;
    }
    ch--;
    for(int col = 0; col < row;col++){
      ch--;
      cout << ch << " ";
    }
    
    ch = 65;
    cout << endl;
  }
}