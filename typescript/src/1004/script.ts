import * as readline from "readline"
const readLine: readline.Interface = readline.createInterface({ input: process.stdin });
readLine.question("", (input: string) =>{
  input.trim();
  let lines: string[] = input.split(/\s+/);
  let numberOne: number = parseInt(lines[0]);
  let numberTwo: number = parseInt(lines[1]);
  let prod: number = numberOne * numberTwo;
  console.log("PROD = %d", prod);
  readLine.close();
})