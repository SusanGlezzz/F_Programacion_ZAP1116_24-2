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
    //Suma de 2 numeros en impresion 
    int juan = 0;
    int carlos = 0;
    // Realizar operaciones 
    std::cout << "Dame el precio de juan \n";
    std::cin >> juan;
    std::cout << "Dame el precio de carlos \n";
    std::cin >> carlos;
    std::cout << std::endl;
    std::cout << "El precio de ambos es: " << juan + carlos; 
    std::cout << std::endl;
    //Resta de 2 numeros guardando el resultado
    int silla = 0; 
    int cama = 0;
    int resultado_resta = 0;
    //Solicitar los datos
    std::cout << "Dame el valor de la silla \n";
    std::cin >> silla;
    std::cout << "Dame el valor de la cama \n";
    std::cin >> cama;
    std::cout << std::endl;
    resultado_resta = silla - cama;
    std::cout << "El resultado de la resta es: " << resultado_resta; 
    std::cout << std::endl;
    //Multilicacion de 2 numeros guardar el resulatado
    int panes = 0;
    int salchichas = 0;
    int resultado_multiplicacion = 0;
    //Solicitar los datos
    std::cout << "Dame el valor de los panes \n";
    std::cin >> panes;
    std::cout << " Dame el valor de las salchichas \n";
    std::cin >> salchichas;
    std::cout << std::endl;
    resultado_multiplicacion = panes * salchichas;
    std::cout << " El resultado de la multilicacion es: " << resultado_multiplicacion;
    std::cout << std::endl; 
    //Division de 2 numeros guardar el resultado
    int colegiatura = 0;
    int padre_hija = 0;
    int resultado_division = 0;
    std::cout << "Dame el valor de la colegiatura \n";
    std::cin >> colegiatura;
    std::cout << "Dame el valor de padre_hija \n";
    std::cin >> padre_hija;
    std::cout << std::endl;
    resultado_division = colegiatura / padre_hija;
    std::cout << "El resultado de la division es: " << resultado_division;
    std::cout << std::endl;



  

    





}


//Realizar las siguientes acciones para los siguientes tipos de datos
//Declarar variles       
//Imprimir valor inicializado   
//Solicitamos al usuario
//Recibimos la variable del usuario
//Volver a imprimir el dato modificado