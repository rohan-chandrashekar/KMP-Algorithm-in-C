
# KMP Algorithm in C

This repository contains an implementation of the **Knuth-Morris-Pratt (KMP) Algorithm** in C. The KMP algorithm is an efficient string searching (or substring search) algorithm that searches for occurrences of a word `W` within a main text string `S` in `O(n)` time, where `n` is the length of the string `S`.

## Files

- `kmp.c`: The C source file containing the implementation of the KMP algorithm.

## How to Compile and Run

To compile the code, use a C compiler like `gcc`:

```bash
gcc -o kmp kmp.c
```

This will generate an executable file named `kmp`.

To run the executable, use:

```bash
./kmp
```

You can input your main string and the pattern to be searched when prompted.

## Example

Suppose you have the following input:

- **Main string:** "ABABDABACDABABCABAB"
- **Pattern:** "ABABCABAB"

The output will be the starting index (0-based) where the pattern is found in the main string.

## Acknowledgments

- The implementation is based on the classical KMP algorithm as described by Donald Knuth, Vaughan Pratt, and James H. Morris.
