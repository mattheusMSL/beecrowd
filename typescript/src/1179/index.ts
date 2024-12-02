import * as readline from "readline";
import { stdin as input} from "process";

const rl:readline.Interface = readline.createInterface({ input });

rl.question(" ", (input:string) => {
   const numbers: number[] = input.split(' ').map(Number).slice(0,15);
   for(let i = 0; i < 15; i++){   
      console.log(numbers[i]);
   }
  rl.close();
});