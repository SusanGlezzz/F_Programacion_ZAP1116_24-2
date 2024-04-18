// 001_P2_Hola_Mundo.cpp :
// Susana Casillas
// En esta práctica aprenderemos la sintaxys para comunicarnos con el usuario
// Solicitar datos en diferentes tipos de variables y mostrarlas


#include <iostream>
#include <string>
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

    char emojis = '0';
    std::cout << "El valor de la variable caracteres llamda emojis es " << emojis << std::endl;
    std::cout << "¿Cuál es tu emoji? \n";
    std::cin >> emojis;
    std::cout << std::endl;
    std::cout << "Entonces tu emoji es: " << emojis << "  \n";
    std::cout << std::endl;

    char nombre[6];
    std::cout << "El valor de la variable caracteres llamda nombre es " << nombre << std::endl;
    std::cout << "¿Cuál es tu nombre? \n";
    std::cin >> nombre;
    std::cout << std::endl;
    std::cout << "Entonces tu nombre es: " << nombre << "  \n";
    std::cout << std::endl;

    double numero_largo = 0;
    std::cout << "El valor de la variable caracteres llamda numero_largo " << numero_largo << std::endl;
    std::cout << "¿Cuál es tu numero_largo? \n";
    std::cin >> numero_largo;
    std::cout << std::endl;
    std::cout << "Entonces tu numero_largo es: " << numero_largo;
    std::cout << std::endl;

    std::string titulo_libro;
    std::cout << "¿Cual es el titulo de tu libro fav? \n";
    std::cin.ignore();
    std::getline(std::cin, titulo_libro); 
    std::cout << "Entonces tu libro fav es: " << titulo_libro << ".\n"; 
    std::cout << std::endl;






}


//Realizar las siguientes acciones para los siguientes tipos de datos
//Declarar variles       
//Imprimir valor inicializado   
//Solicitamos al usuario
//Recibimos la variable del usuario
//Volver a imprimir el dato modificado