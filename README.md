# Advent of Code Golf

## Rules

1. Input may not be modified or pre-processed
2. Input must be read from stdin
3. Compiler extensions, undefined behavior, etc. are all allowed
4. No requirement on C language standard
5. A comment explaining build requirements is allowed and is not counted towards
   byte count

In general these programs are most likely to be build with `gcc -std=gnu89` as
it's about the most permissive C compiler that exists (possibly behind MSVC
which outright ignores the spec sometimes). Note that on macOS, Apple's build
tools alias GCC to clang, and clang is not as permissive. It is unlikely that
these will build on macOS without slight modifications as a result. You can
install GCC yourself if you wish to use them on macOS (consult your package
manager).
