
/** 
 * @version 1.8.20
 * @date 23/12/2020
 * @author Jocelyn_Hernandez_Javier
 * @brief Colocar los metodo para mostrar 
 *
 
 /**
 *@brief Librerias
 */

#include <stdio.h>
#include <conio.h>
#include "LineaE.h"

//@param Metodo para mostrar 
void mostrar(int _Inicio,int _Final){

    for(int i=_Inicio;i<_Final;i++){
    printf("%i a %i\t\t",i,(i+1));
    }
    printf("\n");
}
//@param Metodo mostrar 
void mostrarP(int aux[Max],int _Inicio,int _Final){

for (int i =_Inicio; i < _Final; i++)
{
    printf("%i\t\t",aux[i]);
}
printf("\n");
}
//@param Metodo personas en espera
void Pespera(int _capacidadAtencion[Max],int _personas[Max],int _espera[Max],int _Inicio,int _Final){
    int i=0;
    _espera[_Inicio-1]=0;
    for(i=_Inicio;i<_Final;i++){
        _espera[i]=_personas[i]-_capacidadAtencion[i]+_espera[i-1];
        if(_espera[i]<0){
        _espera[i]=0;
        }
    }
}
//@param Metodo datos de entrada
void input(int _personas[Max],int _Inicio,int _Final){
    int i=0,co=0;
    for(i=_Inicio;i<_Final;i++){
        co+=_personas[i];
        printf("%i\t\t",co);
    }
    printf("\n");
}
//@param Metodo para la salida de datos
void output(int _capacidadAtencion[Max],int _personas[Max],int _espera[Max],int out[Max],int _Inicio,int _Final){
    int i=0,output=0;
    out[_Inicio-1]=0;
    for(i=_Inicio;i<_Final;i++){
        if(_espera[i]==0){
            output=_personas[i];
            printf("%i\t\t",output);
        } else{
            output=_capacidadAtencion[i];
            printf("%i\t\t",output);
        }
        out[i]=output+out[i-1];
    }
    printf("\n");
}
//@param Damos una mejor vista para el acomodado de los datos 
void marco(int _Inicio,int _Final){
    for(int i=_Inicio;i<(_Final*2);i++){
        printf("....");
        if(i==(_Inicio+2)-5){
            printf(".");
        }
        if (i==(_Final*2)-1)
        {
            printf("|");
        }
         if (i==(_Final*2)-6)
        {
            printf("|");
        }
    }
    printf("\n");
}
