#include <iostream>
using namespace std;

int main() {
  int N; //No. Of Rows
  cin >> N;

  for(int i = 0;i < N;i++){
    for(int j = 0; j < N - i; j++){
      cout << " ";
    }
    for(int k = 0; k < i; k++){
      cout << i + k;
    }
    for(int z = i*2;z > i+1;z--){
      cout << z-2;
    }
    cout << endl;
  }
}