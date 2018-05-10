#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "publicacion.h"
#include "utn.h"
#include "cliente.h"


int informe_mostrarClientes(Cliente* clientes, Publicacion* publicaciones, int limite_cli, int limite_pub)
{
    int retorno = -1;
    int i, cantidadPub;
    if(limite_cli > 0 && clientes != NULL)
    {
        retorno = 0;
        for(i=0;i<limite_cli;i++)
        {
            if(!clientes[i].isEmpty)
            {
                cantidadPub = pub_cantidadPublicacionesPorIdCliente(publicaciones, limite_pub, clientes[i].idCliente);
                printf(" Id: %d Nombre y Apellido: %s %s Cuit: %d Numero Publicaciones: %d\n",clientes[i].idCliente, clientes[i].nombre, clientes[i].apellido, clientes[i].cuit, cantidadPub);
            }
        }
    }
    return retorno;
}
/*
int informar_ConsultaFacturacion(Publicacion* arrayC,int limite,
              Cliente* clientes, int lenClientes, char* cuit)
{
    int retorno = -1;
    int i;
    int indexCliente;
    if(limite > 0 && arrayC != NULL)
    {
        for(i=0; i<limite;i++)
        {
            if(!arrayC[i].isEmpty && !strcmp(arrayC[i].cuit,cuit))
            {
                indexCliente = pantalla_buscarPorId(clientes,lenClientes,arrayC[i].idCliente);
                printf("\n\nCuit: %s - Unitario: %.2f - Total: %.2f - Dias: %d\n",
                                    arrayC[i].cuit,
                                    clientes[indexCliente].precio,
                                    (arrayC[i].dias * clientes[indexCliente].precio),
                                    arrayC[i].dias );
            }
        }

        retorno = 0;
    }
    return retorno;
}



int informar_ListarPublicaciones(Publicacion* arrayC,int limite,
              Cliente* clientes, int lenClientes)
{
    int retorno = -1;
    int i;
    int indexCliente;
    if(limite > 0 && arrayC != NULL)
    {
        for(i=0; i<limite;i++)
        {
                if(!arrayC[i].isEmpty)
                {
                    indexCliente = pantalla_buscarPorId(clientes,lenClientes,arrayC[i].idCliente);
                    printf("\nCuit: %s - Nombre: %s - Video: %s - Dias: %d\n",
                                        arrayC[i].cuit,
                                        clientes[indexCliente].nombre,
                                        arrayC[i].archivo,
                                        arrayC[i].dias );
                }


        }

        retorno = 0;
    }
    return retorno;
}


int informar_ListarCantidadPublicacionesImporte(Publicacion* arrayC,int limite,
              Cliente* clientes, int lenClientes)
{
    int retorno = -1;
    int i;
    //int indexCliente;
    char ultimoCuit[50];

    cont_ordenarCuit(arrayC,limite,0);
    strcpy(ultimoCuit,"");
    if(limite > 0 && arrayC != NULL)
    {
        for(i=0; i<limite;i++)
        {
                if(!arrayC[i].isEmpty)
                {
                    if(strcmp(ultimoCuit,arrayC[i].cuit) != 0)
                    {
                        printf("\nCuit: %s", arrayC[i].cuit);
                        strcpy(ultimoCuit,arrayC[i].cuit);
                    }


                    //indexCliente = pantalla_buscarPorId(clientes,lenClientes,arrayC[i].idCliente);
                    /*printf("\nCuit: %s - Nombre: %s - Video: %s - Dias: %d\n",
                                        arrayC[i].cuit,
                                        clientes[indexCliente].nombre,
                                        arrayC[i].archivo,
                                        arrayC[i].dias );*/

/*                }


        }

        retorno = 0;
    }
    return retorno;
}

int informar_ListarClientesSuperanPromedioDias(Publicacion* arrayC,int limite,
              Cliente* clientes, int lenClientes)
{
    int retorno=0;
    int i;
    int promedioDias;
    int promedioDiasCliente;
    cont_promedioDias(arrayC, limite, &promedioDias);
    for(i=0;i<lenClientes;i++)
    {
        if(!clientes[i].isEmpty)
        {
            cont_promedioDiasPorCliente(arrayC, limite, &promedioDiasCliente, clientes[i].idCliente);
            if(promedioDiasCliente>promedioDias)
            {
                printf("%d\n", promedioDias);
                pantalla_mostrarPorId(clientes, lenClientes, clientes[i].idCliente);
            }
        }

    }
    return retorno;
}*/
