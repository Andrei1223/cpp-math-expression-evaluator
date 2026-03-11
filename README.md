# Mathematical Expression Evaluator

This repository contains a C++ implementation of a flexible mathematical expression evaluator capable of parsing string-based
equations, managing operator precedence and handling nested structures.

## Project Overview

The system is designed to process mathematical strings by decomposing them into operands and operators, assigning priorities based
on mathematical rules, and executing calculations through an object-oriented pipeline.

### Key Features


 - **Arithmetic Operations**: Supports addition (`+`), subtraction (`-`), multiplication (`*`), division (`/`), exponentiation (`^`)
 and radicals (`#`).

 - **Priority Management**: Implements standard BODMAS/PEMDAS rules supplemented by a dynamic priority system for nested brackets.

 - **Bracket Support**: Handles nested round `()` and square `[]` parentheses.

 - **Negative Number Support**: Correctly interprets signed numbers at the start of expressions or within parentheses (`-5 + 3`
 or `10 * (-2)`).

 - **Syntax Validation**: Features a robust verification engine to identify incorrect formats, unbalanced parentheses or illegal
 character sequences.


## Usage and Equation Formatting

To ensure successful evaluation, equations should follow these formatting standards:

### 1. Basic Operators

 - **Exponentiation**: Use `^` for powers (e.g., `2 ^ 3` equals `8`).
 
 - **Radicals**: Use `#` to denote the root (e.g., `8 # 3` calculates the cube root of `8`).


### 2. Nesting and Brackets

Brackets increase the internal priority of an operation. The system supports both `()` and `[]` which can be used interchangeably or nested.

Example: `[(2 + 3) * 2] ^ 2` results in `100`.

### 3. Signed Numbers

Negative values are supported if they are placed at the beginning of the string or wrapped in parentheses to distinguish them from subtraction operators.

Example: `-10 + 20` or `5 * (-2)`.

