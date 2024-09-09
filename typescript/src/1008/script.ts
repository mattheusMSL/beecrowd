import * as readline from "readline";

const readLine: readline.Interface = readline.createInterface({ input: process.stdin});

readLine.question("", (input: string) => {
  let lines: string[] = input.split(/\s+/);
  let employeeNumber: number = parseInt(lines[0]);
  let workedHours: number = parseInt(lines[1]);
  let employeeEarnPerHour: number = parseFloat(lines[2]);
  console.log(`NUMBER = ${employeeNumber}`);
  let employeeSalary: number = workedHours * employeeEarnPerHour;
  console.log(`SALARY = U$ ${employeeSalary.toFixed(2)}`);
  readLine.close();
})