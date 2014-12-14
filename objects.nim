type
    TPerson = object of TObject
        name*: string
        age: int

    TStudent = object of Tperson
        id: int

var
    student: TStudent
    person: TPerson

student = TStudent(name: "John", age: 5, id: 2)
echo(student.name)
