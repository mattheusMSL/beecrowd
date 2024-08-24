//let input : string = require("fs").readFileSync("/dev/stdin", "utf-8");
//let lines : string[] = input.split("\n"); //for beecrowd;

import * as readline from 'readline';
import { stdin as input, stdout as output } from "process";

const rl : readline.Interface = readline.createInterface({ input, output});

rl.question("", (input: string) => {

  let lines: string[] = input.split("\n")

  let money : number = parseInt(lines[0]);

  console.log(money);
  
  let nota100: number = Math.floor(money/100);
  
  console.log(`${nota100} nota(s) de R$ 100,00`);
  
  money %= 100;
  
  let nota50 : number = Math.floor(money/50);
  
  console.log(`${nota50} nota(s) de R$ 50,00`);
  
  money %= 50;
  
  let nota20 : number = Math.floor(money/20);
  
  console.log(`${nota20} nota(s) de R$ 20,00`);
  
  money %= 20;
  
  let nota10 : number = Math.floor(money/10);
  
  console.log(`${nota10} nota(s) de R$ 10,00`);
  
  money %= 10;
  
  let nota5 : number = Math.floor(money/5);
  
  console.log(`${nota5} nota(s) de R$ 5,00`);
  
  money %= 5;
  
  let nota2 : number = Math.floor(money/2);
  
  console.log(`${nota2} nota(s) de R$ 2,00`);
  
  money %= 2;
  
  let nota1 : number = Math.floor(money/1);
  
  console.log(`${nota1} nota(s) de R$ 1,00`);

  rl.close();
})
