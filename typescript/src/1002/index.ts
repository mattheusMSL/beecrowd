import * as readline from "readline";
import {stdin as input } from "process";

let readLine : readline.Interface = readline.createInterface({ input });

readLine.question("", (input: string) => {
  let lines: string[] = input.split("/\s+/");
  let pi: number = 3.14159;
  let raio: number = parseFloat(lines[0]);
  let area = pi * Math.pow(raio, 2);
  console.log(`A=${area.toFixed(4)}`);
  readLine.close();
})