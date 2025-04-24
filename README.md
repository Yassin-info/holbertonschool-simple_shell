![image](https://github.com/user-attachments/assets/69545c5a-75f6-4336-8d92-4497cfc3335e)
# Simple Shell Project

## 📝Description

This project is a simple UNIX command line interpreter implemented in C. It aims to replicate basic functionalities of the sh shell, providing a hands-on understanding of how shells work, process creation, and command execution in Unix-like operating systems.

## 📑Table of Contents
1.🌟[Features](#features)
2.📋 [Requirements](#requirements)
3.🛠️ [Compilation](#compilation)
4.🚀 [Usage](#usage)
5. 🔧[Built-in Commands](#built-in-commands)
6. 📁[Files](#files)
7. 🧠[Key Functions](#key-functions)
8. 📊[Flowchart](#flowchart)
9.📚 [Resources](#resources)
10. ✅[List of Allowed Functions](#list-of-allowed-functions)
11.👥 [Authors](#authors)

## 🌟Features

- Displays a prompt "$ " and waits for user input
- Executes simple shell commands
- Handles command lines with arguments
- Implements built-in commands: exit, env, setenv, unsetenv
- Handles the PATH to find executable programs
- Supports interactive and non-interactive modes
- Handles the EOF (End Of File) condition
- Handles the Ctrl + C signal without exiting the shell

## 📋Requirements

- Ubuntu 22.04 LTS
- GCC compiler with flags: -Wall -Werror -Wextra -pedantic -std=gnu89
- Follow Betty style guidelines
- No more than 5 functions per file
- All header files should be include guarded
- Use system calls only when necessary

## 🛠️Compilation

To compile the shell, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

## 🚀Usage

##  🧑‍💻Interactive Mode

```bash
./hsh
#cisfun$ /bin/ls
hsh main.c shell.c
#cisfun$ exit
```

## 📡Non-Interactive Mode

```bash
echo "/bin/ls" | ./hsh
```
## 📋Installation Guide

### 1. Clone the Repository

```bash
   git clone https://github.com/AnneCecile2935/holbertonschool-simple_shell.git
   cd holbertonschool-simple_shell
```

---

#### 2. Prepare the Installation Script

```bash
chmod +x install_man_page.sh
```

#### 3. Run the Installation Script

```bash
sudo ./install_man_page.sh
```

#### Verifying Installation

```bash
man myshell
```

### Troubleshooting

- Ensure necessary permissions
- Verify script location
- Check `mandb` installation

### Uninstallation

```bash
sudo rm /usr/local/share/man/man1/myshell.1.gz
sudo mandb
```



## 🔧Built-in Commands

- `exit`: Exit the shell
- `env`: Print the current environment
- `setenv`: Set an environment variable
- `unsetenv`: Unset an environment variable

## 📁Files

- 🗂️`_which.c` Implements the functionality to search for executable files in the directories listed in the PATH environment variable.
- 🧱`builtin_execute.c` Contains the logic to execute built-in shell commands.
- 🧠`builtins.c` Defines the built-in commands supported by the shell (e.g., exit, env).
- 👶`child.c` Handles the creation and management of child processes for executing external commands.
- ⚠️`errors.c` Manages error handling and error message display.
- ♻️`free.c` Contains functions for memory deallocation and cleanup.
- 🌱`getenv.c` Implements custom functions to interact with environment variables.
- 🧾`getline.c` Provides a custom implementation of the getline function for reading user input.
- 🔁`hsh.c` The main shell loop that reads commands and executes them.
-📎 `main.h` Header file containing function prototypes and necessary includes.
- 📢`prompt.c` Handles the display of the shell prompt.
- ✂️`tokenizer.c` Splits the input string into tokens for command processing.
- 🛠️`utility_functions.c` Contains various utility functions used throughout the shell implementation.

## Key Functions

- `_putchar`: Prints a character
- `_puts`: Prints a string
- `_strlen`: Calculates the length of a string
- `_strdup`: Duplicates a string
- `concat_all`: Concatenates three strings

## Flowchart




## 📚Resources

-[Unix shell](https://en.wikipedia.org/wiki/Unix_shell)
-(https://www.die.net/) 

##✅ List of Allowed Functions

access, chdir, close, closedir, execve, exit, _exit, fflush, fork, free, getcwd, getline, getpid, isatty, kill, malloc, open, opendir, perror, printf, fprintf, vfprintf, sprintf, putchar, read, readdir, signal, stat, lstat, fstat, strtok, wait, waitpid, wait3, wait4, write, and all functions from string.h

## 👥Authors
Zaccaria Azladji (https://github.com/zoulouhh)
Yassin Jaghmim (https://github.com/yassin-info)
