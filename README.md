Some knowledge...

Registers
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
