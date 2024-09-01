import * as readline from "readline";
import {stdin as input } from "process";

const readLine: readline.Interface = readline.createInterface({ input });

readLine.question("", (input:string) =>{
  const strToArr: string[] = input.split("/\s+/");
   let strToNum: number = parseFloat(strToArr[0]);

      if (strToNum >= 0 && strToNum <= 25.00){
        console.log("Intervalo [0,25]");
      }else if(strToNum >= 25.01 && strToNum <= 50.00){
        console.log("Intervalo (25,50]");
      } else if (strToNum >= 50.01 && strToNum <= 100.00){
        console.log("Intervalo (75,100]");
      } else { 
      console.log("Fora de intervalo");
      }
readLine.close();
})