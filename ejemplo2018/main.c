#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "../menu_generico/menu.h"

#define MENU_OPERACION_SUMA 1
#define MENU_OPERACION_RESTA 2
#define MENU_OPERACION_MULTIPLICACION 3
#define MENU_OPERACION_DIVISION 4
#define MENU_OPERACION_TRASPUESTA 5

unsigned int menu_cant_elems = 6;

const char menu_textos[][MENU_LARGO_TEXTO] = {
"Suma",
"Resta",
"Multiplicación",
"Divición por escalar",
"Transpuesta",
"Salir"
};

const char menu_opciones[] = {
's',
'r',
'm',
'd',
't',
'q'
};

const int menu_operaciones[] = {
MENU_OPERACION_SUMA,
MENU_OPERACION_RESTA,
MENU_OPERACION_MULTIPLICACION,
MENU_OPERACION_DIVISION,
MENU_OPERACION_TRASPUESTA,
MENU_OPERACION_FIN
};

int main()
{
    setlocale(LC_ALL, "spanish");
    int op;
    while((op = menu_operacion()) != MENU_OPERACION_FIN)
    {
        printf("operación %d\n", op);
        getchar();
    }
    return 0;
}
