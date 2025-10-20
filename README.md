# Minishell

## About project 

Minishell is a group project developed at Hive Helsinki (the 42 Network) as part of curriculum. 
It is a minimal recreation of the Bash shell, implemented in C.

Minishell reads user commands, parses them, handles pipes and redirections, and executes built-in or external programs with proper environment management and signal handling.

This project was built by Trang Pham and Ha Nguyen, and is designed to deepen understanding of how shells work, focusing on process control, parsing, and environment management.

## Features:

### 🔹 Core Functionality
- Prompt display and continuous input loop  
- Execution of external commands via `PATH`  

### 🔹 Built-in Commands
- `echo`  
- `cd`  
- `pwd`  
- `env`  
- `exit`  
- `export`  
- `unset`

### 🔹 Shell Grammar & Parsing
- Pipes (`|`)  
- Redirections (`>`, `<`)
- Append (`<<`)
- Heredoc (`<<`) with variable expansion inside double quotes  
- Quote handling (`'single'` and `"double"`)  
- Environment variable expansion (`$HOME`, `$USER`, `$?`, etc.)  

### 🔹 Signal Handling
- `Ctrl+C` → Interrupt current command  
- `Ctrl+D` → Exit minishell  
- `Ctrl+\` → Ignored (as in Bash)

## How to use:

### Requirements:
Linux OS

### Installment:
#### 1. Clone the Repository
```bash
git clone git@github.com:TrangPham93/minishell_Hive_Helsinki.git minishell
cd minishell
```
#### 2. Compile the Project
```bash
make
```
#### 3. Run Minishell
```bash
./minishell
```

#### 4. Examples

<img width="300" height="140" alt="image" src="https://github.com/user-attachments/assets/02cf4b65-aca0-42eb-9aaa-60591193fe6b" />

## Authors

Trang Pham – GitHub <https://github.com/TrangPham93>

Ha Nguyen – GitHub <https://github.com/hnguyen279>

## License or acknowledgment

This project is part of the Hive Helsinki / 42 Network curriculum.

It was created for educational purposes only.
