import * as readline from "readline";
import{ stdin as input, stdout as output} from "process" 

const readLine: readline.Interface = readline.createInterface({ input, output });

readLine.question("", (input: string) => {
  let ageInDays: number = parseInt(input);

  const years: number = Math.floor(ageInDays / 365);
  ageInDays %= 365;

  const months: number = Math.floor(ageInDays / 30);
  ageInDays %= 30;

  const days: number = ageInDays;

  console.log(`${years} ano(s)`);
  console.log(`${months} mes(es)`);
  console.log(`${days} dia(s)`);

  readLine.close();
});
