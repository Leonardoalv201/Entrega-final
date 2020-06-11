/*
* Proyecto Biblioteca de Juegos main
* Leonardo Alvarado Menéndez
* A01705998
* 12/06/2020
*
* Este es un proyecto demo para la clase TC1030 Programación Orientado a
* Objetos. En este programa creas tu usuario con una contraseña y nombre,
* automaticamente se te crea una biblioteca en la cual vas a poder agregar
* juegos y una vez que agregues estos, puedes ver los que ya adquiriste.
*/
#include <iostream> //para imprimir
#include "juegos.h" // bibliotecas con objetos de mi proyecto.
#include "biblioteca.h"
#include "usuario.h"
using namespace std;

int main()
{
    Juegos *Juegos[6];
    Juegos[0]= new Halo("Halo1", "343", "1RAM", 12, "alta");
    Juegos[1] = new Halo("Halo2", "343", "2RAM", 14, "media");
    Juegos[2] = new FIFA("FIFA 2018", "EA", "4RAM", 145, 204);
    Juegos[3]= new FIFA("FIFA 2019", "EA", "5RAM", 160, 230);
    Juegos[4] = new Mortal_Kombat("Mortal Kombat X", "NetherRealm Studios", "3RAM", 40, 80);
    Juegos[5] = new Mortal_Kombat("Mortal Kombat XL", "NetherRealm Studios", "4RAM", 48, 100);
    int n=0;
    int i=0;
    int m=0;
    int q=0;
    int bandera=0, bandera_2=0, bandera_3=0;
    string nombre, contrasenia, temp;
    Usuario u[4];
    while (n!=3){
        cout << "Pon el numero de lo que quieras hacer" << endl;
        cout << "1-Acceder a mi cuenta" << endl;
        cout << "2-Crear cuenta" << endl;
        cout << "3-Salir" << endl;
        cin >> n;
        system("CLS");
        if (n==1){
            cout << "Llena los espacios" << endl;
            cout << "Nombre: ";cin >> nombre;
            cout << "Contraseña: ";cin >> contrasenia;
            system("CLS");
            for (int r=0;r<i;r++){
                if(u[r].get_nombre()==nombre && u[r].get_contrasenia()==contrasenia){
                    bandera=bandera+1;
                    while (m!=3){
                        cout << "Pon el numero de lo que quieras hacer" << endl;
                        cout << "1-Agregar juego" << endl;
                        cout << "2-Ver mis juegos" << endl;
                        cout << "3-Salir" << endl;
                        cin >> m;
                        system("CLS");
                        if (m==1){
                            while (q!=7){
                                cout << "Pon el numero del juego que quieras agragar" << endl;
                                cout << "1-Halo1" << endl;
                                cout << "2-Halo2" << endl;
                                cout << "3-Fifa 2018" << endl;
                                cout << "4-Fifa 2019" << endl;
                                cout << "5-Mortal Kombat X" << endl;
                                cout << "6-Mortal Kombat XL" << endl;
                                cout << "7-Salir" << endl;
                                cin >> q;
                                system("CLS");
                                if (q==1){
                                    Biblioteca *b=u[r].get_biblioteca();
                                    b->aniadir_juego(Juegos[0]);
                                    cout << "Felicidades, ahora cuentas en tu coleccion con el Halo2" << endl;
                                    cout << "Presiona n y da enter" << endl;
                                    cin >> temp;
                                    system("CLS");
                                }
                                else if (q==2){
                                    Biblioteca *b=u[r].get_biblioteca();
                                    b->aniadir_juego(Juegos[1]);
                                    cout << "Felicidades, ahora cuentas en tu coleccion con el Halo2" << endl;
                                    cout << "Presiona n y da enter" << endl;
                                    cin >> temp;
                                    system("CLS");
                                }
                                else if (q==3){
                                    Biblioteca *b=u[r].get_biblioteca();
                                    b->aniadir_juego(Juegos[2]);
                                    cout << "Felicidades, ahora cuentas en tu coleccion con el FIFA 2018" << endl;
                                    cout << "Presiona n y da enter" << endl;
                                    cin >> temp;
                                    system("CLS");
                                }
                                else if (q==4){
                                    Biblioteca *b=u[r].get_biblioteca();
                                    b->aniadir_juego(Juegos[3]);
                                    cout << "Felicidades, ahora cuentas en tu coleccion con el FIFA 2019" << endl;
                                    cout << "Presiona n y da enter" << endl;
                                    cin >> temp;
                                    system("CLS");
                                }
                                else if (q==5){
                                    Biblioteca *b=u[r].get_biblioteca();
                                    b->aniadir_juego(Juegos[4]);
                                    cout << "Felicidades, ahora cuentas en tu coleccion con el Mortal Lombat X" << endl;
                                    cout << "Presiona n y da enter" << endl;
                                    cin >> temp;
                                    system("CLS");
                                }
                                else if (q==6){
                                    Biblioteca *b=u[r].get_biblioteca();
                                    b->aniadir_juego(Juegos[5]);
                                    cout << "Felicidades, ahora cuentas en tu coleccion con el Mortal Lombat XL" << endl;
                                    cout << "Presiona n y da enter" << endl;
                                    cin >> temp;
                                    system("CLS");
                                }
                                else if (q==7){
                                    q=0;
                                    break;
                                }

                                else if (q<1 || q>7){
                                    cout << "Opcion no disponoble" << endl;
                                    cout << "Presiona n y da enter" << endl;
                                    cin >> temp;
                                    system("CLS");
                                }
                            }
                        }
                        else if (m==2){
                            Biblioteca *b=u[r].get_biblioteca();
                            if (b->get_indice()==0){
                                cout << "No tienes juegos" << endl;
                                cout << "Presiona n y da enter" << endl;
                                cin >> temp;
                                system("CLS");
                            }
                            else{
                                u[r].ver_biblioteca();
                                cout << "Presiona n y da enter" << endl;
                                cin >> temp;
                                system("CLS");
                            }
                        }

                        else if (m==3){
                            m=0;
                            break;
                        }

                        else if (m<1 || m>3){
                            cout << "Opcion no disponible" << endl;
                            cout << "Presiona n y da enter" << endl;
                            cin >> temp;
                            system("CLS");
                        }
                    }
                }
            }
            if (bandera==0){
                    cout << "No tienes cuenta o escribiste mal algun dato, vuelve a intentar" << endl;
                    cout << "Presiona n y da enter" << endl;
                    cin >> temp;
                    system("CLS");
            }
            bandera=0;
        }
        else if (n==2){
            cout << "Llena los espacios" << endl;
            cout << "Nombre: ";cin >> nombre;
            cout << "Contraseña: ";cin >> contrasenia;
            system("CLS");
            for (int r=0;r<i;r++){
                if (u[r].get_nombre()==nombre){
                    cout << "Nombre no disponible" << endl;
                    cout << "Presiona n y da enter" << endl;
                    cin >> temp;
                    system("CLS");
                    bandera_2=bandera_2+1;
                }
            }
            if (bandera_2==0){
                u[i].set_contrasenia(contrasenia);
                u[i].set_nombre(nombre);
                i++;
            }
            bandera_2=0;
        }
        else if (n==3){
            cout << "Gracias por usar mi programa" << endl;
            break;
        }
        else if (n<1 || n>3){
            cout << "Opcion no disponible" << endl;
            cout << "Presiona n y da enter" << endl;
            cin >> temp;
            system("CLS");
        }
    }
    delete Juegos;
    return 0;
}
