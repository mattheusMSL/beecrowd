import * as readline from "readline";
import { stdin as input } from "node:process";

const readLine: readline.Interface = readline.createInterface({ input });

readLine.question("", (input:string) => {
  let lines: string[] = input.split(/\s+/);
  let numberOne: number = parseFloat(lines[0]);
  let numberTwo: number = parseFloat(lines[1]);
  let numberThree: number = parseFloat(lines[2]);
  let triangulo: number = (numberOne * numberThree) / 2;
  console.log(`TRIANGULO: ${triangulo.toFixed(3)}`);
  let PI: number = 3.14159;
  let circulo:number = PI * Math.pow(numberThree, 2); 
  console.log(`CIRCULO: ${circulo.toFixed(3)}`);
  let trapezio: number =  ((numberOne + numberTwo) * numberThree) / 2;
  console.log(`TRAPEZIO: ${trapezio.toFixed(3)}`);
  let quadrado: number = Math.pow(numberTwo, 2);
  console.log(`QUADRADO: ${quadrado.toFixed(3)}`);
  let retangulo: number = numberOne * numberTwo;
  console.log(`RETANGULO: ${retangulo.toFixed(3)}`);
  readLine.close();
});