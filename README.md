# libft
*Este proyecto ha sido creado como parte del currículo de 42 por pabfajar*

**DESCRIPCIÓN**
El proyecto libft consiste en crear una librería para las funciones estándar del lenguaje C. A parte de la librería, se ha creado también un archivo Makefile con las instrucciones necesarias para compilar y ejecutar la librería. El objetivo principal es que el proyecto ayude a entender las funciones más básicas, recreando las funciones de la librería estándar de C y algunas extra desde cero implementando lógica propia. Esta librería se usará para futuros proyectos de la escuela 42.

**INSTRUCCIONES**
Como se ha mencionado anteriromente, el proyecto incluye un Makefile con las instrucciones de compilación. Para compilar toda la librería se utiliza el comando "make", esto compila todas las funciones y crea la librería. Los flags utilizados para la compilación son -Wall -Wextra -Werror, si se quiere compilar una función de forma independiente se debe usar "cc -c <flags>". Para eliminar los archivos .o resultantes de la compilación se debe utilizar "make clean". Si lo que se quiere es eliminarlo todo (librería y archivos .o) se debe hacer uso del comando "make fclean".

**RECURSOS**
La documentación utilizada para la elaboración del presente proyecto ha sido el subject disponible en la intra de 42, el comando "man" que da una descripción sobre el funcionamiento de cada función además de cómo se debe definir y qué parámetros se le deben pasar y la guía de libft realizada por un usuario de github en la que se explican de forma bastante más clara cada una de las funciones. Las herramientas de IA se han utilizado para consultas teóricas. Ej: ¿Qué tipo de variable es size_t? ¿Para qué se usa sizeof? ¿Qué es una lista enlazada?
