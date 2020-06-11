/*
* Proyecto Biblioteca de Juegos Juegos
* Leonardo Alvarado Menéndez
* A01705998
* 12/06/2020
* La clase juegos es en la que tenemos herencia, esta hereda a las clases Halo, Mortal Kombat y FIFA
*
*/
#ifndef JUEGOS_H_INCLUDED
#define JUEGOS_H_INCLUDED

#include <iostream>
using namespace std;

//Declaracion de clase Juegos que es abstracta
class Juegos{

    //Declaro variables de instancia
    protected:
        string nombre;
        string diseniador;
        string requisitos_basicos;

    //Declaro los métodos que va a tener el objeto
    public:
        Juegos();
        Juegos(string, string, string);
        virtual void mostrar_datos()=0;
        string get_nombre();
};
/*
* Un contructor por default
*/
Juegos::Juegos(){
    nombre="Nombre";
    diseniador="Diseniador";
    requisitos_basicos="Requisitos";

}
/*
* Un contructor que se llena
*/
Juegos::Juegos(string new_nom, string new_dis, string new_r_b){
    nombre=new_nom;
    diseniador=new_dis;
    requisitos_basicos=new_r_b;
}
/*
* get_nombre Este metodo esta para que cuando
*
*
*
* @param
* @return nombre
*/
string Juegos::get_nombre(){
    return nombre;
}

//Se declara la clase Halo, que es heredada de Juegos
class Halo:public Juegos{

    // Variables privadas
    private:
        int num_niveles;
        string dificultad;

    //Metodos publicas
    public:
        Halo();
        Halo(string new_nom, string new_dis, string new_r_b, int new_num_niv, string new_dif);
        void mostrar_datos();
};
/*
* Constructor por default
*/
Halo::Halo(){
    nombre="";
    diseniador="";
    requisitos_basicos="";
    num_niveles=0;
    dificultad="";
}
/*
* Constructor para llenar
*/
Halo::Halo(string new_nom, string new_dis, string new_r_b, int new_num_niv, string new_dif){
    nombre=new_nom;
    diseniador=new_dis;
    requisitos_basicos=new_r_b;
    num_niveles=new_num_niv;
    dificultad=new_dif;
}
/*
* mostrar_datos este metodo te imprime los datos del juego
*
*
* @param
* @return
*/
void Halo::mostrar_datos(){
    cout << "Nombre: " << nombre << endl;
    cout << "Diseniador: " << diseniador << endl;
    cout << "Requisitos: " << requisitos_basicos << endl;
    cout << "Numero de niveles: " << num_niveles << endl;
    cout << "Dificultad: " << dificultad << endl << endl;
}

//Se declara la clase FIFA, que es heredada de Juegos
class FIFA:public Juegos{

    // Variables privadas
    private:
        int numero_estadios;
        int numero_equipos;

    //Metodos publicas
    public:
        FIFA();
        FIFA(string new_nom, string new_dis, string new_r_b, int new_num_est, int new_num_eqp);
        void mostrar_datos();
};

/*
* Constructor por default
*/
FIFA::FIFA(){
    nombre="";
    diseniador="";
    requisitos_basicos="";
    numero_estadios=0;
    numero_equipos=0;
}

/*
* Constructor para llenar
*/
FIFA::FIFA(string new_nom, string new_dis, string new_r_b, int new_num_est, int new_num_eqp){
    nombre=new_nom;
    diseniador=new_dis;
    requisitos_basicos=new_r_b;
    numero_estadios=new_num_est;
    numero_equipos=new_num_eqp;
}

/*
* mostrar_datos este metodo te imprime los datos del juego
*
*
* @param
* @return
*/
void FIFA::mostrar_datos(){
    cout << "Nombre del juego: " << nombre << endl;
    cout << "Diseniador: " << diseniador << endl;
    cout << "Requisitos: " << requisitos_basicos << endl;
    cout << "Numero de estadios: " << numero_estadios << endl;
    cout << "Numero de equipos: " << numero_equipos << endl << endl;
}

//Se declara la clase Mortal_Kombat, que es heredada de Juegos
class Mortal_Kombat:public Juegos{

    // Variables privadas
    private:
        int num_personajes;
        int num_fatalities;

    //Metodos publicas
    public:
        Mortal_Kombat();
        Mortal_Kombat(string new_nom, string new_dis, string new_r_b, int new_num_per, int new_num_fat);
        void mostrar_datos();
};

/*
* Constructor por default
*/
Mortal_Kombat::Mortal_Kombat(){
    nombre="";
    diseniador="";
    requisitos_basicos="";
    num_personajes=0;
    num_fatalities=0;
}

/*
* Constructor para llenar
*/
Mortal_Kombat::Mortal_Kombat(string new_nom, string new_dis, string new_r_b, int new_num_per, int new_num_fat){
    nombre=new_nom;
    diseniador=new_dis;
    requisitos_basicos=new_r_b;
    num_personajes=new_num_per;
    num_fatalities=new_num_fat;
}

/*
* mostrar_datos este metodo te imprime los datos del juego
*
*
* @param
* @return
*/
void Mortal_Kombat::mostrar_datos(){
    cout << "Nombre del juego: " << nombre << endl;
    cout << "Diseniador: " << diseniador << endl;
    cout << "Requisitos: " << requisitos_basicos << endl;
    cout << "Numero de personajes: " << num_personajes << endl;
    cout << "Numero de fatalities: " << num_fatalities << endl << endl;
}


#endif // JUEGOS_H_INCLUDED
