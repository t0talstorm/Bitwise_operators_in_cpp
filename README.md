# EXPERIMENT – Bitwise Operators
# Aim: To study and implement Bitwise Operators in C++.

## Apparatus : VS Code or Programiz Online Compiler

## Theory:
In this experiment, we worked with bitwise operators in C++, which directly manipulate the binary form of integers. These operators are useful when we need to work at the bit level, like in low-level programming, embedded systems, or performance-critical code.

### Program 1:
This program demonstrates how different bitwise operations behave in C++. Here's what each operator does:
- `Bitwise AND (&)` – Compares each bit of two numbers and returns 1 only if both bits are 1.
- `Bitwise OR (|)` – Returns 1 if at least one of the bits is 1.
- `Bitwise NOT (~)` – Flips all bits in the number (1 becomes 0 and vice versa).
- `Bitwise XOR (^)` – Returns 1 if the bits are different, 0 if they are the same.
- `Left Shift (<<)` – Moves all bits to the left by a certain number of places (adds zeroes from the right).
- `Right Shift (>>)` – Moves bits to the right, dropping bits on the right side.
  
We tested each of these by applying them to integer values and printing the results to see how they change the binary representation.

---
### Program 2:
This program takes a number and a bit position from the user, and then toggles that specific bit using the `XOR (^)` operator.

- The user first enters a number `(num)` and then the bit position they want to change (set).
- We use the expression `num ^ (1 << (set - 1))` to flip the bit at the given position.
- The `1 << (set - 1)` part creates a mask with a `1` at the desired bit location.
- Applying XOR with this mask flips that particular bit if it was `0`, it becomes `1`; if it was `1`, it becomes `0`.
  
This is useful when you want to toggle a bit rather than strictly setting it to `1` or resetting it to `0`.

## Conclusion:
Through this experiment, we successfully performed various bitwise operations and learned how to directly set or clear individual bits within a binary number using logical operators.

