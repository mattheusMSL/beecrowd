import * as readline from "readline";
import { stdin as input } from "process";

const readLine: readline.Interface = readline.createInterface({ input });

readLine.question("", (input:string) => {
    let lines: string[] = input.split(" ");
    let numberOne: number = parseInt(lines[0]);
    let numberTwo: number = parseInt(lines[1]);
    numberTwo % numberOne == 0 || numberOne % numberTwo == 0 ? console.log("Sao Multiplos") : console.log("Nao sao Multiplos");
    readLine.close();
});