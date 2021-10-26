Logic gate simulator is a program that can solve any logic gate ciruit which consists of (AND, OR, NAND, NOR, XOR, XNOR)<br/> 
<sim means solve, out means show me the output if this node, and s1 s2 s3 means that s3 = s1&&s2><br/> 
ALL you have to do is to right a text file like that format:<br/> 
and s1 s2 s3<br/>
or s3 s4 s5<br/>
and s2 s4 s6<br/>
nand s6 s5 s7<br/>
set s2 0<br/>
set s1 1<br/>
set s4 0<br/>
sim<br/>
out s1<br/>
out s3<br/>
out s5<br/>
out s6<br/>
out s7<br/>
<br/>
give the path of your file to the program and voalaaaaa it will output u all the solutions
