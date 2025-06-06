#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){

    string dui, cuenta;
    double dinero = 0;
    double accion;
    bool validacion = true;

    int eleccion;
do
{
    
    cout<<"Ingrese su DUI(sin guiones): ";
    cin>>dui;
    cout<<endl;
    cout<<"Ingrese su numero de : ";
    cin>>cuenta;

    if (dui.size() != 9 && cuenta.length() != 6)
    {
        cout<<endl;
        cout<<"No a ingresado correctamente los datos porfavor intentar de nuevo \n";
    }
    
} while (dui.size() != 9 && cuenta.length() != 6);

do
{
    cout<<"Seleccione la accion que quiere hacer \n";
    cout<<"1 -  Realizar deposito \n";
    cout<<"2 - Realizar retiro \n";
    cout<<"3 - consultar cuenta \n";
    cout<<"4 - Salir \n";

     cin>>eleccion;
    switch (eleccion)
    {
    case 1:
        cout<<"Ingrese de cuanto sera su deposito: ";
        cin>>accion;
        dinero= dinero + accion;
        cout<<"Su deposito se realizo exitosamente! \n";
        break;
        case 2:
        cout<<"Ingrese de cuanto sera su retiro: ";
        cin>>accion;
        if (accion <= dinero)
        {
            dinero= dinero-accion;
            cout<<"Se realizo el retiro exitosamente! \n";
        }else
        {
            cout<<"No cuenta con suficiente dinero para realizar el retiro. \n";
        }
        
        
        break;
        case 3:
        cout<<"El monto disponible en su cuenta es "<<dinero;
        cout<<endl;
        cout<<"Operacion exitosa. \n";
        break;
        case 4:
        validacion= false;
        cout<<"Gracias por usar nuestro programa!";
        break;
    
    default:
    cout<<"No a ingresado una opcion valida. \n";
        break;
    }
} while (validacion);



    
    
    



    return 0;
}