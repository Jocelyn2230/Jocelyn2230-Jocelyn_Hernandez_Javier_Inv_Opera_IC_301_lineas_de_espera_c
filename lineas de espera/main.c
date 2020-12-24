
/**
 *@brief Librerias
 */
 
#include <stdio.h>
#include <conio.h>
#include "LineaE.h"


int main(){
    int Inicio,Final,atendidos,i=0,des=0;
    int personas[Max],espera[Max];
    int cajas[Max],capacidadAtencion[Max];
    int out[Max];

    do{
    //@param ENTRADA DE DATOS
    printf("\n\t\t[GESTION DE COLAS DE ESPERA]\n");
      printf("\n\t");
    printf("INTRODUZCAL LOS SIGUIENTES DATOS DE LA TABLA\n\t");
    printf("Hora de inicio:\n\t");
    scanf("%i",&Inicio);
    printf("\n\t");
    printf("Hora final:\n\t");
    scanf("%i",&Final);
    printf("\n capacidad de salida Por caja:\n\t");
    scanf("%i",&atendidos);

    for(i=Inicio;i<Final;i++){
        printf("\nhoras %i a %i",i,(i+1));
        printf("\nCola de espera (clientes):");
        scanf("%i",&personas[i]);
        printf("\nNo. de cajas abiertas:");
        scanf("%i",&cajas[i]);
        //@param calcular velocidad de salida
        capacidadAtencion[i]=cajas[i]*atendidos;
    }

    //@param mostrar los datos de la tabla
    printf("\n\t\t\tAnalisis del sistema\n");
    printf("\n");
    //
    marco(Inicio,Final);
    printf("\nHoras\t\t\t");
    mostrar(Inicio,Final);
    
    marco(Inicio,Final);
    printf("\nLegada de clientes\t");
    mostrarP(personas,Inicio,Final);
   
    marco(Inicio,Final);
    printf("\n Mo. de cajas abiertas\t");
    mostrarP(cajas,Inicio,Final);
  
    marco(Inicio,Final);
    printf("\nCapacidad salidas\t");
    mostrarP(capacidadAtencion,Inicio,Final);
  
    marco(Inicio,Final);
    printf("\nSalidas de cliente\t");
    Pespera(capacidadAtencion,personas,espera,Inicio,Final);
    output(capacidadAtencion,personas,espera,out,Inicio,Final);
  
    marco(Inicio,Final);
    printf("\nCola de espera\t\t");
    mostrarP(espera,Inicio,Final);
  
    marco(Inicio,Final);
    printf("\nInput\t\t\t");
    input(personas,Inicio,Final);
  
    marco(Inicio,Final);
    printf("\nOutput\t\t\t");
    mostrarP(out,Inicio,Final);
  
    marco(Inicio,Final);

    printf("\nPara introdicir mas datos presione  1=si, no=0\n");
    scanf("%i",&des);
    }while(des!=0);
    
//@return para retornar
    return 0; 
}
