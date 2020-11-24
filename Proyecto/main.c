/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 */

#include <stdio.h>
#include <stdlib.h>

struct promedio{
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float nota5;
};

struct alumno{
    int numeroControl;
    char nombre[20];
    char apellidoP[20];
    char apellidoM[20];
    int diaNacimiento;
    int mesNacimiento;
    int anioNacimiento;
    struct promedio prom;
}alumno1;

int main(){

    float promedio=0;
    
    printf("Digite su numero de control:\n");
    scanf("%d", &alumno1.numeroControl);
    printf("Digite su nombre:\n");
    gets(alumno1.nombre);
    printf("Digite su apellido paterno:\n");
    gets(alumno1.apellidoP);
    printf("Digite su apellido materno:\n");
    gets(alumno1.apellidoM);
    printf("Digite su dia de nacimiento(con numero):\n");
    scanf("%d", &alumno1.diaNacimiento);
    printf("Digite su dmes de nacimiento(con numero):\n");
    scanf("%d", &alumno1.mesNacimiento);
    printf("Digite su anio de nacimiento(con numero):\n");
    scanf("%d", &alumno1.anioNacimiento);
    printf("Digite las calificaciones de las materias requeridas:\n");
    printf("Matematicas, fisica, programacion, circuitos, lectura y redaccion\n");
    scanf("%f %f %f %f %f",&alumno1.prom.nota1,&alumno1.prom.nota2,&alumno1.prom.nota3,&alumno1.prom.nota4,&alumno1.prom.nota5);
    
    promedio = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3 + alumno1.prom.nota4 + alumno1.prom.nota5)/5;
    
    printf("\n\n-Datos del alumno-\n");
    
    printf("\nNumero de control: %d", alumno1.numeroControl);
    printf("\nNombre: %s", alumno1.nombre);
    printf("\nApellido paterno: %s", alumno1.apellidoP);
    printf("\nApellido materno: %s", alumno1.apellidoM);
    printf("\nDia de nacimientto: %d", alumno1.diaNacimiento);
    printf("\nMes de nacimientto: %d", alumno1.mesNacimiento);
    printf("\nAnio de nacimientto: %d", alumno1.anioNacimiento);
    printf("\nPromedio: %.2f\n\n", promedio);
    
    
    system("pause");
    return 0;
}

