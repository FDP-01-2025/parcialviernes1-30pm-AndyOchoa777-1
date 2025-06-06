#include <iostream>
#include <string>

using namespace std;

int main(){

    double monto = 0;
    double descuento = 0.10;

    cout<<"Ingrese el monto de su compra: ";
    cin>>monto;
    cout<<endl;

    if (monto > 100)
    {
        cout<<"Su compra excede los $100. \n";
        cout<<"Se le aplicara un descuento del 10%. \n";
        cout<<"El precio final de su compra sera de: "<<(monto-(monto*descuento));
        
    }else 
    {
        cout<<"Su monto final no excede los $100, por ende no se le aplicara descuento. \n";
        cout<<"Su monto final es de: "<<monto;
    }
    
    



    return 0;
}