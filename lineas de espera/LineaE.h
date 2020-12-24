/**
 * @version 1.8.20
 * @date 23/12/2020
 * @author Jocelyn_Hernandez_Javier
 * @brief Desarrollo de la linea de espera 
 */


/**
 *@brief Librerias
 */

#ifndef _LineaE_H
#define _LineaE_H
#define Max 24

#include <stdio.h>

/**
 * @brief mostrar para ver el rango de horas.
 * @param inicio Inicio de rango de horas y final para el final de la misma.
*/
void mostrar(int Inicio,int Final);

/**
 * @brief mostrarP miestra los arreglos de los usuarios. 
*/
void mostrarP(int aux[Max],int Inicio,int Final);

/**
 * @brief Pespera calcula las personas que esperan.
 * @param _capacidadAtencion muestra la capacidad de atencion.
 * @param _personas personas de entrada.
*/
void Pespera(int _capacidadAtencion[Max],int _personas[Max],int _espera[Max],int _Inicio,int _Final);

/**
 * @brief input calcula la entrada de usuarios.

*/
void input(int _personas[Max],int _Inicio,int _Final);

/**
 * @brief output calcula la salida de los usuarios.
*/
void output(int _capacidadAtencion[Max],int _personas[Max],int _espera[Max],int out[Max],int _inicio,int _Final);

/**
 * @brief lineas Imprime la tabla
*/
void marco(int _Inicio,int _Final);

#endif
