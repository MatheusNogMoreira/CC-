
add x2, x0, x1
sll x1, x2, x2
xor x2, x2, x1
addi x3, x2, -243
lw x9,120(x10)
sw x9,120(x10)
bne x10,x11,2000
