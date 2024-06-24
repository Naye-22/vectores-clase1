/*
Fecha:24/6/2024
Autor: Nayeñi Cruz
Tema: Vactores
*/
#include<iostream>
using namespace std;

int main(){
    //declarar un vector
    int edades[20]={17, 16, 20, 21, 18, 19, 15, 22, 16, 18, 19};
    cout<<endl<<"elementos de la posicion 0 "<<edades[0];
    cout<<endl<<"elementos de la posicion 5 "<<edades[5];
    cout<<endl<<"elementos de la posicion 4*2-2 "<<edades[4*2-2];

    //cambiando los elementos del vector
    edades[0] = 17*2;
    edades[10] = 23;
    cout<<endl<<"elementos de la posicion 0 "<<edades[0];
    cout<<endl<<"elementos de la posicion 10 "<<edades[10];

    //lectura por teclado de los elementos de un vector
    const int max = 5;
    double temperaturas [max];
    cout<<endl<<"Lectura por teclado";
        for (int k=0; k<max; k++)
            {
              cout<<endl<<"Tngresa la temperaruta #"<< k + 1 <<" : ";
              cin>>temperaturas[k];
             }

    //Impresion por pantallade los elementos del vector 
    cout<<endl<<"las temperaturas ingresadas son: ";
    for (int k=0;k<max; k++ )
    {
            cout<<temperaturas[k]<<" ";
    }

    //declare un vector de 7 nombres de ciudades y luego inprima todo el p*to vector

    string ciudades[7] = {"Esmeraldas", "Manabí", "Guayaquil", "Cuenca", "Portoviejo", "Quito", "Santa Elena"};
    cout<<endl<<"Ciudades de Ecuador: ";
    for(int k = 0; k<7; k++)
    {
        cout<<endl<<ciudades[k];
    }


    return 0;
}



