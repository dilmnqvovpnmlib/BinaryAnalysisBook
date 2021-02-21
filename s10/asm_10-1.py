from pwn import *

# push 0x00006948 は Hi をスタックに積んでる
# 以降はシステムコールの実行例にしたがってレジスタに値を詰んでいく
# EAX にシステムコール番号を積む
# EBX に出力先 (今回のケースは標準出力) を指定する
# ECX にスタックポインタを積む
# EDX に出力する文字数を指定する
# 最後に、int 0x80 を呼び出す
shellcode = asm('push 0x00006948; mov eax, 0x4; mov ebx, 0x1; mov ecx, esp; mov edx, 0x4; int 0x80')

print(enhex(shellcode))
