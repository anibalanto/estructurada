#include <stdio.h>
#include <stdlib.h>

#include "../menu_generico/menu.h"

unsigned int menu_cant_elems = 7;

const char * menu_textos[] = {
"Suma",
"Resta",
"Multiplicación",
"Divición",
"Cuadrado",
"Transpuesta",
"Salir"
};

const char menu_opciones[] = {
'1',
'2',
'3',
'4',
'5',
'6',
's'
};

const codigo_operacion menu_operaciones[] = {
suma,
resta,
multiplicacion,
division,
cuadrado,
transpuesta,
end
};

int main()
{
    codigo_operacion codop;
    while((codop = menu_operacion()) != end)
    {
        printf("Hello world! %d\n", codop);
        getchar();
    }
    return 0;
}
