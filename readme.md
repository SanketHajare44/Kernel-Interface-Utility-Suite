# 🐧 Kernel Interface Utility Suite

> A custom Linux command-line toolkit built from scratch using **native C system calls** — no GNU utilities used.

![Language](https://img.shields.io/badge/Language-C-blue)
![Platform](https://img.shields.io/badge/Platform-Linux-orange)
![License](https://img.shields.io/badge/License-MIT-green)

---

## 📌 Overview

This project reimplements core Linux commands using low-level system calls like `open()`, `read()`, `write()`, `fork()`, and `exec()`. The goal is to deeply understand how the Linux kernel and GNU utilities actually work under the hood.

Each command is postfixed with **`x`** (e.g., `lsx`, `pwdx`) and is installed directly into the system PATH.

---

## 🛠️ Commands Implemented

| Command  | Equivalent | Description                        |
|----------|------------|------------------------------------|
| `lsx`    | `ls`       | List directory contents            |
| `pwdx`   | `pwd`      | Print working directory            |
| `cpx`    | `cp`       | Copy files                         |
| `mvx`    | `mv`       | Move / rename files                |
| `rmx`    | `rm`       | Remove files and directories       |
| `catx`   | `cat`      | Display file contents              |
| `touchx` | `touch`    | Create empty file                  |
| `chmodx` | `chmod`    | Change file permissions            |
| `statx`  | `stat`     | Display file metadata              |
| `headx`  | `head`     | Display first N lines              |
| `tailx`  | `tail`     | Display last N lines               |
| `wcx`    | `wc`       | Word / line / character count      |
| `mkdirx` | `mkdir`    | Create directory                   |

---

## ⚙️ System Calls Used

`open()` · `read()` · `write()` · `close()` · `stat()` · `lstat()` · `mkdir()` · `unlink()` · `rmdir()` · `chmod()` · `fork()` · `exec()` · `wait()` · `opendir()` · `readdir()`

---

## 🚀 Setup & Usage

### Prerequisites
- GCC compiler
- Linux OS (Ubuntu/Debian recommended)

### Build
```bash
git clone https://github.com/your-username/kernel-interface-utility-suite.git
cd kernel-interface-utility-suite
make
```

### Install to PATH
```bash
sudo make install
```

### Run
```bash
lsx -l /home
pwdx
catx file.txt
headx -5 file.txt
```

---

## 💡 Key Highlights

- ✅ Zero dependency on GNU coreutils
- ✅ Enhanced error messages with descriptive logging
- ✅ Input validation and edge-case handling
- ✅ Modular design — one `.c` file per command
- ✅ Shared utility module (`utils.c`) for common logic

---

## 📸 Demo

*(Add a screenshot or terminal GIF here)*

---

## 🎯 What I Learned

- How Linux system calls bridge user space and kernel space
- File descriptor lifecycle and management
- Directory traversal using inode structures
- Process creation with `fork()` + `exec()` pattern
- How PATH resolution works for executables
- Real-world OS-level C programming

---

## 📬 Contact

**Your Name** · [LinkedIn](https://linkedin.com/in/yourprofile) · [GitHub](https://github.com/your-username)