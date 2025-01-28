import * as readline from "readline";

readline.createInterface({ input : process.stdin})
.question("", (input: string) => {
  const [TeaNumber, ...numbers] = input.split(/\s+/).map(Number);
  console.log(numbers.filter(num => num === TeaNumber).length);
  process.exit();
});