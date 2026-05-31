# Dr. Quine

Self-replicating programs (quines) in **C** and **x86-64 Assembly**.
Three programs with increasing constraints: **Colleen**, **Grace**, **Sully**.

## Programs

| Program | What it does |
|---------|--------------|
| **Colleen** | Prints its own source to stdout. |
| **Grace**   | Writes its own source into `Grace_kid.c`. |
| **Sully**   | Writes `Sully_X.c` (X starts at 5), compiles and runs it, decrementing X down to 0. |

A correct quine produces an **empty `diff`** against its own source.

## Build

```sh
make -C C      # -> C/bin/{Colleen,Grace,Sully}
make -C ASM    # -> ASM/bin/{Colleen,Grace,Sully}
```

C compiles with `-Wall -Wextra -Werror`. ASM uses `nasm -f elf64`.
