# Algorithm and Programming - LF01

D5387 - Harvianto

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
