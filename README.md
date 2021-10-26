Logic gate simulator is a program that can solve any logic gate ciruit which consists of (AND, OR, NAND, NOR, XOR, XNOR)
<sim means solve, out means show me the output if this node, and s1 s2 s3 means that s3 = s1&&s2>
ALL you have to do is to right a text file like that format:
and s1 s2 s3
or s3 s4 s5
and s2 s4 s6
nand s6 s5 s7
set s2 0
set s1 1
set s4 0
sim
out s1
out s3
out s5
out s6
out s7

give the path of your file to the program and voalaaaaa it will output u all the solutions
