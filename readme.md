# 🐧 Kernel Interface Utility Suite

> Rebuilding core Linux commands from scratch using native C system calls — no GNU utilities, no shortcuts.

![Language](https://img.shields.io/badge/Language-C-blue)
![Platform](https://img.shields.io/badge/Platform-Linux-orange)
![License](https://img.shields.io/badge/License-MIT-green)
![System Calls](https://img.shields.io/badge/System%20Calls-15+-red)
![Commands](https://img.shields.io/badge/Commands-11-brightgreen)

---

## 📌 Overview

This project is a custom-built **Kernel Interface Utility Suite** that reimplements major Linux commands using native system calls in C.

Instead of relying on existing GNU utilities, each command is developed from scratch to understand its internal behavior at the operating system level. The implementation focuses on direct interaction with the Linux kernel through system calls, providing fine-grained control over file handling, process management, and directory operations.

All commands are enhanced with improved error handling and additional features for better usability. Each utility is identified with a postfix **`x`** (e.g., `lsx`, `pwdx`, `cpx`) and can be optionally integrated into the system PATH for direct terminal usage.

This project demonstrates strong understanding of Linux internals, system calls, file systems, and process execution flow.


## 🛠️ Commands Implemented

| Command  | Equivalent | Description                      |
|----------|------------|----------------------------------|
| `lsx`    | `ls`       | List directory contents          |
| `pwdx`   | `pwd`      | Print working directory          |
| `cpx`    | `cp`       | Copy files                       |
| `mvx`    | `mv`       | Move / rename files              |
| `rmx`    | `rm`       | Remove files                     |
| `catx`   | `cat`      | Display file contents            |
| `touchx` | `touch`    | Create empty file                |
| `statx`  | `stat`     | Display file metadata            |
| `psx`    | `ps`       | Display process information      |
| `unamex` | `uname`    | Display system information       |
| `cdx`    | `cd`       | Change directory (limited scope) |

---

## ⚙️ System Calls Used

`open()` · `read()` · `write()` · `close()` · `stat()` · `lstat()` · `mkdir()` · `unlink()` · `rmdir()` · `chmod()` · `fork()` · `exec()` · `wait()` · `opendir()` · `readdir()`

---

## 🧩 Design Philosophy

- **Minimal abstraction** — behavior as close to the kernel as possible
- **One command, one file** — clean separation and easy navigation
- **Consistent CLI interface** — uniform argument style across all utilities
- **Descriptive error handling** — meaningful messages, not just error codes
- **Modular & extensible** — easy to add new commands or extend existing ones

---

## 🚀 Setup & Usage

### Prerequisites

- GCC compiler
- Linux environment (tested on Ubuntu)

### Build

```bash
git clone https://github.com/SanketHajare44/Kernel-Interface-Utility-Suite
cd Kernel-Interface-Utility-Suite
make
```

### Optional — Add to System PATH

```bash
sudo make install
```

### Run Examples

```bash
lsx -l
pwdx
cpx source.txt destination.txt
catx file.txt
statx file.txt
```

---

## Demo

```bash
$ pwdx
/home/folder1/folder2

$ lsx -l
drwxr-xr-x  src/
-rw-r--r--  Makefile
-rw-r--r--  README.md

$ cpx hello.c hello_backup.c
Copied: hello.c → hello_backup.c

$ statx hello.c
File  : hello.c
Size  : 1024 bytes
Inode : 263541
Perms : -rw-r--r--
```

<!-- > 💡 *Add a terminal GIF here using [terminalizer](https://github.com/faressoft/terminalizer) or [asciinema](https://asciinema.org/) for stronger visual impact* -->

## 📸 Demo

![Terminal Demo](assets/Demo.png)
---

## 📸 Demo

### 🔍 Interactive Demo
[![asciicast](https://asciinema.org/a/jhr4Y4NabjAaesoK.svg)](https://asciinema.org/a/jhr4Y4NabjAaesoK)

## 💡 Key Highlights

-  Zero dependency on GNU coreutils
-  Direct interaction with Linux kernel via system calls
-  Enhanced error messages with descriptive logging
-  Input validation and robust edge-case handling
-  Modular codebase — one `.c` file per command
-  Shared utility module for reusable logic

---

## 🎯 What I Learned

- How system calls bridge **user space** and **kernel space**
- File descriptor lifecycle and low-level I/O management
- Directory traversal using **inode** and metadata structures
- Process creation and control using the **fork–exec model**
- How the shell resolves executables via the **PATH variable**
- Designing real, production-style utilities in C from scratch

---

## 📁 Project Structure

```
Kernel-Interface-Utility-Suite/
├── src/
│   ├── lsx.c
│   ├── pwdx.c
│   ├── cpx.c
│   ├── mvx.c
│   ├── rmx.c
│   ├── catx.c
│   ├── touchx.c
│   ├── statx.c
│   ├── psx.c
│   ├── unamex.c
│   ├── cdx.c
│   └── utils.c
├── include/
│   └── utils.h
├── Makefile
└── README.md
```

---

## Author

**Sanket Sadashiv Hajare**

GitHub : [Link](https://github.com/SanketHajare44)  
LinkedIn : [Link](https://www.linkedin.com/in/sankethajare/)
