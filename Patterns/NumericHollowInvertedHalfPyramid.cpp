#include <iostream>
using namespace std;

int main(){
  int n;
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<=n;j++){
            if(j==i+1 || j == n|| i == 0){
                cout<<j << " ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}