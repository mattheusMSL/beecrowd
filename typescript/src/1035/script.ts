import * as readline from "readline";
import { stdin as input, stdout as output } from "process";

let readLine: readline.Interface = readline.createInterface({ input, output});

readLine.question("", (input: string) => {

   let lines:string[] = input.split(/\s+/);

   let a : number = parseInt(lines[0]);
   let b: number = parseInt(lines[1]);
   let c: number = parseInt(lines[2]);
   let d: number = parseInt(lines[3]);

   if(b > c && d > a && (c + d) > (a + b) && c > 0 && d > 0 && a % 2 == 0){
    console.log("Valores aceitos");
   } else {
    console.log("Valores nao aceitos");
   }
   readLine.close();
})

