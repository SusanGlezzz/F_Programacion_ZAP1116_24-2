// 002_P3_Variables.cpp : 
// Susana Casillas
// En esta práctica aprenderemos la sintaxys para comunicarnos con el usuario
// Solicitar datos en diferentes tipos de variables y mostrarlas


#include <iostream>
#include <locale>

int main()
{ //Funcion para tener idioma español soportado
    setlocale(LC_ALL, "es_MX.UTF-8");
    //Tipo de dato + nombre + declaración de inicialización
    bool bandera = true;
    //Imprimimos el valor de la bandera
    std::cout << "El valor de la variable booleana llamada bandera es: " << bandera << std::endl;

    int edad = 0;
    std::cout << "El valor de la variable entera llamada edad es: " << edad << std::endl;
    std::cout << "¿Cuál es tu edad? \n";
    std::cin >> edad;
    std::cout << std::endl;
    std::cout << "Entonces tienes: " << edad << " años \n";
    std::cout << std::endl;


    float peso = 0;
    std::cout << "El valor de la variable flotante llamada peso es: " << peso << std::endl;
    std::cout << "¿Cual es tu peso? \n";
    std::cin >> peso;
    std::cout << std::endl;
    std::cout << "Entonces pesas: " << peso << " kilos \n";
    std::cout << std::endl;

    char 


}