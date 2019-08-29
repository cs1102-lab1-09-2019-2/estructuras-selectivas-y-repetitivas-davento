#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {    
    float s, N, a, sumA=0, sumB=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a;
        sumA+=pow(a,2);
        sumB+=a;
    }
    s=pow((1/N*sumA)-(pow(1/N*sumB,2)),0.5);
    cout<<fixed<<setprecision(2)<<s;
    return 0;
}
