// P003_Mayor _que_Menor_que.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// P002_Susana_Casillas
// Vamos a sacar el valor absoluto que el usuario nos de 
// Utilizando los metodos de IOStream

#include <iostream>

int main()
{
    int Dedo;
    std::cout << "dame una parte del cuerpo\n";
    std::cin >> Dedo;
    int Mano;
    std::cout << "dame otra parte del cuerpo\n";
    std::cin >> Mano;
    if (Dedo > Mano)
    {
        std::cout << "El Dedo es mayor que la Mano\n";
    }
    if (Mano > Dedo)
    {
        std::cout << "La Mano es mayor que el Dedo\n";
    }
}

