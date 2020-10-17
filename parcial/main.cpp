#include <iostream>
//d debe tener posiciocon fija
using namespace std;
bool verificadordeposicionparadisparar(int a, int b);
int disparodo(int x, int y, int angulo);
int main()
{
    int xdo=0, ydo=0, angulodo=0,vdo=0,xD,yD;
    bool m;
    while (true){
        cout<<"ingrese posicion de disparo Xo"<<endl;cin>>xdo;
        cout<<"ingrese posicion de disparo Yo"<<endl;cin>>ydo;
        cout<<"ingrese angulo de el cañon agresivo"<<endl;cin>>angulodo;
        cout<<"ingrese velocidad inicial del cañon agresivo"<<endl;cin>>vdo;
        cout<<"ingrese posicion de disparo xD"<<endl;cin>>xD;
        cout<<"ingrese posicion de disparo yD"<<endl;cin>>yD;
        m=verificadordeposicionparadisparar(xdo,xD);
        if (m==true){

        }

    }
    return 0;
}
bool verificadordeposicionparadisparar(int a, int b){
    int distancia=20;
    if(b==0.05*distancia){
        return true;
    }
    else{
        return false;
    }
}
int disparodo(int x, int y, int angulo){
    int t=0,posx=0,posy=0,velocidadxO=3, velocidadxD=10;
    posx=x+velocidadxO*t;
    t++
}
