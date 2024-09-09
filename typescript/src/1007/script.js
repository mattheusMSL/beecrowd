"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var readline = require("readline");
var process_1 = require("process");
var readLine = readline.createInterface({ input: process_1.stdin });
readLine.question("", function (input) {
    var lines = input.split(/\s+/);
    var numberOne = parseInt(lines[0]);
    var numberTwo = parseInt(lines[1]);
    var numberThree = parseInt(lines[2]);
    var numberFour = parseInt(lines[3]);
    var diferenca = (numberOne * numberTwo - numberThree * numberFour);
    console.log("DIFERENCA = ".concat(diferenca));
    readLine.close();
});
