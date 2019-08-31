#include <iostream>
using namespace std;

int main() {
    int P, soat, citv, serv;
    do{
    cout<<"Ingrese su número: ";
    cin>>P;
    } while (P<11111111 || P>99999999);
    soat=(P%100000)/10000;
    citv=(P%100000)%10000/1000;
    serv=(((P%10000)%10000)%1000)%100;
    cout<<"\nSOAT: ";
    if (soat%2==0)
        cout<<"Vigente";
    else
        cout<<"Vencido";
    cout<<"\nCITV: ";
    if (citv%2==0)
        cout<<"Vigente";
    else
        cout<<"Vencido";
    cout<<"\nAUTORIZADO: ";
    if (serv%2==0)
        cout<<"Si";
    else
        cout<<"No";
    return 0;
}