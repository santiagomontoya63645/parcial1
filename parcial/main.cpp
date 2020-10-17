#include <iostream>
#include <math.h>
//d debe tener posiciocon fija
using namespace std;
bool verificadordeposicionparadisparar(int a, int b);
int posicionx(int x, int angulo, int tiempo, int velocidad);
float posiciony(int y, int angulo, int tiempo,int velocidad);
int main()
{
    int xdo=0,  angulodo=0,vdo=0,xD,tiempo=0,velocidadxO=3, velocidadxD=10;
    bool m;
    float ydo=0,yD;
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
int posicionx(int x, int angulo,int tiempo, int velocidad){
    int posx=0;
    posx=x+velocidad*cos(angulo)*tiempo;
    return posx;
}
float posiciony(int y, int angulo, int tiempo, int velocidad){
    float posy=0;
    posy=y+(velocidad*sin(angulo)-9.8*tiempo)-9.8/2*tiempo*tiempo;
    return posy;
}
