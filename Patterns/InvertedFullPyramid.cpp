#include <iostream>
using namespace std;

int main() {
  int N; //No. Of Rows
  cin >> N;

  for(int i = 0;i < N;i++){
    for(int k = 0; k < i; k++){
      cout << " ";
    }
    for(int j = 0; j < N - i; j++){
      cout << " *";
    }
    cout << endl;
  }
}