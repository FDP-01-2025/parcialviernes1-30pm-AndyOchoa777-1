#include <iostream>
#include <string>

using namespace std;

int main(){

    int cantidad = 0;
    int cantimpares = 0;
    cout<<"Ingresa cuantos datos quieres en tu arreglo: ";
    cin>>cantidad;

    int numeros[cantidad];;
    string verificacionpar[cantidad];

    for (int i = 0; i < cantidad; i++)
    {
        cout<<"Ingresa el dato "<<(i+1)<<": ";
        cin>>numeros[i];
        cout<<endl;

        if ((numeros[i]%2) == 0)
        {
            verificacionpar[i] = "Es par";
        }else{
            verificacionpar[i] = "Es impar";
            cantimpares++;
        }
        
    }

    for (int i = 0; i < cantidad; i++)
    {
        cout<<endl;
        cout<<"El dato "<<(i+1)<<" es "<<numeros[i]<<" y tambien es "<< verificacionpar[i]<<endl;
    }

    cout<<endl;
    cout<<"En total hay "<<(cantidad - cantimpares) <<" numeros pares y hay "<<cantimpares<<" numeros impares.";
    
    
    
    
    



    return 0;
}