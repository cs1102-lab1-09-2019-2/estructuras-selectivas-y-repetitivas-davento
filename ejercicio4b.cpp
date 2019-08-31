#include <iostream>
using namespace std;

int main() {
    char seguro;
    int asegurados, monto;
    do{
       cout<<"Tipo seguro: ";
       cin>>seguro;
    }while (seguro!='A' && seguro!='B' && seguro!='C' && seguro!='D');
    do{
    cin>>asegurados;
    } while (asegurados<0);
    cout<<asegurados;
    if (seguro=='A'){
       monto=40;
       if (asegurados>8)
       monto+=7*(asegurados-8);  
    }
    if (seguro=='B'){
       monto=30;
       if (asegurados>6)
       monto+=7*(asegurados-6);
    }
    if (seguro=='C'){
       monto=20;
       if (asegurados>4)
       monto+=3*(asegurados-4);
    }
    if (seguro=='D'){
       monto=10;
       if (asegurados>2)
       monto+=3*(asegurados-2);
    }
    cout<<"\nMonto mensual S/. "<<monto;
    return 0;
}