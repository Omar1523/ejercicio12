#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_SIZE 100

#define ANNO_ACTUAL 2022
#define LARGO_NOMBRE 50
#define LARGO_APELLIDO 50
#define LARGO_NACIONALIDAD 50
#define LARGO_OCUPACION 50
#define LARGO_ESTADO_CIVIL 30
#define LARGO_GENERO 2
#define LARGO_LUGARNACIMIENTO 50
#define LARGO_LUGARNACIMIENTO2 50


struct lugarnacimiento{
char lugarnacimiento [LARGO_LUGARNACIMIENTO + 1];
char lugarnacimiento2 [LARGO_LUGARNACIMIENTO2 + 1];
};

struct fecha{
int dia;
int mes;
int anno;
};

struct genero{
char genero [LARGO_GENERO + 1];
};

struct nacionalidad{
char nacionalidad[LARGO_NACIONALIDAD + 1];
};

struct estado_civil{
char estado_civil[LARGO_ESTADO_CIVIL + 1];
};

struct ocupacion {
char ocupacion[LARGO_OCUPACION + 1];
};

struct persona{
char nombre [LARGO_NOMBRE + 1];
char apellido [LARGO_APELLIDO + 1];
};

struct numerocedula{
int cedula;
};

struct cedula {
struct numerocedula cedu[5];
struct persona p[5];
struct fecha fecha_nacimiento[5];
struct nacionalidad n[5];
struct ocupacion o[5];
struct estado_civil es[5];
struct genero g[5];
struct lugarnacimiento lu[5];
};


int main(int argc, char* argv[]) {
 struct cedula c[5]; 
  int i;
  int b;
  int change;
int n;
int a[ARRAY_SIZE];
int buf;
time_t seed;

   seed = 0;
  srand(time(&seed));
  n = sizeof(a) / sizeof(*a);

printf("Ingrese los datos de cedula: \n ");    
for(i=0;i<5;i++){    
printf("\nCedula:");    
scanf("%d",&c[i].cedu->cedula);    
printf("\nNombre y Apellido: ");    
scanf("%s",&c[i].p->nombre);
scanf("%s",&c[i].p->apellido);
  printf("\nFecha de Nacimiento: ");    
scanf("%d",&c[i].fecha_nacimiento->dia);
scanf("%d",&c[i].fecha_nacimiento->mes);
scanf("%d",&c[i].fecha_nacimiento->anno); 
printf("\nNacionalidad: ");    
scanf("%s",&c[i].n->nacionalidad);
printf("\nOcupacion: ");    
scanf("%s",&c[i].o->ocupacion);
printf("\nEstado civil: ");    
scanf("%s",&c[i].es->estado_civil);
printf("\nIngrese su genero (Solo ingrese M para Masculino y F para Femenino: ");    scanf("%s",&c[i].g->genero);
printf("\nIngrese su lugar de nacimiento: ");    
scanf("%s",&c[i].lu->lugarnacimiento);
scanf("%s",&c[i].lu->lugarnacimiento2);


}    
  while (change == 1)
    {
      change = 0;
      for(i=0; i <= i-2; b++)
        {
          if(a[i] > a[i+1])
          {
            buf = a[i];
            a[i] = a[i+1];
            a[i+1] = buf;
            change = 1;
          }
        }
    }
for(i = 0; i < 1 ; i++)
  {
  printf("INFORMACIONES DE CEDULAS: \n");
      printf("\n");
  printf("\n");
 

  printf("Cedula: %d \n", c[i].cedu->cedula);
  
  printf("Nombre: %s \n" , c[i].p->nombre);
  
  printf("Apellido: %s \n" , c[i].p->apellido);
  
  printf("Su edad es: %d \n" , ANNO_ACTUAL - c[i].fecha_nacimiento->anno);
  
  printf("Nacionalidad: %s \n" , c[i].n->nacionalidad);
  
  printf("Ocupación: %s \n" , c[i].o->ocupacion);
  
  printf("Estado Civil: %s \n " , c[i].es->estado_civil);
  
  printf("Genero: %s \n " , c[i].g->genero);
  
  printf("Lugar de Nacimiento: %s %s \n " , c[i].lu->lugarnacimiento , 
  c[i].lu->lugarnacimiento2 );
  
  printf("Fecha de expiración: %d \n " , ANNO_ACTUAL + 4);
 printf("\n");
  printf("\n");
      }

  
  }