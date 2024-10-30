import * as readline from "readline";
import { stdin as input } from "process";

const rl: readline.Interface = readline.createInterface({ input });

rl.on('line', (input:string) => {
    const lines:string[] = input.split(' ');
    let carAvarageSpeed: number = parseInt(lines[0]);
    const distance:number = carAvarageSpeed * 2;
    console.log(distance + " minutos");
    rl.close();
})