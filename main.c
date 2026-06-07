#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    struct Libro libros[MAX];

    int cantidad=0;
    int opcion;

    do
    {
        printf("\n1. Registrar Libro");
        printf("\n2. Mostrar Libros");
        printf("\n3. Buscar Libro");
        printf("\n4. Actualizar Estado");
        printf("\n5. Eliminar Libro");
        printf("\n0. Salir");
        printf("\nOpcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                registrarLibro(libros,&cantidad);
                break;

            case 2:
                mostrarLibros(libros,cantidad);
                break;

            case 3:
                buscarLibro(libros,cantidad);
                break;

            case 4:
                actualizarEstado(libros,cantidad);
                break;

            case 5:
                eliminarLibro(libros,&cantidad);
                break;
        }

    }while(opcion!=0);

    return 0;
}