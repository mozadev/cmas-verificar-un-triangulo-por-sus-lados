/*
Escribir un programa en C++ que reciba como datos tres números enteros y que verifique
si constituyen los lados de un triángulo. En caso afirmativo debe de mostrar el siguiente
mensaje: “SI ES UN TRIANGULO”, y en caso contrario “NO ES UN TRIANGULO”.
Para que formen un triángulo se debe de cumplir lo siguiente: Cada lado debe ser menor a
la suma y mayor a la diferencia de los otros dos lados.
2
Ejemplos:
Ingrese los lados de un triángulo (A B C): 3 4 5
SI ES UN TRIANGULO
Ingrese los lados de un triángulo (A B C): 1 2 8
NO ES UN TRIANGULO

*/


#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<math.h>

using namespace std;


	float main()
	{
		float A;
		float B;
		float C;

		cout << "Ingrese A: "; cin >> A;
		cout << "Ingrese B: "; cin >> B;
		cout << "Ingrese C: "; cin >> C;

		if (A < 0 || B<0 ||C<0)

			cout << "error al ingresar peso el lado";

		else
			if ((A<B+C && A>B-C)|| (B<A + C && B>A - C) ||
				(C<A + B && C>A - B) )
				cout << "Si es un triangulo: ";
			else
				cout << "no es un triangulo: " ;
		_getch();
	}












