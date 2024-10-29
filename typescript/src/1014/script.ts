import * as readline from "readline/promises";
import { stdin as input } from "process";

const rl: readline.Interface = readline.createInterface({ input })

async function Consumption(){
     const input:string = await rl.question('');
     rl.close();
     let [numberOne, numberTwo] = input.split(/\s+/).map(Number);
     if(isNaN(numberOne) || isNaN(numberTwo)){
        throw new Error(`Unavailable numbers`);
     }
     const consumption = (numberOne / numberTwo).toFixed(3);
     console.log(`${consumption.trim()} km/l`);
}

Consumption();

/* const { readFile } = require("fs/promises");

async function readInput(input:string): Promise<string> {

    try{
         let path = await readFile(input, "utf-8");
         let [numberOne, numberTwo] = path.split(/\s+/).map(Number);
          if (isNaN(numberOne) || isNaN(numberTwo)) {
                throw new Error("O arquivo deve conter dois números válidos.");
          } 
            let kilometers:string = `${(numberOne / numberTwo).toFixed(3)} km/l `;
            return kilometers.trim();
   
    } catch(erro: any) {
         throw new Error(`Erro ao ler ${erro.message}`);
    }
}

readInput("/dev/stdin")
    .then((content) => {
        console.log(content)
    })
    .catch((error) => {
        console.log(`${error.message}`)
    }); */