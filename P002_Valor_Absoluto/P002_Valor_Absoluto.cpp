// P002_Valor Absoluto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// P002_Susana_Casillas
// Vamos a sacar el valor absoluto que el usuario nos de 
// Utilizando los metodos de IOStream

#include <iostream>

int main()
{
    int cinco;
    std::cout << "Dame un numero\n";
    std::cin >> cinco;
    if (cinco < 0)
    {
        cinco = cinco * -1;
    }
    std::cout << "tu valor absoluto es\n" << cinco;

