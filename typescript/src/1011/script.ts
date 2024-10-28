import * as readline from "readline";
import { stdin as input } from "process"

const readLine: readline.Interface = readline.createInterface({ input });

readLine.question("", (input:string) => {
  let lines: string[] = input.split(/\s+/);  
  let r: number = Number(lines[0]); 
  let PI: number = 3.14159;
  let raio: number = (((4.0/3) * PI) * Math.pow(r,3));  
  console.log(`VOLUME = ${raio.toFixed(3)}`);

 readLine.close();
});

