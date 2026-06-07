#include <stdio.h>
#include <string.h>
#include "funciones.h"

void registrarLibro(struct Libro libros[], int *cantidad)
{
    printf("ID: ");
    scanf("%d",&libros[*cantidad].id);

    getchar();

    printf("Titulo: ");
    fgets(libros[*cantidad].titulo,100,stdin);

    printf("Autor: ");
    fgets(libros[*cantidad].autor,50,stdin);

    printf("Anio: ");
    scanf("%d",&libros[*cantidad].anio);

    strcpy(libros[*cantidad].estado,"Disponible");

    (*cantidad)++;
}

void mostrarLibros(struct Libro libros[], int cantidad)
{
    for(int i=0; i<cantidad; i++)
    {
        printf("\nID: %d",libros[i].id);
        printf("\nTitulo: %s",libros[i].titulo);
        printf("Autor: %s",libros[i].autor);
        printf("Anio: %d",libros[i].anio);
        printf("\nEstado: %s\n",libros[i].estado);
    }
}

void buscarLibro(struct Libro libros[], int cantidad)
{
    int id;

    printf("Ingrese ID: ");
    scanf("%d",&id);

    for(int i=0; i<cantidad; i++)
    {
        if(id==libros[i].id)
        {
            printf("\nTitulo: %s",libros[i].titulo);
            printf("Autor: %s",libros[i].autor);
            printf("Anio: %d",libros[i].anio);
            printf("\nEstado: %s\n",libros[i].estado);
        }
    }
}

void actualizarEstado(struct Libro libros[], int cantidad)
{
    int id;

    printf("Ingrese ID: ");
    scanf("%d",&id);

    for(int i=0; i<cantidad; i++)
    {
        if(id==libros[i].id)
        {
            if(strcmp(libros[i].estado,"Disponible")==0)
            {
                strcpy(libros[i].estado,"Prestado");
            }
            else
            {
                strcpy(libros[i].estado,"Disponible");
            }

            printf("Estado actualizado.\n");
        }
    }
}

void eliminarLibro(struct Libro libros[], int *cantidad)
{
    int id;

    printf("Ingrese ID: ");
    scanf("%d",&id);

    for(int i=0; i<*cantidad; i++)
    {
        if(id==libros[i].id)
        {
            for(int j=i; j<*cantidad-1; j++)
            {
                libros[j]=libros[j+1];
            }

            (*cantidad)--;

            printf("Libro eliminado.\n");
        }
    }
}