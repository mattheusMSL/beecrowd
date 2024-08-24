import * as readline from "readline";
import { stdin as input, stdout as output } from "process";

const readLine: readline.Interface = readline.createInterface({
  input, output
});

readLine.question("", (input : string) => {

// let input: string = require("fs").readFileSync("/dev/stdin", "utf8");
// let lines: string[] = input.split(/\s+/); for beecrowd use "\n" in the console.log

    let number : string[] = input.split(/\s+/);
    
    let number1: number = parseInt(number[0]);
    let number2: number = parseInt(number[1]);

    const result: number = number1 + number2;

    console.log(`X = ${result}`);

  readLine.close();
});