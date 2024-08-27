import * as readline from "readline";
import {stdin as input} from "process";

const readLine: readline.Interface = readline.createInterface({ input });

readLine.question("",(input:string) =>{
   let inputs: string[] = input.split(/\s+/);

   let numberOne: number = parseInt(inputs[0]);
   let numberTwo: number = parseInt(inputs[1]);
   let numberThree: number = parseInt(inputs[2]);

   let big: number = (numberOne + numberTwo + Math.abs(numberOne - numberTwo)) / 2;

   let biggest = (big + numberThree+ Math.abs(big - numberThree)) / 2;

   console.log(`${biggest} eh o maior`);

   readLine.close();
})