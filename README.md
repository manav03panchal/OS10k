Some knowledge...

# Registers
| Registers | ABI Name | Description |
| ------------- | -------------- | -------------- |
| `pc` | `pc` | Program Counter (where the next instruction is...) |
  `x0` | `zero` | Hardwired Zero (always reads as zero)|
| `x1` | `ra` | Return Address |
| `x2` | `sp` | Stack Pointer |
| `x5` - `x7` | `t0` - `t2` | Temp Registers |
| `x8` | `fp` | Stack Frame Pointer | 
| `x10` - `x11` | `a0` - `a1` | Function Args, return vals |
| `x12` - `x17` | `a2` - `a7` | Function Args |
| `x18` - `x27` | `s0` - `s11` | Temp Registers saved across calls |
| `x28` - `x31` | `t3` - `t6` | Temp Registers |


# CPU Modes
M -> OpenSBI/BIOS Mode
S -> Kernel Mode
U -> User Mode

# Memory access
`lw` and `sw`


```asm
lw a0, (a1) // Reads a word (32bit) from address in a1 and store it in a0
            // a0 = *a1
sw a0, (a1) // Store a word in a0 to the address in a1
            // *a1 = a0
```


# Branch instructions
```asm
bnez a0, <label> // Go to label if a0 is not zero
  // continue if zero
<label>:
  // additional logic if above satisfied.
```

There's also `beq` and `blt`

# Inline assembly in C
```C
__asm__ __volatile__("assembly" : output operands : input operands : clobbered registers);
```


