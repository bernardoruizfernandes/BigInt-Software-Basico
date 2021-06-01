<h1>Inteiros Grandes</h1>

Trabalho de Software Básico (INF1018)

<br>
<p align="center">
 <a href="#objetivo">Objetivo </a> |
 <a href="#dados">Dados </a> | 
 <a href="#desenvolvimento">Desenvolvimento </a> |
</p>


### Objetivo

O objetivo do trabalho é implementar, na linguagem C, uma biblioteca que permita representar valores inteiros signed de 128 bits, e ofereça algumas operações aritméticas básicas sobre esses valores (soma, subtração, multiplicação, negação) e operações de deslocamento de bits.



### Dados 

   * Linguagem utilizada: ```C ```
   * Definição do BigInt: ```#define NUM_BITS 128 typedef unsigned char BigInt[NUM_BITS/8];```
   * Enunciado em: ```enunciado.pdf```


### Desenvolvimento 

1. As primeiras funções feitas no desenvolver do trabalho foram a ```dump()``` e ```big_val()```, que são funções para criar o Inteiro Grande. 
2. Em seguida, o processo foi criar a ```big_shl()``` e a ```big_shr()``` que permitem o shift dos bits do Inteiro Grandes, que são funções parecidas, por isso feito juntas. 
3. Com o shift lógico feito o passo seguinte era fazer o shift aritmético, logo a ```big_sar()``` foi feita com base na ```big_shr()``` com suas devidas alterações para o funcionamento do shit aritmético.
4. O próximo passo foi seguir para as operações aritméticas. A primeira feita foi a de soma: ```big_sum()```, com um desenvolvimento simples. 
5. Logo em seguida, foi feita a de inverter o Inteiro Grande, a ```big_comp2()```, que utiliza da função de soma para seu desenvolvimento.
6. Com a soma e a inversão de Inteiros Grandes foi simples realizar a subtração. Já que a ```big_sub()```basta somar os numeros sendo o segundo deles invertido. 
7. Por fim, foi deixado a função mais complicada, a de multiplicação: ```big_mul()```. Dentro da multiplicação temos chamadas para o shift logico para esquerda e soma. 
