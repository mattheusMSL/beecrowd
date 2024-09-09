import * as readline from 'readline';
import { stdin as input } from "process";

const rl : readline.Interface = readline.createInterface({ input });

rl.question("", (input: string) => {
let lines: string[] = input.split(/\s+/);

let numberA: number = parseFloat(lines[0]);
let numberB: number = parseFloat(lines[1]);
let numberC: number = parseFloat(lines[2]);

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

readline.close();

})