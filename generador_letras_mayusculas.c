	//			||	letras_mayusculas	||

/*
	------------------------------------------------------------------------------------------
	El archivo imprime en mayusculas el contenido de cadena_base.txt	
	------------------------------------------------------------------------------------------
*/

/*		1- Librerias		*///--------------------------------------------------------------
		#include <stdio.h>
		#include <stdlib.h>	
/*--	1- Librerias   	  --*/
							
/*		2- Manejo de variables Globales		*///----------------------------------------------

/*		3- Prototipado de funciones		*///--------------------------------------------------

/*		4- Funci�n principal (Descripci�n de uso)	*///--------------------------------------
	int main()
	{
		FILE *archivo;
		char caracter;
		
		archivo = fopen("cadena_base.txt","r");
		
		if (archivo == NULL)
   	     {
  	          printf("\nError de apertura del archivo. \n\n");
  	      }
  	      else
        {
  	          printf("\n\tEl contenido del archivo en mayusculas es: \n\n\t");
  	      
			    while((caracter = fgetc(archivo)) != EOF)
		   		{
					caracter=toupper(caracter);
						printf("%c",caracter);
		  	  	}
	        }
        
	        fclose(archivo);
		return 0;
	}
/*--	4- Funci�n principal 	--*/

/*
		||		Datos Generales del archivo:		||
	------------------------------------------------------------------------------------------
	Universidad Nacional Aut�noma de M�xico
	Facultad de Ingenier�a
	Fundamentos de Programaci�n
	Grupo: 1120
	 
	Autor: 
	Quintero Juan Eduardo
	Bautista Rodr�guez Jose Luis

	------------------------------------------------------------------------------------------	||

*/
