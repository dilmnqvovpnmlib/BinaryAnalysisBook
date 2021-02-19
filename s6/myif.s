global main

main:
mov eax, 0x5
cmp eax, 0x3
jz  equal
jmp not

equal:
mov eax, 0x1
jmp end

not:
mov eax, 0x0

end:
