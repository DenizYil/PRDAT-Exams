let exam01 = Letfun("f1", "x", Prim("+", Var "x", CstD 1.0), Call(Var "f1", CstD 12.0));;
let exam02Err = Prim("+", CstD 23.0, CstI 1);;

let exam05 = Let("x",CstD 23.0, Prim("*",CstI 2,Prim1("toInt", Var "x")));;
let exam06 = Let("x",CstI 23, Prim("*",CstD 2.0,Prim1("toDouble", Var "x")));;
