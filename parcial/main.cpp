#include <iostream>
#include <math.h>
//ingreso datos iniciales para posiciones angulos y  velocidades ppara cada cañon junto con la altura fija del cañon defensivo,
//teniendo en cuenta los limites para que no ocurra el caso dew que el cañon ofensivo lance la bala y al milisegundo explote  porque tenia el cañon al lado
//despues verificar que el cañon defensivo no este en el radio de explosion
//deboo aseguirarme de quee ambos cañones no sewan destruidos, debo aumentar el tiempo para que las balas no queden flotando
//PARA QQUE ESTYO NO OCURRA PONDRE EL LIMITE DE LA POSICION DEL CAÑO N DEFENSIVO MAXIMO EN 10 EN X Y LA MINIMA DEL CAÑON EN 30 osea una distancia minima de 20
// para la defensa considerando el tiempo de respuestapara asegurar la defensa tendra una velocidad mayor a la ofensiva
// debo estar siempre actualizando posiciones para nuevos disparos
using namespace std;
bool boom(float a, float b);
float posicionx(float x, int angulo, float tiempo, float velocidad);
float posiciony(float y, int angulo, float tiempo,float velocidad);
int main()
{
    float xdo=0,auxxD,auxyD,  vdo=0,xD,tiempo=0,velocidadxO=3, velocidadxD=10,auxdo,auxydo;
    bool m;
    float t=2.5;
    float ydo=0,yD;
    float distancia=0;
    int f=0,anguloD,angulodo=0,cont=0;
    while (true){
        cout<<"ingrese posicion de disparo Xo menor a 10"<<endl;cin>>xdo;
        cout<<"ingrese posicion de disparo Yo"<<endl;cin>>ydo;
        auxdo=xdo;
        auxydo=ydo;
        cout<<"ingrese angulo de el cañon agresivo"<<endl;cin>>angulodo;
       // cout<<"ingrese velocidad inicial del cañon agresivo"<<endl;cin>>vdo;
        cout<<"ingrese posicion de disparo xD mayor a 20"<<endl;cin>>xD;
        cout<<"ingrese posicion de disparo yD"<<endl;cin>>yD;
        cout<<"ingrese angulo de el cañon agresivo"<<endl;cin>>anguloD;
        auxxD=xD;
        auxyD=yD;
        f=0;

        while(f==0){
            m=boom(xdo,xD);
            xdo=posicionx(xdo,angulodo,tiempo,velocidadxO);
            ydo=posiciony(ydo,angulodo,tiempo,velocidadxO);
            tiempo++;
            distancia=xD-xdo;
            m=boom(xdo,xD);
           // if (tiempo>=2){
             //   m=boom(xdo,xD);
               // xD=posicionx(xD,anguloD,t,velocidadxD);
                //yD=posiciony(yD,anguloD,t,velocidadxD);
                //t=t+1;
            //}
        if (m==true){
            cout<<"boom"<<endl;
            f=1;


        }
        else{
            cout<<"dios esta aqui esta aqui tanccerca como el aire que respirooooo"<<endl;
            cont++;
        }
        if (cont>15){
            cout<<"esa bala nunca le dara"<<endl;
            f=1;
        }
     }
    }
    return 0;
}
bool boom(float a, float b){

    if(a>=0.05*b){
        return true;
    }
    else{
        return false;
    }
}
float posicionx(float x, int angulo,float tiempo, float velocidad){
    float posx=0;
    posx=x+velocidad*cos(angulo)*tiempo;
    return posx;
}
float posiciony(float y, int angulo, float tiempo, float velocidad){
    float posy=0;
    posy=y+(velocidad*sin(angulo)-9.8*tiempo)-9.8/2*tiempo*tiempo;
    return posy;
}
