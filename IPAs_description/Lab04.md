# Lab 04 - Integer Arrays and Strings

## Integer Arrays

### Ex01 - Horizontal graph

Write a program that asks the user for a positive integer `n < VECMAX`, where `VECMAX=100`. Then read `n` positive integers. At the end the program should write a graphical representation of the values ​​read as follows.

The following graph is the example for `n = 3` and values ​​`1 3 4`.

```
*
***
****
```

### Ex02 - Vertical drop-down graph

Write a program that asks the user for a positive integer `n < VECMAX`, where `VECMAX=100`. Then read `n` positive integers. At the end the program should write a graphical representation of the values ​​read as follows.

The following graph is the example for `n = 3` and values ​​`1 3 4`.

```
***
 **
 **
  *
```

### Ex03 - Increasing vertical graph

Write a program that asks the user for a positive integer `n < VECMAX`, where `VECMAX=100`. Then read `n` positive integers. At the end the program should write a graphical representation of the values ​​read as follows.

The following graph is the example for `n = 3` and values ​​`1 3 4`.

```
  *
 **
 **
***
```

# String manipulation

Consider that in the following exercises, all strings have a maximum of `MAX = 80` characters (including the end-of-string character).

### Ex04 - Palindrome

Write a program that reads a word from the terminal and checks whether the word is a palindrome or not. A word is a palindrome if it is spelled the same way from left to right and vice versa (eg "AMA" is a palindrome). If the word is a palindrome, the program should print the value `yes`, and `no` if not.

*Hint:* You can use `scanf("%s", s)` to read a word. Note that the string `s` does not ask for `&` in `scanf`.

### Ex05 - Reading and Writing Lines of Text

Write a program that reads characters from the keyboard, character by character, until it finds the character `\n` or EOF and writes the line read to the terminal. Implement the `int readLine(char s[])` function which reads the line into the string `s` and returns the number of characters read.

### Ex06 - Uppercase

Write a program that reads a line from the terminal (use the function from the previous exercise) and writes the same text to the terminal, but with the lowercase letters replaced by the respective uppercase letters. Implement the `void uppercase(char s[])` function.

*Note:* Remember that the string `s` is changed by the `uppercase` function.

### Ex07 - Delete Character

Write a program that reads a line and a character and writes to the terminal the same line where all occurrences of the character were removed. Implement the `void eraseCharacter(char s[], char c)` function that erases the character `c` from the string `s`.


### Ex08 - Larger

Write a program that reads two integers in decimal representation and prints the larger of those two numbers. You can assume that the two numbers have the same number of digits and a maximum of 100 characters.

*Note:* The numbers may be too large to be stored in a `long long` variable, for example `998888888888888888887` and `9988888888888888888888`.