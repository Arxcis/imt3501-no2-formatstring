

## 2.1 Task1: Exploit the vurnerability

**Writing the vul_prog.c**
Simple copy pasting and compiling from the lab-document...
Testing before exploiting vurnerability
```sh
$ ./vul_prog 
The variable secret's address is 0xbffff2f0 (on stack )
The variable secret's address is 0x 804b008 (on heap )
Var0 address is 0x 804b008 (on heap )
Var1 address is 0x 804b00c (on heap )
Please enter a decimal integer
23
Please enter a string
hei
hei
The original secrets: 0x44 -- 0x55
The new secrets: 0x44 -- 0x55
```

**Crash the program**

