<!-- # 🐧 Kernel Interface Utility Suite

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

-  Zero dependency on GNU coreutils
-  Enhanced error messages with descriptive logging
-  Input validation and edge-case handling
-  Modular design — one `.c` file per command
-  Shared utility module (`utils.c`) for common logic

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

**Your Name** · [LinkedIn](https://linkedin.com/in/yourprofile) · [GitHub](https://github.com/your-username) -->



# 🐧 Kernel Interface Utility Suite

> Rebuilding core Linux commands from scratch using native C system calls — exposing how user-space utilities interact with the kernel.

![Language](https://img.shields.io/badge/Language-C-blue)
![Platform](https://img.shields.io/badge/Platform-Linux-orange)
![License](https://img.shields.io/badge/License-MIT-green)

---

## 📌 Overview

This project reimplements essential Linux commands using **low-level system calls** such as `open()`, `read()`, `write()`, `fork()`, and `exec()` instead of relying on GNU utilities or high-level libraries.

Unlike typical implementations, this project directly interacts with the Linux kernel, providing deeper insight into how standard Unix commands actually work internally.

Each command is postfixed with **`x`** (e.g., `lsx`, `pwdx`) to represent extended/custom implementations and can be optionally added to the system PATH for seamless terminal usage.

---

## 🛠️ Commands Implemented

| Command  | Equivalent | System Calls Used | Description                   |
| -------- | ---------- | ----------------- | ----------------------------- |
| `lsx`    | `ls`       | opendir, readdir  | List directory contents       |
| `pwdx`   | `pwd`      | getcwd            | Print working directory       |
| `cpx`    | `cp`       | open, read, write | Copy files                    |
| `mvx`    | `mv`       | rename, unlink    | Move / rename files           |
| `rmx`    | `rm`       | unlink, rmdir     | Remove files and directories  |
| `catx`   | `cat`      | open, read, write | Display file contents         |
| `touchx` | `touch`    | open              | Create empty file             |
| `chmodx` | `chmod`    | chmod             | Change file permissions       |
| `statx`  | `stat`     | stat, lstat       | Display file metadata         |
| `headx`  | `head`     | open, read        | Display first N lines         |
| `tailx`  | `tail`     | open, read        | Display last N lines          |
| `wcx`    | `wc`       | read              | Word / line / character count |
| `mkdirx` | `mkdir`    | mkdir             | Create directory              |

---

## ⚙️ Core System Calls

`open()` · `read()` · `write()` · `close()` · `stat()` · `lstat()` · `mkdir()` · `unlink()` · `rmdir()` · `chmod()` · `fork()` · `exec()` · `wait()` · `opendir()` · `readdir()`

---

## 🧩 Design Philosophy

* Minimal abstraction — staying close to kernel-level behavior
* One command per module for clarity and maintainability
* Consistent CLI interface across all utilities
* Explicit and descriptive error handling
* Modular and extensible architecture

---

## 🚀 Setup & Usage

### Prerequisites

* GCC compiler
* Linux environment (tested on Ubuntu)

### Build

```bash
git clone https://github.com/SanketHajare44/Kernel-Interface-Utility-Suite
cd Kernel-Interface-Utility-Suite
make
```

### Optional Installation (Add to PATH)

```bash
sudo make install
```

### Run

```bash
lsx -l
pwdx
cpx file1.txt file2.txt
headx -5 file.txt
```

---

## 📸 Demo

```bash
$ lsx -l
$ pwdx
$ cpx source.txt destination.txt
$ catx source.txt
```

*(Tip: Add a terminal GIF here for stronger visual impact)*

---

## 💡 Key Highlights

* Zero dependency on GNU core utilities
* Direct interaction with Linux system calls
* Enhanced error handling with descriptive logs
* Input validation and robust edge-case handling
* Modular code structure with reusable utilities

---

## 🎯 Key Learnings

* Bridging user space and kernel space through system calls
* File descriptor lifecycle and low-level I/O handling
* Directory traversal using inode and metadata structures
* Process management using fork–exec model
* Understanding PATH-based executable resolution
* Designing scalable system-level utilities in C

---

## Author

**Sanket Sadashiv Hajare**  
GitHub : [Link](https://github.com/SanketHajare44)  
LinkedIn : [Link](https://www.linkedin.com/in/sankethajare/)
