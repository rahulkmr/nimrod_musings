type
    PExpr = ref object of TObject
    PLiteral = ref object of PExpr
        x: int
    PPlusExpr = ref object of PExpr
        a, b: PExpr

method eval(e: PExpr): int =
    quit "To be overridden"

method eval(e: PLiteral): int = e.x
method eval(e: PPlusExpr): int = eval(e.a) + eval(e.b)

proc newLit(x: int): PLiteral = PLiteral(x: x)
proc newPlus(a, b: PExpr): PPlusExpr = PPlusExpr(a: a, b: b)

echo eval(newPlus(newPlus(newLit(1), newLit(2)), newLit(4)))
