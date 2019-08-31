#include <iostream>
using namespace std;

int score(int p, int t){
    int x, y;
    x=3*p/10;
    y=p-((p/250)*t);
    if (x>y)
        return x;
    if (y>x)
        return y;
}

int main() {
    int a, b, c, d, p, t, pfA, pfJ;
    cout<<"Alessia resolvió el problema con la siguiente cantidad de puntos: ";
    cin>>a;
    cout<<"\nMinutos que demoró en presentarlo: ";
    cin>>c;
    cout<<"\nJasmin resolvió el problema con la siguiente cantidad de puntos: ";
    cin>>b;
    cout<<"\nMinutos que demoró en presentarlo: ";
    cin>>d;
    pfA=score(a,c);
    pfJ=score(b,d);
    if (pfA>pfJ)
        cout<<"\nAlessia";
    if (pfJ>pfA)
        cout<<"\nJasmin";
    if (pfJ==pfA)
        cout<<"\nEmpate";
    return 0;
}