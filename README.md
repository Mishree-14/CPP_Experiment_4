# C++ Experiment 4: Bitwise Operators and Bit Manipulation

## Aim
To:
> Understand how bitwise operators work in C++
> 
> Learn how to set (turn ON) and reset (turn OFF) specific bits in a number

## Objectives
🔹 Use basic bitwise operators like &, |, ^, ~, <<, >>
🔹 Learn how to change just one bit in a number
🔹 Understand how shifting bits left or right changes the whole value


## Theory: 
### What Are Bitwise Operators?
Every number is made of bits (0s and 1s).

Useful when we want to control specific bits — like in LEDs, sensors, switches, flags, etc.

#### Common Bitwise Operators in C++
##### Operator	  Symbol  	What It Does
      AND	        &     	Gives 1 only if both bits are 1
      OR          `    	  `
      XOR         ^    	  Gives 1 if only one bit is 1
      NOT         ~	      Flips all bits (0 becomes 1, 1 becomes 0)
   Left Shift 	  <<  	  Moves bits left (like ×2)
  Right Shift     >>	    Moves bits right (like ÷2)

### Set and Reset a Bit
Sometimes, we don’t want to change the whole number — just one single bit.
It is very useful in electronics, where you control just one light or switch.

#### To Set a Bit (Make a bit = 1)
bash
Copy
Edit
num | (1 << pos)
This keeps all other bits the same, and turns bit at pos to 1

✅ To Reset a Bit (Make a bit = 0)
bash
Copy
Edit
num & (~(1 << pos))
This makes the bit at pos = 0, and keeps the rest unchanged.

📘 Program Description
✅ Part 1: Bitwise Operations
Take two numbers (say a = 5 and b = 3)

Apply each bitwise operator and show the result

a & b → AND

a | b → OR

a ^ b → XOR

~a → NOT

a << 1 → Left shift (multiplies by 2)

a >> 1 → Right shift (divides by 2)

⚠️ The result will come in decimal, but you can see the binary behind it.

✅ Part 2: Set & Reset Specific Bits
Let’s say we want to turn ON bit 2 of number a → use a | (1 << 2)

To turn OFF bit 1 of number a → use a & (~(1 << 1))

You can check before and after values to see how it changed just one bit.

🔧 Concepts Used
Bitwise Operators: &, |, ^, ~, <<, >>

Set a bit: num | (1 << position)

Reset a bit: num & (~(1 << position))
