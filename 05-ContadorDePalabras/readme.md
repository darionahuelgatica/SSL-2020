# Trabajo 5 - Contador de Palabras
## <ins> Arboles de expresión
### nl = nw = nc = 0
	
<img src='https://g.gravizo.com/svg?digraph%20G%20%7B%0A%20%20node%20%5Bshape%20%3D%20circle%5D%3B%0A%20%20ranksep%3D0.1%3B%0A%20%20nodesep%3D1.0%3B%0A%20%201%20%5B%20label%20%3D%20%22%3D%22%5D%3B%0A%20%201%20-%3E%20nl%3B%0A%20%202%20%5B%20label%20%3D%20%22%3D%22%5D%3B%0A%20%201%20-%3E%202%3B%0A%20%202%20-%3E%20nw%3B%0A%20%203%20%5B%20label%20%3D%20%22%3D%22%5D%3B%0A%20%202%20-%3E%203%3B%0A%20%203%20-%3E%20nc%3B%0A%20%203%20-%3E%200%3B%0A%7D' />

### c == ' ' || c == '\n' || c == '\t'
<img src='https://g.gravizo.com/svg?%20digraph%20G%20%7B%0A%20%20node%20%5Bshape%20%3D%20circle%5D%3B%0A%20%20ranksep%3D0.2%3B%0A%20%20nodesep%3D0.8%3B%0A%20%201%20%5B%20label%20%3D%20%22%7C%7C%22%5D%3B%0A%20%202%20%5B%20label%20%3D%20%22%3D%3D%22%5D%3B%0A%20%201%20-%3E%202%3B%0A%20%203%20%5B%20label%20%3D%20%22c%22%5D%3B%0A%20%202%20-%3E%203%3B%0A%20%204%20%5B%20label%20%3D%20%22%27%20%27%22%5D%3B%0A%20%202%20-%3E%204%3B%0A%20%205%20%5B%20label%20%3D%20%22%7C%7C%22%5D%3B%0A%20%206%20%5B%20label%20%3D%20%22%3D%3D%22%5D%3B%0A%20%201%20-%3E%205%3B%0A%20%205%20-%3E%206%3B%0A%20%207%20%5B%20label%20%3D%20%22c%22%5D%3B%0A%20%206%20-%3E%207%3B%0A%20%208%20%5B%20label%20%3D%20%22%27%5C%5Cn%27%22%5D%3B%0A%20%206%20-%3E%208%3B%0A%20%209%20%5B%20label%20%3D%20%22%3D%3D%22%5D%3B%0A%20%205%20-%3E%209%0A%20%2010%20%5B%20label%20%3D%20%22c%22%5D%3B%0A%20%2011%20%5B%20label%20%3D%20%22%27%5C%5Ct%27%22%5D%3B%0A%20%209%20-%3E%2010%3B%0A%20%209%20-%3E%2011%3B%0A%7D' />

## <ins> Máquina de estados
<img src='https://g.gravizo.com/svg?digraph%20G%20%7B%0A%09rankdir%3DLR%3B%0A%09node%20%5Bshape%20%3D%20doublecircle%5D%3B%20OUT%20IN%20%0A%09OUT%20-%3E%20IN%20%5B%20label%20%3D%20%22otro%5Cn%2B%2Bnw%5Cn%2B%2Bnc%20%22%20%5D%3B%0A%09OUT%20-%3E%20OUT%20%5B%20label%20%3D%20%22%27%5C%5Cn%27%5Cn%2B%2Bnl%5Cn%2B%2Bnc%20%22%20%5D%3B%0A%09OUT%20-%3E%20OUT%20%5B%20label%20%3D%20%22%27%5C%5Ct%27%7C%27%20%27%5Cn%2B%2Bnc%20%22%20%5D%3B%0A%09IN%20-%3E%20IN%20%5B%20label%20%3D%20%22otro%5Cn%2B%2Bnc%20%22%20%5D%3B%0A%09IN%20-%3E%20OUT%20%5B%20label%20%3D%20%22%27%5C%5Ct%27%7C%27%20%27%5Cn%2B%2Bnc%20%22%20%5D%3B%0A%09IN%20-%3E%20OUT%20%5B%20label%20%3D%20%22%27%5C%5Cn%27%5Cn%2B%2Bnc%5Cn%2B%2Bnl%20%22%20%5D%3B%0A%7D' />

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
