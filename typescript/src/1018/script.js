"use strict";
//let input : string = require("fs").readFileSync("/dev/stdin", "utf-8");
//let lines : string[] = input.split("\n"); //for beecrowd;
Object.defineProperty(exports, "__esModule", { value: true });

var readline = require("readline");
var process = require("process");

var rl = readline.createInterface({
     input: process.stdin,
     output: process.stdout 
});

rl.question("", function (input) {

    var lines = input.split("\n");
    var money = parseInt(lines[0]);
    console.log(money);
    
    var nota100 = Math.floor(money / 100);
    console.log("".concat(nota100, " nota(s) R$ 100,00"));
    money %= 100;

    var nota50 = Math.floor(money / 50);
    console.log("".concat(nota50, " nota(s) R$ 50,00"));
    money %= 50;

    var nota20 = Math.floor(money / 20);
    console.log("".concat(nota20, " nota(s) R$ 20,00"));
    money %= 20;

    var nota10 = Math.floor(money / 10);
    console.log("".concat(nota10, " nota(s) R$ 10,00"));
    money %= 10;

    var nota5 = Math.floor(money / 5);
    console.log("".concat(nota5, " nota(s) R$ 5,00"));
    money %= 5;

    var nota2 = Math.floor(money / 2);
    console.log("".concat(nota2, " nota(s) R$ 2,00"));
    money %= 2;

    var nota1 = Math.floor(money / 1);
    console.log("".concat(nota1, " nota(s) R$ 1,00"));

    rl.close();
});
