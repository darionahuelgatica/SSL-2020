# Examen00

## Parte 1 ##
  1. (1 punto) Indique la tarea más representativa para la cual un Ingeniero en Sistemas de Información está calificado.  
      Construcción, mantenimiento y sustitución de soluciones informáticas.
  1. (1 punto) Defina información.  
      Entendemos por información a datos procesados, que pasan a ser relevantes para la toma de decisiones. 
  1. (1 punto) Indique las asignaturas del área de programación.  
      Matemática Discreta, Algoritmos y Estructuras de Datos, Sintaxis y Semántica de los Lenguajes, Paradigmas de Programación y Gestión    de Datos.
  1. (1 punto) Indique las asignaturas del área de sistemas de información.  
      Sistemas y Organizaciones, Análisis de Sistemas, Diseño de Sistemas, Administración de Recursos y Proyecto Final.
  1. (1 punto) Defina abstracción.  
      Separación, dejar de lado los detalles para enfocar en lo importante.

## Parte 2
  1. (1 punto) Indique diferencias entre secuencia y conjunto.  
   Un conjunto se puede definir como "varios elementos" que puede ser infinito y no importa el orden. Si importase el orden, estaríamos hablando de una secuencia.
  1. (1 punto) Defina el concepto matemático secuencia.  
   Para las matemáticas, una secuencia o una sucesión es un grupo de números o de otros elementos matemáticos que forman un conjunto ordenado. Un ejemplo de secuencia matemática es la sucesión de números impares, que resulta infinita: 1, 3, 5, 7, 9…
  1. (1 punto) Defina función matemática.  
   Una función matemática es una relación establecida entre dos elementos X e Y (donde X pertenece a un conjunto "Dominio" e Y pertenece a un conjunto "Imagen") que siempre cumple las propiedades de **unicidad** y **existencia**.
  1. (1 punto) Defina grafo.  
   Un grafo es un conjunto de puntos o **nodos** unidos por arcos o **aristas**.
  1. (1 punto) Defina partición de un conjunto.  
   Una partición de un conjunto es una división del mismo en subconjuntos disjuntos no vacíos.
  1. (1 punto) Sea X={a,b} indique P(X).  
   El conjunto de partes de X es: P(X) = {∅, {a}, {b}, {a, b} }
  1. (1 punto) Defina Lenguaje Formal.  
   Dado **V*: conjunto de todas las palabras, de cualquier longitud, que se pueden escribir con letras del alfabeto V**, decimos que un lenguaje L es todo subconjunto de V*.
  1. (1 punto) Defina autómata finito.  
   Es una 5-upla formada por:
      * **Q:** Conjunto finito de estados.
      * **V:** Vocabulario o alfabeto de entrada.
      * **δ:** Función de transición donde δ: Q x V ➜ Q
      * **q0:** Estado inicial.
      * **F:** Conjunto de estados finales. F ≠ Ø y F ⊂ Q

## Parte 3
  1. (1 punto) Defina algoritmo.  
      Secuencia de instrucciones que atiende una necesidad.
  1. (1 punto) Indique el paradigma de programación aplicado en primer año de la carrera.
      Paradigma Estructurado.
  1. (1 punto) Defina programación estructurada.  
   Es un paradigma de programación donde el objetivo es desarrollar programas de la forma más clara posible, solo utilizando **subrutinas** y tres estructuras de control.
  1. (1 punto) Indique las tres estructuras de control de flujo de ejecución de la programación estructurada.  
      * **Secuencia:** Se refiere al orden en la que las instrucciones de un programa son ejecutadas, tal y como se tienen en el programa.
      * **Selección:** Es la posibilidad de elegir entre dos instrucciones, donde la decisión se toma en base a la evaluación de una expresión binaria a la que llamamos condición.
      * **Iteración:** Es una estructura que se utiliza para repetir alguna instrucción o grupo de instrucciones siempre que se cumpla una condición.
  1. (1 punto) Indique las diferencias entre parámetro y argumento.  
    Ambos conceptos hacen referencia al input de una función. Un **parámetro** es una propiedad intrínseca de un procedimiento, dado que está incluido en su definición. Un **argumento** es un caso puntual de un parámetro, es decir, hace referencia al valor del parámetro.
  1. (1 punto) Explique las dos formas de transferencia de argumentos.  
      * **Por valor:** significa que la función trabaje con una copia del argumento, la misma ocupa lugar en memoria mientras la función se ejecuta.
      * **Por referencia:** significa que la función reciba la dirección de memoria del parámetro, de modo que dentro de la función acceda al mismo y pueda modificarlo. Esto también implica que la transferencia tenga un "costo" constante, porque la única memoria destinada al argumento es la que se necesita para almacenar su dirección de memoria.
  1. (1 punto) Explique las diferencias entre parámetros de entrada, de salida y de entrada/salida.  
      * **Entrada:** estos parámetros forman parte del dominio de la función, la operación de la misma dependerá de sus valores de entrada.
      * **Salida:** estos parámetros forman parte de la imagen de la función, son el resultado de la operación realizada.
      * **Entrada/Salida:** estos parámetros forman parte del dominio y de la imagen de la función a la vez, la función los recibe por referencia y los puede o no modificar. Al finalizar la operación son incluídos en el resultado.
  1. (1 punto) Defina tipo de dato abstracto.  
     Un tipo de dato es un **conjunto finito de operaciones** que pueden realizarse sobre un **conjunto finito o infinito de valores**.
     Decimos que es abstracto cuando no nos interesa su implementación.
  1. (1 punto) Indique las diferencias entre una pila y una cola.  
		* **Pila:** es una secuencia de elementos, donde las principales operaciones son:
	      * Push: agregar un elemento al principio de la secuencia.
	      * Pop: retirar el primer elemento de la secuencia.
	    * **Cola:** es una secuencia de elementos, donde las principales operaciones son:
	      * Queue: agregar un elemento al principio de la secuencia.
	      * Dequeue: retirar el último elemento de la secuencia.
  1. (1 punto) Defina archivo.  
     Un archivo es un grupo de datos estructurados que son almacenados y pueden ser usados por los programas. También es llamado fichero o file.
  1. (1 punto) Diseñe un algoritmo que dado un arreglo de naturales a y su longitud n calcule el promedio.  
     <img src="https://latex.codecogs.com/gif.latex?\dpi{120}&space;\bg_white&space;\bg_white&space;\small&space;\\c:Cantidad\,de\,numeros\,ingresados\,en\,total\,\in\mathbb{N}^{&plus;}{0}&space;\\A:Numeros\,\,ingresados\,\,en\,\,total&space;=&space;\left&space;\{\,(&space;a{1},&space;\,a_{2},\,&space;a_{3},\,...\,,\,a_{c})\right\}&space;\in&space;\mathbb{R}&space;^c&space;\\Promedio:A\rightarrow\mathbb{R}&space;/Promedio(x)\begin{cases}\0\&space;\&space;;&space;\&space;c=0\\\frac{\sum_{i=1}^{c}x_{i}}{c};&space;\;&space;e.o.c&space;\end{cases}\\" title="\bg_white \small \\c:Cantidad\,de\,numeros\,ingresados\,en\,total\,\in\mathbb{N}^{+}{0} \\A:Numeros\,\,ingresados\,\,en\,\,total = \left \{\,( a{1}, \,a_{2},\, a_{3},\,...\,,\,a_{c})\right\} \in \mathbb{R} ^c \\Promedio:A\rightarrow\mathbb{R} /Promedio(x)\begin{cases}\0\ \ ; \ c=0\\\frac{\sum_{i=1}^{c}x_{i}}{c}; \; e.o.c \end{cases}\\" />
