"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var readline = require("readline");
var process_1 = require("process");
var readLine = readline.createInterface({
    input: process_1.stdin,
    output: process_1.stdout
});
readLine.question("", function (input) {
    // let input: string = require("fs").readFileSync("/dev/stdin", "utf8");
    // let lines: string[] = input.split("\n"); for beecrowd
    var number = input.split(" ");
    var number1 = parseInt(number[0]);
    var number2 = parseInt(number[1]);
    var result = number1 + number2;
    console.log("X = ".concat(result, " \n"));
    readLine.close();
});
