// 000_P1_Hablar_Usuario_.cpp : 
// Susana Casillas
// Hablaremos con el usuario 
// Utilizando los metodos del ISOtream

//Librerias
#include <iostream>
//Libreria para incluir diferentes idiomas
#include <locale>

int main()
{
    //Funcion para tener idioma español soportado
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "ó    ñ   \nSujeto Delta\n" <<
        "otras cosas" << std::endl;
    //Sintaxys para hablar con el usuario
    std::cout << "Todo lo que yo";
    std::cout << "escriba en las comillas" <<
        "aparecra en pantalla" << std::endl;
    // << Concatenara el texto
    std::cout << "" <<
        "    _____                                      _____" <<
        "   , 888888b.                                 , 888888b." <<
        ".d888888888b.                                d888888888b" <<
        " _.. - '.`*'_, 88888b                      _.. - '.`*'_, 88888b" <<
        ", '..-..`''ad88888888b.                    ,'.. - ..`''ad88888888b." <<
        "   ``-. `*Y888888b.                           ``-. `*Y888888b." <<
        "  \   `Y888888b.                             \     `Y888888b." <<
        "   :     Y8888888b.                            :      Y8888888b." <<
        " :      Y88888888b.                          :       Y88888888b." <<
        " | _, 8ad88888888.                           | _, 8ad88888888." <<
        "  :.d88888888888888b.                         : .d88888888888888b." <<
        " \d888888888888888888                        \d888888888888888888" <<
        "  8888; '''`88888888888                       8888;ss'`88888888888" <<
        " 888'     Y8888888888                       888'N""N   Y8888888888" <<
        " `Y8      :8888888888                       `Y8 N  ''  :8888888888" <<
        " | `        '8888888888                      `N      '8888888888" <<
        " |       8888888888                           N       8888888888''<" <<
        " |      8888888888                            N       8888888888" <<
        " | , 888888888P                             | N,      888888888P" <<
        "   :; 888888888'                        :  N    ;888888888'" <<
        " \      d88888888'                         :  N    ;888888888'" <<
        " _.>, 888888P'                            \ N    d88888888'" <<
        "  <, --''`.._>8888(_.                        >N    888888P'  " <<
        " `>__...--' `''` SSt                       <,--'N`.._>8888(" <<
        "  `>__N..--' `''` SSt      " <<
        " N";

}


