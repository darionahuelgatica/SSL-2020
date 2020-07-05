# Trabajo 5 - Contador de Palabras

## Objetivos

* Aplicar máquinas de estado para el procesamiento de texto.
* Implementar máquinas de estado con diferentes métodos.

## Temas

* Árboles de expresión.
* Representación de máquinas de estado.
* Implementación de máquinas de estado.

## Tareas

1. Árboles de Expresión
   
        a. Estudiar el programa del ejemplo las sección 1.5.4 Conteo de Palabras de [KR1988].

        b. Dibujar el árbol de expresión para la inicialización de los contadores: nl = nw = nc = 0.
            
        c. Dibujar el árbol de expresión para la expresión de control del segundo if: c == ' ' || c == '\n' || c = '\t'.

2. Máquina de Estado
      
        a. Describir en lenguaje dot [DOT2015] y dentro del archivo wc.gv la máquina de estado que resuelve el problema planteado.

        b. Formalizar la máquina de estados como una n-upla, basarse en el Capítulo #1 del Volumen #3 de [MUCH2012]

3. Implementaciones de Máquinas de Estado
   
        Las implementaciones varían en los conceptos que utilizan para representaar los estados y las transiciones.

        a. Implementación #1: Una variable para el estado actual.

            1. Escribir el programa wc-1-enum-switch.c que siga la Implementación #1, variante enum y switch.
            
                Esta implementación es la regularización de la implementación de la sección 1.5.4 de [KR1988]. Los estados son valores de una variable y las transiciones son la selección estructurada y la actualización de esa variable. Esta versión es menos eficiente que la versión de [KR1988], pero su regularidad permite la automatización de la construcción del programa que implementa la máquina de estados. Además de la regularidad, esta versión debe:

                * Utilizar typedef y enum en vez de define, de tal modo que la variable estado se pueda declarar de la siguiente manera: State s = Out;
                * Utilizar switch en vez de if.

            2. Responder en readme.md: Indicar ventajas y desventajas de la versión de [KR1988] y de esta implementción.
        
        b. Implementación #2: Sentencias goto (sí, el infame goto)

            1. Leer la sección 3.8 Goto and labels de [KR1988]
            2. Leer Go To Statement Considered Harmful de [DIJ1968].
            3. Leer "GOTO Considered Harmful" Considered Harmful de [RUB1987].
            4. Responder en readme.md: ¿Tiene alguna aplicación go to hoy en día? ¿Algún lenguaje moderno lo utiliza?
            5. Escribir el programa wc-2-goto.c que siga la Implementación #2. En esta implementación los estados son etiquetas y las transiciones son la selección estructurada y el salto incondicional con la sentencia goto.
        
        c. Implementación #3: Funciones Recursivas

            1. Leer la sección 4.10 Recursividad de [KR1988].
            2. Responder en readme.md: ¿Es necesario que las funciones accedan a a contadores? Si es así, ¿cómo hacerlo? Leer la sección 1.10 Variables Externas y Alcance y 4.3 Variables Externas de [KR1988].
            3. Escribir el programa, wc-3-rec.c que siga la implementación #3. En esta implementación los estados son funciones recursivas y las transiciones son la selección estructurada y la invocación recursiva.

        d. Implementación #X:

            Es posible diseñar más implementaciones. Por ejemplo, una basada en una tabla que defina las transiciones de la máquina. En ese caso, el programa usaría la tabla para lograr el comportamiento deseado. El objetivo de este punto es diseñar una implementación diferente a las implementaciones #1, #2, y #3.

            1. Diseñar una nueva implementación e indicar en Readme.md cómo esa implementación representa los estados y cómo las transiciones.
            2. Escribir el programa, wc-x.c que siga la nueva implementación.

4. Eficiencia del uso del Tiempo

        Construir una tabla comparativa a modo de benchmark que muestre el tiempo de procesamiento para cada una de las cuatro implementaciones, para tres archivos diferentes de tamaños diferentes, el primero en el orden de los kilobytes, el segundo en el orden de los megabytes, y el tercero en el orden de los gigabytes.
        La tabla tiene en las filas las cuatro implementación, en las columnas los tres archivos, y en la intersección la duración para una implementación para un archivo.