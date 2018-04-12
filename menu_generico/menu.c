#include <stdio.h>
 //uso de tolower:
#include <ctype.h>
#include "menu.h"
#include "entrada_salida.h"


#define MENU_OPCION_INCORRECTA -1

void menu_mostrar()
{
    for (int i = 0; i < menu_cant_elems ; i++)
    {
        printf("[%c] %s\n", menu_opciones[i], menu_textos[i]);
    }
}

int menu_opcion(unsigned char c)
{
    int mapea = 0;
    int i = 0;
    while ( ! mapea && i < menu_cant_elems )
    {
        if (c == menu_opciones[i])
        {
            mapea = 1;
        }
        else
        {
            i++;
        }
    }
    if(mapea)
    {
        return i;
    }
    return -1;
}

int menu_confirmar_salida()
{
    unsigned char s;
    printf("¿Confirma Salir? 's' para sí ");
    s = leer_stdin();
    s = tolower(s);
    return s == 's';
}

codigo_operacion menu_operacion()
{
    unsigned char c;
    int opcion;
    do
    {
        borrar_stdout();
        menu_mostrar();
        printf("Ingrese una opción: ");
        c = leer_stdin();
        opcion = menu_opcion(c);
        if(opcion == MENU_OPCION_INCORRECTA)
        {
            printf("Opción incorrecta!\n");
            getchar();
        }

    }while(opcion == MENU_OPCION_INCORRECTA);
    return menu_operaciones[opcion];
}


