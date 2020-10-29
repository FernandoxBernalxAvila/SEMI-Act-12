#include <iostream>

#include "arregloDinamico.h"

using namespace std;

int main()
{
   ArregloDinamico _arreglo;

   _arreglo.insertar_final("Fer");
   _arreglo.insertar_final("Carlos");
   _arreglo.insertar_final("Yolanda");
   _arreglo.insertar_final("Michel");
   _arreglo.insertar_final("Rosa");
   _arreglo.insertar_final("Saul");
   _arreglo.insertar_final("Luis");
   _arreglo.insertar_final("Arturo");

   _arreglo.insertar_inicio("Christian");
   _arreglo.insertar_inicio("Melissa");


   for (size_t i = 0; i < _arreglo.size(); i++){

        cout << _arreglo[i] << " | ";

   }
    cout << endl;

    return 0;
}
