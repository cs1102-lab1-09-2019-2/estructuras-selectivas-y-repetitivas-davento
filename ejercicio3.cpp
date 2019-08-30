#include <iostream>
using namespace std;

int main() {
    int n, max=0;
    cout<<"n: \n";
    cin>>n;
    for (int i=0; i<n; i++){
        int a;
        cin>>a;
        if (a>max)
            max=a;
    }
    cout<<"El valor máximo es "<<max;
    return 0;
}
