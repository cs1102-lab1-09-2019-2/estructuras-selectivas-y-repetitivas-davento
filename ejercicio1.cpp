#include <iostream>
#include <string>
using namespace std;

float promGrade(int n){
    float PC1,PC2, PC3, PC4, P, E1, E2, prom;
        cout<<"Alumno numero "<<n+1<<"\n";
        do {
            cout<<"Práctica 1: ";
            cin>>PC1;
        }while(PC1<0 || PC1>20);
        do {
            cout<<"Práctica 2: ";
            cin>>PC2;
        }while(PC2<0 || PC2>20);
        do {
            cout<<"Práctica 3: ";
            cin>>PC3;
        }while(PC3<0 || PC3>20);
        do {
            cout<<"Práctica 4: ";
            cin>>PC4;
        }while(PC4<0 || PC4>20);
        do {
            cout<<"Proyecto: ";
            cin>>P;
        }while(P<0 || P>20);
    do {
        cout<<"Examen 1: ";
        cin>>E1;
    }while(E1<0 || E1>20);
    do {
        cout<<"Examen 2: ";
        cin>>E2;
    }while(E2<0 || E2>20);
    prom=PC1+PC2+PC3+PC4+P+E1+E2;
    cout<<"Su promedio es "<<prom<<"\n";
    return prom;
}

string Event(float prom){
    string event1="Ud. asistirá al ACM ICPC International Collegiate Programming Contest\n";
    string event2="Ud. asistirá a Imagine Cup\n";
    string event3="Ud. asistirá al Hackaton de Miraflores\n";
    string event4="Ud. necesita mejorar\n";
    if (prom >=18 && prom<=20)
        return event1;
    if (prom>=15 && prom<18)
        return event2;
    if (prom>=12 && prom<15)
        return event3;
    else
        return event4;
}

int main() {
    int students;
    do{
        cout<<"Número de estudiantes: ";
        cin>>students;
    }while(students<= 3 || students > 30);
    for (int i=0; i<students;i++)
        cout<<Event(promGrade(i));
    return 0;
}
