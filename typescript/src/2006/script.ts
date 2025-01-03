import * as readline from "readline";
const readLine: readline.Interface = readline.createInterface({ input : process.stdin});

readLine.question("", (input: string) => {
  let lines: string[] = input.split(/\s+/);
  let teaNumber: number = parseInt(lines[0]);
  let numbers: number[] = lines.slice(1, 6).map(Number); 
  let result = numbers.reduce((count, num) => count + (num === teaNumber ? 1 : 0), 0);
  console.log(result);
  readLine.close();
})