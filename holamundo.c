// C es un lenguaje tipado (Todo debe tener un tipo de dato)
// void de tipo de dato vacio o sea que no retorna nada (neutra)
// .h libreria de encabezado de header
// prototipo de una funcion
void holamundo();
void nombres();
void apellidoM();
void apellidoP();


#include <stdio.h> //directiva del compilador 
void main () {
    //printf("Hola mundo\n");
    //holamundo();
    nombres();
    apellidoP();
    apellidoM();
}

//funciones 
void holamundo(){
    printf("Hola mundo\n"); //Secuencia de escappe\n
}
void nombres(){
    printf("Lucero Jocelyn\n");
}
void apellidoP(){
    printf("Amezcua\n");
}
void apellidoM(){
    printf("Nuñez\n");
}