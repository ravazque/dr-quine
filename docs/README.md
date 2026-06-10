*This project has been created as part of the 42 curriculum by ravazque.*

---

## Description

Dr. Quine explores self-replicating programs: executables whose only output is their own source code, byte for byte, without reading their own file or receiving any input. The idea comes from Kleene's recursion theorem, and the core trick is always the same — a piece of data that is printed twice, once as quoted data and once as code.

The project consists of three programs, each written **both in C and in x86-64 assembly**:

- **Colleen** prints its own source code to the standard output.
- **Grace** writes a copy of its source into `Grace_kid.c` without declaring any function, using exactly three `#define` directives.
- **Sully** rewrites itself into `Sully_X.c` with an embedded integer decremented on each generation, then compiles and runs the child, producing a cascade of programs that stops below zero.

Each language half has its own Makefile (`C/` and `ASM/`), and the resulting binaries reproduce their sources exactly — verifiable with an empty `diff`.
