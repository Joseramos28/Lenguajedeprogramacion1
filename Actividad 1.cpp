//determianr si es o no mayor de edad
#include<iostream>
using namespace std;
main(){
    int edad;
    cout<<"ingrese su edad: ";cin>>edad;
    if(edad>=18){
        cout<<"usted es mayor de edad";
    }
    else if(edad<18){
        cout<<"usted es menor de edad ";
    }
}