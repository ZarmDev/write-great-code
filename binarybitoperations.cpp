#include <iostream>

int main() {
  std::cout << "Hello World!\n";
}

/*
The expression IsDivisibleBy16 := (ValueToTest and $f) = 0; is a way to test if a number is divisible by 16 using bitwise operations. It works by checking if the last four bits of the number are all zeros, since 16 is a power of 2. The $f is a hexadecimal constant that represents the binary value 00001111, which is used to mask the last four bits of the number. The and operator performs a bitwise logical AND between the two operands, and the result is compared to zero. If the result is zero, then the number is divisible by 16, otherwise it is not.
This method is similar to the divisibility test for 4, which checks if the last two digits of the number are divisible by 41. However, this method is more efficient, since it does not require converting the number to decimal or extracting the last two digits. It can be implemented in any programming language that supports bitwise operations and hexadecimal constants. For example, here is how it would look like in C:
*/

// A function that returns 1 if a number is divisible by 16, and 0 otherwise
int IsDivisibleBy16(int ValueToTest) {
    return (ValueToTest & 0xf) == 0;
}
/*
A hexadecimal constant is a way to represent a number using 16 symbols: the digits 0 to 9 and the letters A to F (or a to f). Each symbol corresponds to four bits of binary data, so a hexadecimal constant can express any value that a binary number can, but with fewer digits. For example, the hexadecimal constant 0x5A3 is equivalent to the binary number 010110100011, which is 1443 in decimal. Hexadecimal constants are often used in programming languages to specify values that are easier to read and write in base 16 than in base 2 or base 10. For example, some common uses of hexadecimal constants are:
To represent colors in web design, such as #FF0000 for red or #00FF00 for green.
To represent memory addresses, such as 0x7FFFFFFF for the highest address in a 32-bit system.
To represent bit masks, such as 0xF0 to select the upper four bits of a byte.
To represent character codes, such as 0x41 for the ASCII code of ‘A’.
  */

// C++ CODE FOR COMPARING //

// C/C++ example
if ((value1 & 0x81010403) == (value2 & 0x81010403)) {
    // Do something if bits 31, 24, 16, 10, 1, and 0 of
    // value1 and value2 are equal
}

if ((value1 & 0x81010403) != (value3 & 0x81010403)) {
    // Do something if bits 31, 24, 16, 10, 1, and 0 of
    // value1 and value3 are not equal
}

// Assembly
/*
mov( value1, eax ); ; EAX = value1
and( $8101_0403, eax ); ; Mask out unwanted bits in EAX
mov( value2, edx ); ; EDX = value2
and( $8101_0403, edx ); ; Mask out the same set of unwanted bits in EDX

if( eax = edx ) then ; See if the remaining bits match
    ; Do something if bits 31, 24, 16, 10, 1, and 0 of
    ; value1 and value2 are equal
endif;

mov( value1, eax ); ; EAX = value1
and( $8101_0403, eax ); ; Mask out unwanted bits in EAX
mov( value3, edx ); ; EDX = value3
and( $8101_0403, edx ); ; Mask out the same set of unwanted bits in EDX
*/

// Explanation
/* The code uses **bitwise operators** to perform operations on the binary representation of the values. Bitwise operators are symbols that manipulate individual bits of a number.

The code has two if statements that compare the bitwise AND of value1 with value2 and value3 respectively. The bitwise AND operator (&) returns a new value that has a 1 in each bit position where both operands have a 1. For example, 5 & 3 = 1, because 5 in binary is 101 and 3 in binary is 011, and only the last bit is 1 in both numbers.

The code uses a hexadecimal constant 0x81010403 as a mask to select certain bits from value1, value2, and value3. A mask is a value that has 1s in the bit positions that we want to examine or modify, and 0s in the other positions. The mask 0x81010403 in binary is 10000001000000010000010000000011, which means it selects bits 31, 24, 16, 10, 1, and 0 from the values.

The first if statement checks if the selected bits of value1 and value2 are equal, and if so, it executes some code. The second if statement checks if the selected bits of value1 and value3 are not equal, and if so, it executes some code.

: [Bitwise Operators in C and C++](https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/)
: [Bitwise Operators](https://www.programiz.com/c-programming/bitwise-operators)
: [Bitwise Operations and Masking in C Programming](https://www.electronicshub.org/bitwise-operations-and-masking-in-c-programming/)
*/
