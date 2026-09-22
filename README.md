# Stack Implementation using Array (C)

A simple C program that implements a **stack** data structure using an array, demonstrating the core stack operations: **push**, **pop**, and **display**.

## 📋 Overview

This program is a learning exercise for understanding how a stack (a LIFO — Last In, First Out — data structure) can be implemented using a fixed-size array in C.

## ⚙️ Features

- **Push** – Insert an element onto the top of the stack
- **Pop** – Remove and display the top element of the stack
- **Display** – Show all elements currently in the stack
- **Exit** – Terminate the program
- Handles **stack overflow** (when the stack is full)
- Handles **stack underflow** (when the stack is empty)

## 🗂️ Code Structure

| Function | Description |
|----------|-------------|
| `push()` | Prompts the user for an item and pushes it onto the stack if space is available |
| `pop()` | Removes and displays the top item of the stack if it isn't empty |
| `display()` | Prints all elements in the stack from top to bottom |
| `main()` | Displays a menu and repeatedly takes user input to call the above functions |

## 🔧 Configuration

- `MAX` is defined as `5`, meaning the stack can hold a maximum of 5 integers. You can change this value in the source code to increase or decrease the stack's capacity.

## 🚀 How to Compile and Run

1. Save the code in a file named `stack.c`.
2. Compile using GCC:
   ```bash
   gcc stack.c -o stack
   ```
3. Run the executable:
   ```bash
   ./stack
   ```

## 🖥️ Sample Usage

```
Enter your choice: 1-push, 2-pop, 3-display, 4-exit: 1
Enter an item to be inserted: 10

Enter your choice: 1-push, 2-pop, 3-display, 4-exit: 1
Enter an item to be inserted: 20

Enter your choice: 1-push, 2-pop, 3-display, 4-exit: 3
20 10

Enter your choice: 1-push, 2-pop, 3-display, 4-exit: 2
Item deleted is 20

Enter your choice: 1-push, 2-pop, 3-display, 4-exit: 4
```

## 📖 Menu Options

| Choice | Action |
|--------|--------|
| 1 | Push an item onto the stack |
| 2 | Pop the top item off the stack |
| 3 | Display the current stack contents |
| 4 | Exit the program |

## ⚠️ Known Limitations

- Stack size is fixed at compile time via the `MAX` macro (no dynamic resizing).
- No input validation for non-integer entries at the `scanf` prompts.
- The `display()` function declares an unused variable `i` outside the loop (harmless, but can be removed for cleanliness).

## 📚 Purpose

This project is intended for educational purposes — to help beginners understand:
- Array-based stack implementation
- LIFO principle
- Basic overflow/underflow condition handling
- Menu-driven C programs using `switch` statements
