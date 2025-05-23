#!/bin/bash
set -xue

QEMU=qemu-system-riscv32

# Path to clang and compiler flags
CC=/opt/homebrew/opt/llvm/bin/clang
# Modified compiler flags to fix debug info issues
CFLAGS="-std=c11 -O2 -g3 -gdwarf-4 -Wall -Wextra --target=riscv32-unknown-elf -fno-stack-protector -ffreestanding -nostdlib"

# Build the kernel
$CC $CFLAGS -Wl,-Tkernel.ld -Wl,-Map=kernel.map -o kernel.elf kernel.c common.c

# Start QEMU
$QEMU -machine virt -bios default -nographic -serial mon:stdio --no-reboot \
  -kernel kernel.elf

# -machine virt: Start a virt machine. You can check other supported machines with the -machine '?' option.
# -bios default: Use the default firmware (OpenSBI in this case).
# -nographic: Start QEMU without a GUI window.
# -serial mon:stdio: Connect QEMU's standard input/output to the virtual machine's serial port. Specifying mon: allows switching to the QEMU monitor by pressing Ctrl+A then C.
# --no-reboot: If the virtual machine crashes, stop the emulator without rebooting (useful for debugging).
