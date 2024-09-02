import * as readline from "readline";

const readLine: readline.Interface = readline.createInterface({ input: process.stdin });

readLine.on("line", (input:string) => {
  let lines: string[] = input.split(/\s+/);

  let nota1: number = parseFloat(lines[0]);
  let nota2: number = parseFloat(lines[1]);

  let peso1: number = 3.5;
  let peso2: number = 7.5;
   
  let media: number =  (peso1 * nota1 + peso2 * nota2) / (peso1 + peso2);

  console.log(nota2, nota1);
  console.log(`MEDIA = ${media.toFixed(5)}`);

  readLine.close();
})

