#pragma once

// It prints where the panic occurred, it enters an infinite loop to halt
// processing.
#define PANIC(fmt, ...)                                                        \
  do {                                                                         \
    printf("PANIC: %s:%d: " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__);      \
    while (1) {                                                                \
    }                                                                          \
  } while (0)

struct sbiret {
  long error;
  long value;
};
