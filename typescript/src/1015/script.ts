import * as readline from "readline/promises";// importa a biblioteca do readline
import {stdin as input } from "process" // importa o stdin de usuario como input da biblioteca process 

/*criamos uma variável que é do tipo readline interface que cria uma interface que recebe um input do usuario e fica armazenado nesse input, ou seja ela captura entradas e saidas de dados */
const rl: readline.Interface = readline.createInterface({ input }); 

/* essa função faz o calculo da distancia entre dois pontos, que basicamente recebe 4 dados em string depois separa deles em um array de string e transforma eles em numeros de dupla presisão, divide em 4 variaveis de X e Y e faz e cálcula a distancia depois imprime o resultado com 4 números após a virgula*/

async function distanceBetweenTwoPoints(){
   let numberOneToStr: string = await rl.question("");
   rl.close();
   let lines: number[] = numberOneToStr.split(/\s+/).map(Number);
   let numberX: number = lines[0];
   let numberY: number = lines[1];
   let numberX1: number = lines[2];
   let numberY1: number = lines[3];
   
   const distance = Math.sqrt(Math.pow((numberX1 - numberX), 2) + Math.pow((numberY1 - numberY), 2));
   console.log(distance.toFixed(4))
}

distanceBetweenTwoPoints();