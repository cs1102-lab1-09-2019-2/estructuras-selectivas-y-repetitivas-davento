#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"si n= ";
    cin>>n;
    cout<<"\n";
    for (int i=0;i<n;i++){
        if (i==0 || i==n-1){
            for (int j=0; j<n; j++)
                cout<<'*';
            cout<<"\n";
        } else{
            for (int j=0;j<n;j++){
                if(j==0 || j==i || j==n-1)
                    cout<<'*';
                else
                    cout<<" ";
                }
            cout<<"\n";
            }
    }
    return 0;
}