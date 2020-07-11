# Trabajo 5 - Contador de Palabras
## <ins> Arboles de expresión
### nl = nw = nc = 0
<img src='https://g.gravizo.com/svg?
 digraph G {
  node [shape = circle];
  ranksep=0.1;
  nodesep=1.0;
  1 [ label = "="];
  1 -> nl;
  2 [ label = "="];
  1 -> 2;
  2 -> nw;
  3 [ label = "="];
  2 -> 3;
  3 -> nc;
  3 -> 0;
}'/>

### c == ' ' || c == '\n' || c == '\t'
<img src='https://g.gravizo.com/svg?
 digraph G {
  node [shape = circle];
  ranksep=0.2;
  nodesep=0.8;
  1 [ label = "||"];
  2 [ label = "=="];
  1 -> 2;
  3 [ label = "c"];
  2 -> 3;
  4 [ label = "%27 %27"];
  2 -> 4;
  5 [ label = "||"];
  6 [ label = "=="];
  1 -> 5;
  5 -> 6;
  7 [ label = "c"];
  6 -> 7;
  8 [ label = "%27\\n%27"];
  6 -> 8;
  9 [ label = "=="];
  5 -> 9
  10 [ label = "c"];
  11 [ label = "%27\\t%27"];
  9 -> 10;
  9 -> 11;
}'/>

## <ins> Máquina de estados
<img src='https://g.gravizo.com/svg?digraph G {
	rankdir=LR;
	node [shape = doublecircle]; OUT IN 
	OUT -> IN [ label = "otro\n++nw\n++nc " ];
	OUT -> OUT [ label = "%27\\n%27\n++nl\n++nc " ];
	OUT -> OUT [ label = "%27\\t%27|%27 %27\n++nc " ];
	IN -> IN [ label = "otro\n++nc " ];
	IN -> OUT [ label = "%27\\t%27|%27 %27\n++nc " ];
	IN -> OUT [ label = "%27\\n%27\n++nc\n++nl " ];
}'/>

### **A = (Q, ∑, T, q0, F)**
### Donde:

* **Q**  = {IN, OUT}
* **∑**  = ASCII
* **q0** = OUT
* **F**  = {IN, OUT} = **Q**
* **T**  =  { 
  * (OUT, '\n', OUT, (++nl; ++nc )), 
  * (OUT, '\t' | ' ', OUT, ++nc ),
  * (OUT, otro, IN, (++nc; ++nw )),
  * (IN, otro, IN, ++nc),
  * (IN, '\n', OUT, (++nl; ++nc )),
  * (IN, ' ' | '\t', OUT, ++nc)
* }

## <ins> Respuestas

## 1.ii Ventajas y desventajas de wc-1-enum-switch.c y de la versión de Kernighan & Ritchie

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