import * as readline from "readline";

const readLine: readline.Interface = readline.createInterface({ input : process.stdin});

readLine.question("", (input: string) => {
  let lines: string[] = input.split(/\s+/);
  let t1: number = parseInt(lines[0]);
  let t2: number = parseInt(lines[1]);
  let t3: number = parseInt(lines[2]);
  let t4: number = parseInt(lines[3]);
  (t1 >= 1 || t1 <= 6) ? t1 -= 1 : t1;
  (t2 >= 1 || t2 <= 6) ? t2 -= 1 : t2;
  (t3 >= 1 || t3 <= 6) ? t3 -= 1 : t3;
  let tomadas: number = t1 + t2 + t3 + t4;
  console.log(`${tomadas}`);
  
  /* versão reduzida do problema
  let numbers: number[] = lines.slice(0,4).map(Number);
  let tomad: number = numbers.reduce((count, num) => count + (num >= 1 || num <= 6 ? num -= 1 : num), 1); 
  console.log(tomadas); 
  */ 
  readLine.close();
})