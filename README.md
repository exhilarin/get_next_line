# 📄 get_next_line

![42 Project](https://img.shields.io/badge/42%20Network-get__next__line-blue?style=for-the-badge)
![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge)

## 📚 Project Summary

**get_next_line** is a 42 curriculum project that focuses on file I/O and buffer-based line reading in C. The goal is to implement a function that reads a file descriptor and returns a line of text each time it's called — handling buffers, static memory, memory allocation, and edge cases efficiently.

This project teaches how to work directly with file descriptors, manage persistent state between function calls, and construct a robust and efficient function that mimics the behavior of `fgets()` or similar standard input utilities — all while managing memory safely and complying with 42's strict coding standards.

---

## 🧠 What I Learned in get_next_line

The project provides in-depth experience with:

### 🔹 File Descriptors and `read()`
- Reading from file descriptors using the `read()` system call
- Understanding how data flows from disk or standard input to memory

### 🔹 Static Variables and Persistent State
- Using `static` variables to retain data between function calls
- Managing buffers and leftovers (i.e. partial lines) without global variables

### 🔹 Buffer Management
- Handling partial reads and concatenating strings until a newline is found
- Splitting buffers at `\n` and keeping the remainder for the next call

### 🔹 String Manipulation
- Implementing utility functions like:
  - `ft_strjoin`, `ft_strchr`, `ft_strdup`, `ft_substr`, and `ft_strlen`
- Working with dynamic strings and custom memory-safe string operations

### 🔹 Memory Management
- Allocating and freeing memory correctly to avoid leaks
- Avoiding overflows and double frees

### 🔹 Edge Case Handling
- Dealing with:
  - EOF
  - Empty lines
  - Very large files
  - Multiple consecutive newlines
  - Invalid file descriptors

### 🔹 Norminette Compliance
- Writing clean, modular, and well-documented code
- Following 42’s style guide strictly

---

## 📁 Project Structure

```bash
get_next_line/
├── get_next_line.c        # Main function logic
├── get_next_line_utils.c  # Helper string functions
├── get_next_line.h        # Header file
├── main.c                 # (Optional) For testing
├── Makefile               # Build script
└── README.md              # Project documentation
