/*
Fecha:24/6/2024
Autor: Nayeli Cruz
Tema: vectores y Funciones
*/
#include<iostream>
using namespace std;
//funcion que lee por tecladolos pesos de las personas
void LeerPesos(double pesos[], int total)
{
    cout << endl << "Ingresa los pesos de la personas" << endl;
    for (int k = 0; k < total; k++)
    {
        cout << "Ingresa el peso de la persona #" << k + 1 << " : ";
    }
}
//funcion que improma por pantalla los pesos de las personas
void ImprimirPesos(double pesos [], int total)
{
    cout<<endl<<"Los pesos ingresados son:" ;
     for (int k=0; k<total; k++)
            {
              cout<<endl<<"Tngresa los pesos #"<< k + 1 <<" : ";
              cin>>pesos[k];
             }
}
//funcion que calcula la sumatoria de los pesos de las personas
double SumatoriaPesos(double peso[], int total)
{
    double suma = 0;
    for(int k = 0; k<total; k++)
    {
        suma += peso[k];

        return suma;
    }
}
//funcion que calcula el promesio de los pesos de las personas
double PromedioPesos( double peso [], int total)
{
    return SumatoriaPesos(peso, total)/total;
}
int main()
{
        //declare vector de pero de personas
    const int max = 10;
    double pesos [max];
    LeerPesos (pesos, max);
    ImprimirPesos(pesos, max);
    double suma = SumatoriaPesos(pesos, max);
    double prom = PromedioPesos(pesos, max);
    cout<<endl<<"la sumatoria del peso de las personas es: "<< suma;
    cout<<endl<<"El promedio del peso de las personas es: "<< prom;

 return 0;
}