#include <iostream>
#include <cstdlib>
#include "visuales.h"
#include "fecha.h"

using namespace std;
#include "mascotas.h"
///CONSTANTES DAT
const char ARCHIVOHISTORIAS[20]="historias.dat";
const char ARCHIVOCLIENTES[20]="clientes.dat";
const char ARCHIVOMASCOTAS[20]="mascotas.dat";
const char ARCHIVOARANCELES[20]="aranceles.dat";
///CONSTANTES BKP
const char ARCHIVOHISTORIASBKP[20]="historias.bkp";
const char ARCHIVOCLIENTESBKP[20]="clientes.bkp";
const char ARCHIVOMASCOTASBKP[20]="mascotas.bkp";
const char ARCHIVOARANCELESBKP[20]="aranceles.bkp";


int main()
{
    // PRUEBA DE GITHUB
    mascotas reg("michi");
    reg.mostrar();
    cout<<endl;
        return 0;
}
