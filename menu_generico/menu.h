#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include"../ejemplo2018/operaciones.h"

#ifndef COD_OPERACION_FINALIZAR
    #define COD_OPERACION_FINALIZAR '0'
#endif // COD_OPERACION_FINALIZAR

extern unsigned int menu_cant_elems;

extern unsigned int menu_opcion_salir;

extern const char * menu_textos[];

extern const char menu_opciones[];

extern const codigo_operacion menu_operaciones[];

void menu_mostrar();
int menu_eligio_opcion_salir(unsigned char);
int menu_confirmar_salida();
void menu_mostrar_continuar();
codigo_operacion menu_cod_operacion(unsigned int op);
codigo_operacion menu_operacion();


#endif // MENU_H_INCLUDED
