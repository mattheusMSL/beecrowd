import * as readline from "readline";
const readLine: readline.Interface = readline.createInterface({ input: process.stdin});

readLine.question("", (input: string) => {
  let lines: string[] = input.split(/\s+/);
  let numberPartOne: number = parseInt(lines[1]);
  let numberPartTwo: number = parseInt(lines[4]);
  let valuePartOne: number = parseFloat(lines[2]);
  let valuePartTwo: number = parseFloat(lines[5]);

  const priceToPay = (numberPartOne: number, valuePartOne: number ): number => {
    return numberPartOne * valuePartOne;
  }
  let price: number = priceToPay(numberPartOne, valuePartOne) + priceToPay(numberPartTwo, valuePartTwo);
  console.log(`VALOR A PAGAR: R$ ${price.toFixed(2)}`);
  readLine.close();
})