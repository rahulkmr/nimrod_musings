import strutils

stdout.writeln("Input a list of number: ")
stdout.write(stdin.readLine.split.map(parseInt).max.`$`)
stdout.writeln(" is the maximum!")
