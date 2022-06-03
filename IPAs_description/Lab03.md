# Lab03 - Loops and Chars

Lab03 deals with loops, nested loops, auxiliary functions, and chars.

## Ex01 - Square of Numbers

Write a program that draws a square of numbers like the following using the function `void square(int N);`. The value of `N`, given by the user, must be greater than or equal to 2. The tab (character `'\t'`) must be used as the separator.

The following square is the example for `N = 5`.

```
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9
```

## Ex02 - Pyramid of Numbers

Write a program that draws a pyramid of numbers using the `void pyramid(int N);` function. The value of `N`, given by the user, must be greater than or equal to 2. The space (character `' '`) must be used as the separator.

The following pyramid is the example for `N = 5`.

```
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
```

## Ex03 - Diagonal cross

Write a program that draws a cross on diagonals using the `void cross(int N);` function. The asterisk (`'*'` character) must be used to draw the cross; hyphen (`'-'` character) must be used as the separator.

The following cross is the example for `N = 3`.

```
* - *
- * -
* - *
```

The following cross is the example for `N = 8`.

```
* - - - - - - *
- * - - - - * -
- - * - - * - -
- - - * * - - -
- - - * * - - -
- - * - - * - -
- * - - - - * -
* - - - - - - *
```

## Ex04 - Numbers

Write a program that reads a sequence of numbers separated by spaces and newlines,
and print the same string, but the numbers in the output should not contain 0 at the beginning, eg `007` should print `7`.

The exception is the number 0, which should be printed as 0.
The string in the input ends with `EOF`.

*Warning:* Number values ​​may be greater than the maximum value of type `int` or any primitive type in C.

*Hint:* the `int getchar()` function can be used to read a character.

## Ex05 - Messages

Write a program that reads a sequence of messages and prints them out, one per line.
Each message is delimited by quotation marks (character `"`). The message can contain an "escape sequence" - the character loses special meaning if it is preceded by the character `\` (backslash). For example, the input `"a\" foo\\bar\""` matches the message `a"foo\bar"`. So the backslash allows you to include quotes in the message just like the backslash itself.

## Ex06 - Divisible 

Write a program that reads a positive integer from the input (such as a sequence of characters up to 100 chars) and that decides whether the number read is divisible by 9.

If the number is divisible by 9, the program should print the message `yes`, and should print `no` otherwise.

*Warning:* Number values ​​can be greater than the maximum value of type `int` or any primitive type in C.

*Hint:* A number is divisible by 9 if and only if the sum of its digits is divisible by 9.
For example, the sum of the digits of the number 729 is 18, so it is divisible by 9.
The fact can be seen from the following equation: 7 x 100 + 2 x 10 + 9 = (7 x 99 + __7__) + (2 x 9 + __2__) + 9.

## Ex07 - Calculator 

Write a program that takes a sequence of numbers and operators (`+`, `-`) representing an arithmetic expression and returns the result of that arithmetic expression.

The string in the input ends with `\n`.

You can assume that every two numbers are always separated by `space, operator, space`, ie, `'op'`, for either of the 2 operators above.

_Example_: Input `70 + 22 - 3` should return `89`.

_Tip:_ You should start by converting a sequence of digits (characters) to an integer.