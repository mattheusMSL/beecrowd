"use strict";
Object.defineProperty(exports, "__esModule", { value: true });

var readline = require("readline");

var process_1 = require("process");

var readLine = readline.createInterface({ input: process_1.stdin, output: process_1.stdout });

readLine.question("", function (input) {
    var ageInDays = parseInt(input);
    var years = Math.floor(ageInDays / 365);
    ageInDays %= 365;
    var months = Math.floor(ageInDays / 30);
    ageInDays %= 30;
    var days = ageInDays;
    console.log("".concat(years, " ano(s)"));
    console.log("".concat(months, " mes(es)"));
    console.log("".concat(days, " dia(s)"));
    readLine.close();
});
