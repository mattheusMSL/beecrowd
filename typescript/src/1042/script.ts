import * as readline from "readline";
import { stdin as input } from "process";

const readLine: readline.Interface = readline.createInterface({input});

readLine.question("", (input : string) =>{
  let lines: string[] = input.split(' ');

  let numberOne: number, numberTwo: number, numberThree: number;

  const numbers: number[] = lines.map(Number);

  if (input) {
    [numberOne, numberTwo, numberThree] = numbers;

    if (numberOne < numberTwo && numberOne < numberThree) {
        console.log(numberOne);
        if (numberThree < numberTwo) {
            console.log(numberThree);
            console.log(numberTwo);
        } else {
            console.log(numberTwo);
            console.log(numberThree);
        }
    } else if (numberTwo < numberOne && numberTwo < numberThree) {
        console.log(numberTwo);
        if (numberThree < numberOne) {
            console.log(numberThree);
            console.log(numberOne);
        } else {
            console.log(numberOne);
            console.log(numberThree);
        }
    } else {
        console.log(numberThree);
        if (numberOne < numberTwo) {
            console.log(numberOne);
            console.log(numberTwo);
        } else {
            console.log(numberTwo);
            console.log(numberOne);
        }
    }
    console.log();
    console.log(numberOne);
    console.log(numberTwo);
    console.log(numberThree);
}

readLine.close();
});