import * as readline from "readline";
import { stdin as input } from "process";

let readLine: readline.Interface = readline.createInterface({ input });

readLine.question("", (input:string) =>{
  const lines: string[] = input.split(/\s+/);
  let numberOne: number = parseFloat(lines[0]);
  let numberTwo: number = parseFloat(lines[1]);
  let numberThree: number = parseFloat(lines[2]);

  let media = ( 2 * numberOne +  3 * numberTwo + 5 * numberThree) / 10;
  console.log(`MEDIA = ${media.toFixed(1)}`);

  readLine.close();
})