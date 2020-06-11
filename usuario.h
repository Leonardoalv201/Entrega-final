/*
* Proyecto Biblioteca de Juegos Usuario
* Leonardo Alvarado Menéndez
* A01705998
* 12/06/2020
* Esta clase es en la que se crea el usuario, a travez de este puede
* ver los juegos que tiene, y agregar más a su coleccion
*
*/
#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED

#include <iostream>
#include "biblioteca.h" //biblioteca con mis objetos a usar
using namespace std;

class Usuario{

    //Declaro las variables privadas de instancia
    private:
        string nombre;
        string contrasenia;
        Biblioteca b;

    //Declaro los metodos publicos
    public:
        Usuario();
        Usuario(string, string);
        void crear_biblioteca(Biblioteca );
        Biblioteca* get_biblioteca();
        void ver_biblioteca();
        string get_nombre();
        string get_contrasenia();
        void set_nombre(string);
        void set_contrasenia(string);
};
/*
*Constructor default
*/
Usuario::Usuario(){
    nombre="";
    contrasenia="";
}
/*
*Constructor para llenar
*/
Usuario::Usuario(string new_nombre, string new_contrasenia){
    nombre=new_nombre;
    contrasenia=new_contrasenia;
}
/*
* ver_biblioteca te muestra las caracteristicas de tus juegos
* usando un metodo de la clase Juegos
*
*
* @Param
* @Return
*/
void Usuario::ver_biblioteca(){
    b.mostrar_juego();
}
/*
* get_biblioteca te devuelve la biblioteca del usuario
*
*
* @Param
* @Return Biblioteca regresa la biblioyteca que se crea al crear el usuario
*/
Biblioteca* Usuario::get_biblioteca(){
    return &b;
}
/*
* get_nombre devuelve el nombre para que no se repitan al crear mas usuarios y al
* acceder a tu cuenta
*
*
* @param
* @return string nombre del usuario
*/
string Usuario::get_nombre(){
    return nombre;
}
/*
* get_contresenia devuelve la contraseña para poder acceder a tu cuenta
*
*
* @param
* @return string contrasenia del usuario
*/
string Usuario::get_contrasenia(){
    return contrasenia;
}
/*
* set_contrsenia es para al crear un ususario darle una contraseña
*
*
* @param new_contrasenia
* @return
*/
void Usuario::set_contrasenia(string new_contrasenia){
    contrasenia=new_contrasenia;
}
/*
* set_nombre es para al crear un ususario darle un nombre
*
*
* @param new_nombre
* @return
*/
void Usuario::set_nombre(string new_nombre){
    nombre=new_nombre;
}

#endif // USUARIO_H_INCLUDED
