#include <iostream>
using namespace std;
//Ejercicio on bucle for

int main() {
    //1. Imprimir 5 veces la palabra PUCESE
    //for(int i=1; i<=5; i++)
    int i;
    for(i=0; i<5; i++)
    {
        cout<<endl<<"Hola: " <<(i+1);
        cout<<endl<<"Fin";
    }

    //2. Imprimir la tabla de multiplicar del numero 5
    //cout<<"El valor de la variable i"<<i;
    cout<<endl<<"La tabla del 5";
    for(i=1; i<=10; i++)
    {
        cout<<endl<<"5 x "<<i<<" = "<<(5*i);
    }

    //3. Se ingresa por teclado un entero que representa una tabla de multiplicar
    //Se pide imprimir esta tabla desde el 1 al 12
    int entero;
    cout<<endl<<"Ingresar el entero: "; cin>>entero;
    for(i=1; i<=12; i++)
    {
        cout<<endl<<" X "<<i<<" = "<<(entero * i);
    }

    //4. Calcular la sumatoria de los numeros comprendidos entre 500 y 800.
    int numero, suma;
    for( int i=500; i<=800; i++ )
        suma =suma + i;
    {
        cout<<endl<< "La suma de los numeros (500-800): " <<suma<<endl;
    }

    //Se pide por teclado 2 enteros que representan el principio y el fin
    //de una serie. Se pide realizar la sumatoria de los numeros
    //multilpos de 5 que se encuentran en esta serie.

    int inicio, fin;
    cout<<endl<<"Ingrese el entero inicial de la serie: ";cin>>inicio;
    cout<<endl<<"Ingrese el entero final de la serie: ";cin>>fin;

    suma=0;
    for (int i=inicio; i<=fin; i++)
    {
        if (i%5==0)
            suma=suma+i;
    }
    cout<<endl<<"La sumatoria de la serie es: "<<suma<<endl;

    //6.For anidados (un for dentro de otro for)
    //Imprimmir un rectangulo de '*'
    cout<<"Impresion de un rectangulo";
    for(i=1;i<=5; i++)
    {
        for (int j=1;j<=10;j++)
        {
            cout <<"*";
        }
        cout<<endl;
    }
    //7. Imprimir las 10 primeros tablas de multiplicar
    //Use for anidados
    cout<<"Impresion de las 10 primeras tablas de multiplicar";
    for(int Tabla=1; Tabla<=10; Tabla++)
    {
        for (int i= 1; i<= 10; i++)
        {
            cout<<endl<<Tabla<<" X "<<i<<" = "<<(Tabla*i);
        }
        cout<<endl;
    }

    return 0;
}
