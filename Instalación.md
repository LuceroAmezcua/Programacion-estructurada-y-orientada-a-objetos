# Programacion estructurada y orientada a objetos
### Instalación del entorno de desarrollo

1. Abrir la terminal en PowerShell
2. Escribir en la terminal *<b> wsl --install- </b>*
3. Al terminar la descarga te pedira reiniciar la computadora.
4. Para comprobar que WSL está instalado y funcionando, usa: *<b> wsl --status</b>*
5. Para actualizar wsl utiliza *<b> wsl --update</b>*
6. Usamos el comando *<b> wsl</b>*
7. Al abrirlo te pedira crear un usuario y contraseña (La contraseña no se mostrara) y tendras que ponerla dos veces.
8. Instala gcc con *<b>sudo apt install gcc</b>*
9. Luego confirma que la instalación fue exitosa con *<b>gcc --version</b>*
10. Entra a Visual Studio Code y cambia la terminal a la de ubuntu
11. Escribe el codigo para probar si funciona 
ej. 
``` languaje
#include <stdio.h>
void main () {
printf ("Hola ICI\n");
 }
```
12. En la terminal para compilar el programa escribe <b>gcc Nombre del documento.c </b> aqui se mostraran errores posibles en el codigo.
13. Si ya no tiene errores escribe <b>./a.out</b> para ejecutar el programa.
14. ¡Ya tienes el entorno listo! <b>:)</b>