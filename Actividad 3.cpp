#include <stdio.h>
#include <string.h>
#include <iostream>

int main()
{
    int i,T_apellidoPaterno,c=4;
    char nombre[15]={0},nombre2[15]={0},apellidoMaterno[15]={0},apellidoPaterno[15]={0},
        fechaNacimiento[9]={0},RFC[13]={0},nombreCompleto[45]={0};
    //Llamamos a esta funcion para pedir los datos para calcular el RFC
    fflush(stdin);
    printf("\n\n         Teclea tu Apellido Paterno: ");
    scanf("%s",apellidoPaterno);
    printf("         Teclea tu Apellido Materno: ");
    scanf("%s",apellidoMaterno);
    printf("         Teclea tu primer Nombre: ");
    scanf("%s",nombre);
    printf("         Teclea tu segundo Nombre: ");
    scanf("%s",nombre2);
    printf("         Teclea tu Fecha de nacimientio(aa/mm/dd): ");
    scanf("%s",fechaNacimiento);
    printf("         Gracias, por favor espere. ");
    //colocamos el caracter 0 del apellido paterno en la posicion 0 
    // del RFC 
    RFC[0]=apellidoPaterno[0];
    T_apellidoPaterno=strlen(apellidoPaterno);
    //bsucamos la primer vocal en el apeido paterno y la colocamos en la 
    // posicion 1 del RFC
    for(i=1;i<T_apellidoPaterno;i++)
    {
       char a = apellidoPaterno[i];
       if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
       {
        RFC[1]=apellidoPaterno[i];
        break;
       }
    }
    //colocamos la primer letra del apellido materno en la posicon 2 del RFC
    RFC[2]=apellidoMaterno[0];
    //colocamos la primer letra del nombre en la posicion 3 del RFC
    RFC[3]=nombre[0];
    // separamos la fecha y la colocamos en sus respectivos lugares
    for(i=0;i<8;i++)
    {
        if(fechaNacimiento[i]!='/')
        {
            RFC[c]=fechaNacimiento[i];
            c++;
        }
    }
    //juntamos apellidos y nombre para dar origen al nombre completo
    strcat(nombreCompleto, apellidoPaterno);
    strcat(nombreCompleto, " ");
    strcat(nombreCompleto, apellidoMaterno);
    strcat(nombreCompleto, " ");
    strcat(nombreCompleto, nombre);
    strcat(nombreCompleto, " ");
    strcat(nombreCompleto, nombre2);
    // Transformamos la letras del RFC a mayúsculas
    for(i=0;i<strlen(RFC);i++)
    {
       char a = toupper(RFC[i]);
       RFC[i] = a;
    }
    // Imprimimos el RFC
    printf("\n\nSu número de RFC sin homoclave es: %s",RFC);
    return 0;
}
