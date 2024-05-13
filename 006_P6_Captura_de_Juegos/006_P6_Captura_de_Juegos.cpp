// 006_P6_Captura_de_Juegos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Susana_Casillas
// En este código aprenderemos lo que son los arreglos.

#include <iostream>
#include<string>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    /*
    //El arreglo es una caja de cajas del mismo tipo.
    //Tipo de variable, Nombre, [# de elementos]
    int Soldado[50];
    Soldado[0] = 10;
    Soldado[1] = 20;

    std::cout << "Soldado 0:" << Soldado[0] << std::endl;
    std::cout << "Soldado 1:" << Soldado[1] << std::endl;
    //Como guardarias 5 videojuegos que tengan
    //Titulo, Año y Autor?
    std::string titulo1;
    std::string titulo2;
    std::string titulo3;
    std::string titulo4;
    std::string titulo5;
 */


 //Declaración de variables
    std::string Titulo[5] = { "Hola","Como","Estas","Tu","jeje" };
    int Anio[5];
    std::string Autor[5];

    //Modulo de solicitud de información.
    std::cout << "Registra aquí tu biblioteca de juegos:\n";
    for (int i = 0; i < 5; i++)
    {
        //Van a tener un error a la hora de recibir un dato
        //Hacer la exclusión de ignore donde sea necesario.
        std::cout << "Cuentame cual es el titulo de tu juego #" << i << std::endl;
        getline(std::cin, Titulo[i]);
        std::cout << "En que año fue publicado el titulo " << Titulo[i] << std::endl;
        std::cin >> Anio[i];
        std::cout << "Quien fue el culpable de tan sublime asaña? \n";
        getline(std::cin, Autor[i]);
    }

    //Modulo de muestreo de la información
    for (int j = 0; j < 5; j++)
    {
        //Se imprime la información de los videojuegos
    }
}