import * as readline from "readline/promises";
import {stdin as input } from "process";

const rl: readline.Interface = readline.createInterface({ input })

async function gasSpent(): Promise<number>{
   let input:string = await rl.question('');
   rl.close();
   let [tripHour, speedAvarage] = input.split(/\s+/).map(Number);
   const literSpent: number = (tripHour * speedAvarage)/ 12;
  return parseFloat(literSpent.toFixed(3));
}
gasSpent()
      .then((content) => {
         console.log(content)
      }).catch((error) => {
         throw new Error(error.message);
      });

