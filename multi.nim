type
    TThing = object of TObject
    TUnit = object of TThing
        x: int

method collide(a, b: TThing) {.inline.} =
    quit "To be overridden"

method collide(a: TThing, b: TUnit) {.inline.} =
    echo "1"

method collide(a: TUnit, b: TThing) {.inline.} =
    echo "2"

var
    a, b: TUnit

collide(a, b)
