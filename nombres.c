#include <stdio.h> //directiva del compilador 
void nombres();
void apellidoM();
void apellidoP();
void apellidoscompletos();
void nombrescompletos();
void brinco();
void main () {
    apellidoscompletos();
    nombrescompletos();
}
void nombres(){
    printf(" Lucero Jocelyn ");
}
void apellidoP(){
    printf(" Amezcua ");
}
void apellidoM(){
    printf(" Nuñez ");
}
void brinco(){
    printf("\n ");
}
void nombrescompletos(){
    nombres();
    apellidoP();
    apellidoM();
    brinco ();
}
void apellidoscompletos(){
    apellidoP();
    apellidoM();
    nombres();
    brinco();
}