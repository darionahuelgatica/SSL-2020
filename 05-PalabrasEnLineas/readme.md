# Trabajo 5 - Contador de Palabras
## <ins> Arboles de expresión
### nl = nw = nc = 0
	
<img src='https://g.gravizo.com/svg?digraph%20G%20%7B%0A%20%20node%20%5Bshape%20%3D%20circle%5D%3B%0A%20%20ranksep%3D0.1%3B%0A%20%20nodesep%3D1.0%3B%0A%20%201%20%5B%20label%20%3D%20%22%3D%22%5D%3B%0A%20%201%20-%3E%20nl%3B%0A%20%202%20%5B%20label%20%3D%20%22%3D%22%5D%3B%0A%20%201%20-%3E%202%3B%0A%20%202%20-%3E%20nw%3B%0A%20%203%20%5B%20label%20%3D%20%22%3D%22%5D%3B%0A%20%202%20-%3E%203%3B%0A%20%203%20-%3E%20nc%3B%0A%20%203%20-%3E%200%3B%0A%7D' />

### c == ' ' || c == '\n' || c == '\t'
<img src='https://g.gravizo.com/svg?%20digraph%20G%20%7B%0A%20%20node%20%5Bshape%20%3D%20circle%5D%3B%0A%20%20ranksep%3D0.2%3B%0A%20%20nodesep%3D0.8%3B%0A%20%201%20%5B%20label%20%3D%20%22%7C%7C%22%5D%3B%0A%20%202%20%5B%20label%20%3D%20%22%3D%3D%22%5D%3B%0A%20%201%20-%3E%202%3B%0A%20%203%20%5B%20label%20%3D%20%22c%22%5D%3B%0A%20%202%20-%3E%203%3B%0A%20%204%20%5B%20label%20%3D%20%22%27%20%27%22%5D%3B%0A%20%202%20-%3E%204%3B%0A%20%205%20%5B%20label%20%3D%20%22%7C%7C%22%5D%3B%0A%20%206%20%5B%20label%20%3D%20%22%3D%3D%22%5D%3B%0A%20%201%20-%3E%205%3B%0A%20%205%20-%3E%206%3B%0A%20%207%20%5B%20label%20%3D%20%22c%22%5D%3B%0A%20%206%20-%3E%207%3B%0A%20%208%20%5B%20label%20%3D%20%22%27%5C%5Cn%27%22%5D%3B%0A%20%206%20-%3E%208%3B%0A%20%209%20%5B%20label%20%3D%20%22%3D%3D%22%5D%3B%0A%20%205%20-%3E%209%0A%20%2010%20%5B%20label%20%3D%20%22c%22%5D%3B%0A%20%2011%20%5B%20label%20%3D%20%22%27%5C%5Ct%27%22%5D%3B%0A%20%209%20-%3E%2010%3B%0A%20%209%20-%3E%2011%3B%0A%7D' />

## <ins> Máquina de estados
<img src='https://g.gravizo.com/svg?digraph%20finite_state_machine%20{rankdir=LR;ranksep=4;nodesep=1;node%20[shape%20=%20doublecircle,%20color=%22indigo%22];%20OUT%20IN;OUT%20-%3E%20OUT%20[%20label%20=%20%22%27%20%27%20||%20%27\\t%27%20||%20%27\\n%27%22%20%20color=%22grey24%22%20];OUT%20-%3E%20IN%20[%20label%20=%20%22otro\nputchar%28\%27\c\%27%29;%22%20color=%22grey24%22%20];IN%20-%3E%20IN%20[%20label%20=%20%22otro\nputchar%28\%27\c\%27%29;%22%20color=%22grey24%22%20];IN%20-%3E%20OUT%20[%20label%20=%20%22%27%20%27%20||%20%27\\t%27%20||%20%27\\n%27\nputchar%28\%27\\n\%27%29;%22%20color=%22grey24%22%20];}' />

### **A = (Q, ∑, T, q0, F)**
### Donde:

* **Q**  = {IN, OUT}
* **∑**  = ASCII
* **q0** = OUT
* **F**  = {IN, OUT} = **Q**
* **T**  =  { 
  * (OUT, '\n' | '\t' | ' ', OUT, ),
  * (OUT, otro, IN, putchar('c')),
  * (IN, '\n' | '\t' | ' ', OUT, putchar('\n') ),
  * (IN, otro, IN, putchar('c')),
* }

## <ins> Respuestas

## 1.ii Ventajas y desventajas de wl-1-enum-switch.c y de la versión de Kernighan & Ritchie

#### Versión enum y switch
<ins> Ventajas:
  * c y s se representan con **tipos de datos** relacionados directamente con las **responsabilidades** de dichas variables. Esto implica una semántica mejor definida o más cercana al lenguaje natural.
  * Los casos del switch se parecen a las trancisiones de la Máquina de Estados.
  * El código resultante se asimila al gráfico de la Máquina de Estados, lo que facilita establecer una relación entre ambos. Esto aporta, entre otras ventajas, la oportunidad desarrollar un software capaz de armar el gráfico en base al código o viceversa.

<ins> Desventajas:
  * Redundancia: la expresión "s = Out;" se repite muchas veces. En este caso no es una desventaja mayor, pero en términos de escalabilidad podría agravarse.
  * El programa podría trabajar sólo con el tipo de dato **int**, sería un poco más simple aunque menos legible.
  * Existe un pequeño trabajo extra al tener que definir una variable del tipo enum, que no existe cuando la misma es del tipo int. Dependerá del contexto ver si esto es una desventaja mayor o menor.

#### Versión Kernighan & Ritchie:
<ins> Ventajas:
  * El código es más corto.
  * Se trabaja sólo con variables del tipo **int**, esto aporta simplicidad al desarrollar.
  * Trabajamos con la directiva **define**, que nos permite una semántica más clara y abstracta en su uso.

<ins> Desventajas:
  * El código final difiere bastante del gráfico de la Máquina de estados. Nos perdemos la oportunidad mencionada en las ventajas de la versión anterior.
  * Si bien fue mencionado que usar sólo variables del tipo int hace que el desarrollo sea más simple, la semántica resultante es menos abstracta. Esta práctica puede obstaculizar el mantenimiento de los softwares que se desarrollen así.
  * Si bien fue mencionado que usar **define** es una ventaja, también es una directiva que va quedando un poco obsoleta. Hoy en día es muy común usar constantes o enums. Dado que gracias a los nuevos compiladores tanto define como las constantes terminan siendo lo mismo luego de la compilación, y que las constantes permiten desarrollar como si usáramos una variable en lugar de un valor, no hay motivos concretos seguir usando define en términos generales.
  * Existe una pequeña reduncancia para el caso de **c == '\n'**

## 3.b.iv  ¿Tiene alguna aplicación go to hoy en día? ¿Algún lenguaje moderno lo utiliza?

Varios lenguajes modernos permiten utilizar go to, entre ellos C, C++ y PHP (lo más curioso de este último caso es que inicialmente su léxico no incluía esta expresión y la incorporó en 2009).
La principal aplicación de goto esta "escondida", se trata de que muchas expresiones muy comunes (for, por ejemplo) en muchos lenguajes se traducen en secuencias de expresiónes que incluyen goto (sin que el programador se entere).
Goto tiene su fama de "expresión peligrosa" por haber causado muchos problemas en el pasado ya que su uso es muy riesgoso. Si bien es cierto que, gracias a todas las cláusulas ya existentes (for, break, return, etc) nunca sería estrictamente necesario su uso y cualquier algoritmo debería poder implementarse sin goto. Aún así, se dice que es útil para algunos escenarios que se presentan dentro la programación estructurada. Entre ellos algunos son:
  * Salir inmediatamente de una función de forma limpia y rápida. En algunos casos esto puede hacerse con un return, pero en otros habría que "concatenar returns" y con un goto se simplificaría.
  * En entornos de desarrollo que no provean manejo de excepciones o errores, es útil para "escapar" en caso de error hacia una rutina predefinida.
  * Para optimizar tiempos de ejecución a bajo nivel. Goto es muy veloz en tiempo de ejecución, permitiendo acelerar los algoritmos del código. Esto es un arma de doble filo porque los compiladores típicos no pueden optimizarlo.