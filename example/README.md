# example

## El Problema

Queremos construir una calculadora, que dados dos números enteros calcule la suma (s), la resta (r) o el producto (p) de los mismos.

## Entrada

La primera línea de la entrada contendrá un entero, N, que indica el número de casos de prueba existentes.

A continuación vienen N líneas, cada una de las cuales contiene un caso de prueba. El caso contiene tres valores: L, N, M. L es una letra, que puede valer s, r o p, según queramos calcular la suma, resta o el producto, respectivamente. Los valores N y M son dos enteros (positivos o negativos) sobre los que queremos operar.

## Salida

Para cada caso de prueba, el resultado será una línea que contiene un entero con el resultado de la operación. Si en el caso L vale s, el resultado es N+M; si vale r será N-M; y si vale p será N*M.

## Ejemplo de Entrada

```
4
s 91 81
r 100 75
p -8 50
s 29 -88
```

## Ejemplo de Salida
```
172
25
-400
-59
```
