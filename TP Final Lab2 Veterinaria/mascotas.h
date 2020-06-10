#ifndef MASCOTAS_H_INCLUDED
#define MASCOTAS_H_INCLUDED
#include "fecha.h"

using namespace std;

class mascotas{
    private:
        char nombreMascota[20];
        int IDCliente;
        int edad;
        bool castrado;
        bool vacunado;
        char especie [10];
        char raza [20];
        char sexo;
        Fecha fechaVacuna;
        bool vivo;
    public:
        mascotas(const char*);
        void mostrar();
        ~mascotas();


};

#endif // MASCOTAS_H_INCLUDED
