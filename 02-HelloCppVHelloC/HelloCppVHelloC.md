# Trabajo #2 - Niveles del Lenguaje: Hello.cpp v Hello.c

### Hello.cpp

    #include <iostream>
    int main() {
    std::cout << "Hello, World!\n";
    }
    
### Hello.c

    #include <stdio.h>
    int main() {
    printf("Hello, World!\n");
    }

##
|**Diferencias**|C|C++|Categoría|
|--|--|--|--|
|**Output**|printf("algo")|std::cout<<"algo"|Sintaxis|
|**Output**|Uso una función predefinida|Directamente trabajo con el flujo de salida|Semántica|
|**Biblioteca I/O**|stdio.h|iostream|Sintaxis|

##
|**Similitudes**|Descripción|Categoría|
|--|--|--|
|**Enteros**|Int significa "entero"|Sintaxis|
|**Enteros**|Ambos lenguajes trabajan de la misma forma con enteros, los representan con el tipo de dato Int|Semántica|
|**Funciones**|Las funciones se escriben igual, aclarando el tipo de dato de salida, nombrando la función, aclarando los parámetros entre paréntesis y el desarrollo entre llaves.|Sintaxis|
|**Simbología utilizada**|Todos los símbolos utilizados en estos ejemplos son comunes a los diccionarios de cada lenguaje.|Léxico|
