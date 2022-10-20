# Algorithm and Programming - LF01

D5387 - Harvianto

Outline:
1. [Session 02 - Input and Output](#session-02---input-and-output)
    1. [Output](#output)
    2. [Input](#input)
2. [Session 03 - Operator & Operand](#session-03---operator--operand)
    1. [Arithmatic](#arithmatic)
    2. [Bitwise](#bitwise)
    3. [Precedence & Associative](#operator-precedence--associative)
3. [Session 04 - Selection and Looping (Iterative)](#session-04---selection-and-looping-iterative)
     1. [Selection](#selection)
     2. [Looping (Iterative)](#looping-iterative)

## Session 02 - Input and Output

### Output

printf -> print format

Ex:

```c
printf("Hello World!");
```

### Input

scanf -> scan format

Ex:

```c
int a;
scanf("%d", &a);
```

## Session 03 - Operator & Operand

### Arithmatic

| Operator | Description        |  Using  | Example | Result |
| :------: | ------------------ | :-----: | :-----: | :----: |
|    +     | Addition           | `a + b` | `5 + 3` |  `8`   |
|    -     | Subtraction        | `a - b` | `5 - 3` |  `2`   |
|    \*    | Multiplication     | `a * b` | `5 * 3` |  `15`  |
|    /     | Division           | `a / b` | `5 / 3` |  `1`   |
|    %     | Remainder / Modulo | `a % b` | `5 % 3` |  `2`   |

### Bitwise

| Operator | Description        |  Using   | Example  | Result |
| :------: | ------------------ | :------: | :------: | :----: |
|    \|    | OR (inclusive or)  | `a \| b` | `5 \| 3` |  `7`   |
|    &     | AND                | `a & b`  | `5 & 3`  |  `1`   |
|    ^     | XOR (exclusive or) | `a ^ b`  | `5 ^ 3`  |  `6`   |
|    ~     | NOT (exclusive or) |   `~a`   |   `~5`   |  `-6`  |
|    <<    | shift left         | `a << b` | `5 << 3` |  `40`  |
|    >>    | shift right        | `a >> b` | `5 >> 2` |  `1`   |

OR Explaination:

```
5 -> 0101
3 -> 0011
     0111 -> 7
```

AND Explanation:

```
5 -> 0101
3 -> 0011
     0001 -> 1
```

XOR Explanation:

```
5 -> 0101
3 -> 0011
     0110 -> 6
```

Shift Left Explanation:

```
5 -> 00000101 shift 3 bits to the left
     00101000 -> 40
```

Shift Right Explanation:

```
5 -> 00000101 shift 2 bits to the right
     00000001 -> 1
```

### Operator Precedence & Associative

| Precedence | Operator                       | Associative |
| :--------: | ------------------------------ | :---------: |
|     3      | ++a &emsp; --a                 |     rtl     |
|     5      | a\*b &emsp; a/b &emsp; a%b     |     ltr     |
|     6      | a+b &emsp; a-b                 |     ltr     |
|     7      | << &emsp; >>                   |     ltr     |
|     9      | < &emsp; <= &emsp; > &emsp; >= |     ltr     |
|     10     | == &emsp; !=                   |     ltr     |
|     11     | a&b                            |     ltr     |
|     12     | ^                              |     ltr     |
|     13     | \|                             |     ltr     |
|     14     | &&                             |     ltr     |
|     15     | \|\|                           |     ltr     |

Reference: https://en.cppreference.com/w/cpp/language/operator_precedence


## Session 04 - Selection and Looping (Iterative)

### Selection

#### if-case

```c++
if (/* condition */) {
     // true statement
} else {
     // false statement
}
```

Ex Ganjil / Genap:

Genap adalah bilangan yang habis dibagi dengan 2. Sedangkan sebaliknya adalah ganjil. Berarti bila sisa bagi dari bilangan tersebut adalah 0, maka bilangan tersebut adalah bilangan genap.
```c++
int angka;
scanf("%d", &angka);
if (angka % 2 == 0) {
     printf("Genap\n");
} else {
     printf("Ganjil\n");
}
```

#### swicth-case

```c
switch (/* expression */) {
     case /* case 1 */:
          // statement
          break;
     case /* case 2 */:
          // statement
          break;
     default:
          // statement
          break;
}
```

### Looping (Iterative)

#### for

```c
for (/* initialization */; /* condition */; /* statement/increment */) {
     // statement
}
```

Ex:
```c
for (int i = 1; i <= 10; i++) {
     printf("Loop for ke-%d\n", i);
}
```

#### while

```c
while (/* condition */) {
     // statement
}
```

Ex:
```c
int j = 1; 
while (j <= 10) {
     printf("Loop while ke-%d\n", j);
     j++;
}
```

#### do-while

```c
do {
     // statement
} while(/* condition */);
```

Ex:
```c
int k = 1; 
do {
     printf("loop dowhile ke-%d\n", k);
     k++;
} while(k <= 10);
```