import * as readline from "readline";
const readLine: readline.Interface = readline.createInterface({ input: process.stdin});

readLine.question("", (input: string) => {
  let lines: string[] = input.split(/\s+/);
  let employeeName:string = input[0];
  let salary: number = parseFloat(lines[1]);
  let sales: number = parseFloat(lines[2]);
  let total: number = (0.15 * sales) + salary; 
  console.log(`TOTAL = R$ ${total.toFixed(2)}`)
  readLine.close();
})