# libft
*Este proyecto ha sido creado como parte del currículo de 42 por pabfajar*

**DESCRIPCIÓN**

El proyecto libft consiste en crear una librería para las funciones estándar del lenguaje C. A parte de la librería, se ha creado también un archivo Makefile con las instrucciones necesarias para compilar y ejecutar la librería. El objetivo principal es que el proyecto ayude a entender las funciones más básicas, recreando las funciones de la librería estándar de C y algunas extra desde cero implementando lógica propia. Esta librería se usará para futuros proyectos de la escuela 42.

**INSTRUCCIONES**

Como se ha mencionado anteriromente, el proyecto incluye un Makefile con las instrucciones de compilación. Para compilar toda la librería se utiliza el comando "make", esto compila todas las funciones y crea la librería. Los flags utilizados para la compilación son -Wall -Wextra -Werror, si se quiere compilar una función de forma independiente se debe usar "cc -c <flags>". Para eliminar los archivos .o resultantes de la compilación se debe utilizar "make clean". Si lo que se quiere es eliminarlo todo (librería y archivos .o) se debe hacer uso del comando "make fclean".

**RECURSOS**

La documentación utilizada para la elaboración del presente proyecto ha sido el subject disponible en la intra de 42, el comando "man" que da una descripción sobre el funcionamiento de cada función además de cómo se debe definir y qué parámetros se le deben pasar y la guía de libft realizada por un usuario de github en la que se explican de forma bastante más clara cada una de las funciones. Las herramientas de IA se han utilizado para consultas teóricas. Ej: ¿Qué tipo de variable es size_t? ¿Para qué se usa sizeof? ¿Qué es una lista enlazada?

**DESCRIPCIÓN DE LA LIBRERÍA**

A continuación se van a mancionar todas las funciones implementadas en la mencionada librería: ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

Para algunas de estas funciones se han tenido que usar otras tales como: malloc, free o write, funciones que no se han implementado en la librería, por ello esta incluye otras librería de C (unistd, stdlib, stddef). Para la parte de listas enlazadas se ha incluido una declaración de estructura, que define el contenido de la lista (El valor del noso actual y un puntero a la siguiente posición).
