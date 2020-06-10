#include<cstring>
#include<iostream>
#include "mascotas.h"



mascotas::mascotas(const char *nombre)
{
    strcpy(nombreMascota,nombre);
};

void mascotas::mostrar(){
    cout<< " Nombre de mascota :"<<nombreMascota;
}
