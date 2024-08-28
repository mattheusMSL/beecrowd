// Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

// Entrada
// Leia três valores de ponto flutuante (double) A, B e C.

// Saída
// Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.

import * as readline from "readline";
import { stdin as input } from "process";

const readLine: readline.Interface = readline.createInterface({ input });

readLine.question("", (input: string) => {

 const numberStr: string[] = input.split(" ");

  let numberA: number = parseFloat(numberStr[0]);
  let numberB: number = parseFloat(numberStr[1]);
  let numberC: number = parseFloat(numberStr[2]);

  let delta: number = Math.pow(numberB, 2) - 4 * numberA * numberC;

  if (numberA === 0 || delta < 0){
    console.log("Impossivel calcular");
  } else {
    let raiz: number = Math.sqrt(delta);
    let R1: number = (-numberB + raiz) / (2 * numberA);
    let R2: number = (-numberB - raiz) / (2 * numberA);
    console.log(`R1 = ${R1.toFixed(5)}`);
    console.log(`R2 = ${R2.toFixed(5)}`);

  }
  
 



 readLine.close();
})