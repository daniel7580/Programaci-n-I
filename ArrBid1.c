/*Ejercicio 1: Guardar los nombres de los alumnos de un salón de
clases en un arreglo y posteriormente mostrarlos*/
#include<stdio.h>
main()
{
	const int F=3,C=12;
	char mat[F][C];
	int nalum=0,i;
	do{
		printf("Cuantos alumnos hay?(Max. 3): ");
		scanf("%d",&nalum);
   	}while(nalum>F);
	for(i=0;i<nalum;i++)
	{
		printf("%d - Nombre del alumno: ",i);
		fflush(stdin); 
		gets(mat[i]);
	}
	printf("\nMuestra de la Matriz\n");
	for(i=0;i<nalum;i++)
		printf("\nAlumno: %d - Nombre: %s",i,mat[i]);
getchar();
}
