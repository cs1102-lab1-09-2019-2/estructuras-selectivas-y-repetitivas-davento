#include <iostream>
using namespace std;

int main() {
    int ticketType;
    float price;
    char Claro;
    cout<<"Tipo de entrada\n";
    cout<<"1. Super Vip    precio 212\n";
    cout<<"2. Vip          precio 170\n";
    cout<<"3. Preferencial precio 136\n";
    cout<<"4. General      precio 59\n";
    cout<<"Seleccione tipo de entrada: ";
    cin>>ticketType;
    do{
    cout<<"\nEs cliente de claro <S, s, N, n>: ";
    cin>>Claro;
    } while(Claro!='S' && Claro!='s' && Claro!='N' && Claro!='n');
    switch(ticketType){
    case 1:
        price=212;
        break;
    case 2:
        price=170;
        break;
    case 3:
        price=136;
        break;
    case 4:
        price=59;
        break;
    }
    if (Claro=='S' || Claro=='s')
        price*=0.8;
    cout<<"\nMonto a pagar "<<price;
    return 0;
}