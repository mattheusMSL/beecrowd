import * as readline from "readline";
import { stdin as input } from "process";

let readLine: readline.Interface = readline.createInterface({ input });

readLine.question("", (input:string) =>{
  const lines: string[] = input.split(/\s+/);
  let numberOne: number = parseInt(lines[0]);
  let numberTwo: number = parseInt(lines[1]);
  let numberThree: number = parseInt(lines[2]);
  let numberFour: number = parseInt(lines[3]);
  let diferenca = (numberOne * numberTwo - numberThree * numberFour);
  console.log(`DIFERENCA = ${diferenca}`);
  readLine.close();
})