# 概要

## 6-8 演習: 画面に "Hi" と表示しよう

- 以下のアセンブリを `hi_6-1.s` に記述する。

```asm
global main

main:
  push 0x0a216948
  mov eax, 0x4
  mov ebx, 0x1
  mov ecx, esp
  mov edx, 0x4
  int 0x80
  add esp, 0x4
```

- `nasm` を用いてアセンブリ言語で書かれたプログラムをオブジェクトファイルに変換する。コマンドは以下である。

```bash
nasm -g -f elf32 hi_6-1.s
```

- 生成されたオブジェクトファイル `hi_6-1.o` を gcc を用いてバイナリに変換する。コマンドは以下である。

```bash
gcc -m32 hi_6-1.o
```

- その結果、バイナリファイルが作成されるので、実行すると、`Hi` という文字列が表示される。

```bash
./a.out
```
