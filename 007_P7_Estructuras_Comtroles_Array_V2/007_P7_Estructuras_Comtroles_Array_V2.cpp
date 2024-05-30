// 007_P7_Estructuras_Comtroles_Array_V2.cpp : 
//Susana_Casillas

#include <iostream>

int main()
{
	int edades[3][2] = { {1,2},{9,8},{14,21} };
	//Obtenemos el nuemro de filas dividiendo los indices de 
	//la variable princial y la variable de las columna
	int filas = (sizeof(edades) / sizeof(edades[0]));
	std::cout << filas << std::endl;
	std::cout << "El valor de sizeof edades es: " <<
		sizeof(edades) << std::endl;
	std::cout << "El valor de sizeof edades [0] es: " <<
		sizeof(edades[0]) << std::endl;
	//Obteniendo el numero de colimnas dividiendo los indices de 
	//la variable columnas y la variable de las filas
	int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
	std::cout << "El valor de sizeof edades[0][0] es: " <<
		sizeof(edades[0][0]) << std::endl;
	std::cout << columnas << std::endl;




