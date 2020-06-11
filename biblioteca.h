/*
* Proyecto Biblioteca de Juegos Biblioteca
* Leonardo Alvarado Menéndez
* A01705998
* 12/06/2020
* Esta clase es en la que se crea la Biblioteca en la que guardaremos nuestros juegos
*
*/
#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED

#include <iostream>
#include "juegos.h"
using namespace std;

class Biblioteca{

    //Declaro las variables privadas
    private:
        Juegos *catalogo_juegos[10]; //se define como apuntador para usar polimorfismo
        int indice_catalogo;

    //Declaro los metodos
    public:
        Biblioteca();
        Biblioteca(Juegos *new_catalogo_juegos[10]);
        void aniadir_juego(Juegos *new_catalogo_juegos);
        void mostrar_juego();
        int get_indice();
};
/*
* Creo un contructor por default
*/
Biblioteca::Biblioteca(){
    indice_catalogo=0;
}
/*
* El contructor para llenar
*/
Biblioteca::Biblioteca(Juegos *new_catalogo_juegos[10]){
    for (int i=0;i<10;i++){
        if (new_catalogo_juegos[i]->get_nombre()==""){//El get nombre es por si agrego solo 5 juegos el for seguiria hasta el 10 pero si el juego 6 ya no tiene nombre, entonces el if hace que se rompa el for
            indice_catalogo=i-1;
            break;
        }
        catalogo_juegos[i]=new_catalogo_juegos[i];
    }
}
/*
* aniadir_juegos En este metodo, el usuario al agregar un juego y este se guarda en la biblioteca
*
*
* @param new_catalogo_juegos
* @return
*/
void Biblioteca::aniadir_juego(Juegos *new_catalogo_juegos){
    catalogo_juegos[indice_catalogo]=new_catalogo_juegos;
    indice_catalogo++;
}
/*
* mostrar_juego con este metodo muestras las caracteristicas de los juegos usando polimorfismo
*
*
* @param
* @return
*/
void Biblioteca::mostrar_juego(){
    for (int i=0;i<indice_catalogo;i++){
        catalogo_juegos[i]->mostrar_datos();
        }
}
/*
* get_indice este metodo sirve para que al ver tus juegos en el main, si el indice es igual a
* 0 te marque que no tienes juegos en tu biblioteca
*
*
* @param
* @return int indice_catalogo
*/
int Biblioteca::get_indice(){
    return indice_catalogo;
}

#endif // BIBLIOTECA_H_INCLUDED
