# Contador de palabras, caracteres y espacios en blanco.

## El siguiente autómata (A) representa nuestro algoritmo:
<img src="https://raw.githubusercontent.com/darionahuelgatica/SSL/master/SVG/TP5-ContadorPalabras.svg?sanitize=true">

## También se puede expresar como la siguiente **n-upla**:

## **A = (Q, ∑, T, q0, F)**

### Donde:

* **Q**  = {IN, OUT}
* **∑**  = ASCII
* **q0** = OUT
* **F**  = {IN, OUT} = **Q**
* **T**  =  { OUT → **'\n'** → OUT $~$ ; $~$ OUT → **''** → OUT $~$ ; $~$ OUT → **'\t'** → OUT $~$ ; $~$ OUT → **otro** → IN $~$ ;
            <br /> IN → **'\t'** → OUT $~$ ; $~$ IN → **'\t'** → OUT $~$ ; $~$ IN → **'\t'** → OUT }
* **T**  =  { 
  * (OUT, '\n', OUT, (++nl; ++nc )), 
  * (OUT, '\t' | ' ', OUT, ++nc ),
  * (OUT, otro, IN, (++nc; ++nw )),
  * (IN, otro, IN, ++nc),
  * (IN, '\n', OUT, (++nl; ++nc )),
  * (IN, ' ' | '\t', OUT, ++nc)
* }