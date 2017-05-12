open Dom;

let a = 1 + 12;

let increment x => x + 1;

let double x => x + x;

let c = increment 1;

let sum x y => x + y;

let sumBy2 = sum 2;

let numbers = [|1, 2, 3, 4, 5, 6, 7, 123, 123|];

let results = Array.map sumBy2 numbers;

let isEven x => x mod 2 == 0;

Js.log "hey";

Js.log results;

print_int (sumBy2 3);

Dom.addEventListener Dom.document "click" Js.log;

let input1 = Dom.querySelector "#input1";

let handleInputChange e => Js.log (Dom.value (Dom.target e)) ;

Dom.addEventListener input1 "input" handleInputChange;
