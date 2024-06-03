// 009_P9_Punteros.cpp : 
// Susana Casillas
// Sintaxys de punteros

#include <iostream>
#include <locale>
#include <stdlib.h>
#include <cstdlib>
#include <windows.h>

int main()
{
  //Estructuras de control
    system("pause");
    system("cls")
        Sleep(100);

    //Punteros
    int variable = 0;
    int* apuntador_variable = 0;
    &variable;
    //Ampersand = & nos da direccion de memoria
    std::cout << "valor de variable: " << variable << std::endl;
    //Modificamos el valor el valor del puntero 
    *apuntador_variable = 20;
    std::cout << "valor del puntero: " << apuntador_variable << std::endl;
    std::cout << "valor de variable: " << variable << std::endl;
    std::cout << "direccion de variable: "
    
}

