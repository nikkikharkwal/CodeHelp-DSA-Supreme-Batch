#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int count = 1;
  //Upper Half
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < 2*row+1; col++) {
      if(col%2==1){
        cout << "*";
      }
      else{
        cout << count++;
      }
    }
  cout << endl;
  }

  count -= n;
  
  //Lower Half 
  for(int row = 0; row < n;row++){
    //Storing the value of count in x
    int x = count;
    for(int col = 0; col < 2* (n-row)-1;col++){
      if(col%2==1){
        cout << "*";
      }
      else {
        cout << count++;
      }
    }
    count = x - n + row + 1;
    cout << endl;
  }
}
