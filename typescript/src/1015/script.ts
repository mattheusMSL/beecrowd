import * as readline from "readline/promises";
import {stdin as input } from "process"

const rl: readline.Interface = readline.createInterface({ input });

async function distanceBetweenTwoPoints(){
   let numberOneToStr: string = await rl.question("");
   rl.close();
   let lines: number[] = numberOneToStr.split(/\s+/).map(Number);
   let numberX: number = lines[0];
   let numberY: number = lines[1];
   let numberX1: number = lines[2];
   let numberY1: number = lines[3];
   
   const distance = Math.sqrt(Math.pow((numberX1 - numberX), 2) + Math.pow((numberY1 - numberY), 2));

   console.log(distance.toFixed(4))
}

distanceBetweenTwoPoints();