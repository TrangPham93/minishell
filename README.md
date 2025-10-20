# Minishell

## About project 

Minishell is a team project developed at Hive Helsinki (the 42 Network) as part of curriculum. 
It is a minimal recreation of the Bash shell, implemented in C, with core features such as built-in command execution, process handling, and basic shell grammar parsing.

Minishell reads user commands, parses them, handles pipes and redirections, and executes built-in or external programs with proper environment management and signal handling.

This project was built by Trang Pham and Ha Nguyen, and is designed to deepen understanding of how shells work under the hood, 
focusing on process control, parsing, and environment management.

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
- Redirections (`>`, `<`, `>>`, `<<`)  
- Heredoc (`<< limiter`) with variable expansion inside double quotes  
- Quote handling (`'single'` and `"double"`)  
- Environment variable expansion (`$HOME`, `$USER`, `$?`, etc.)  

### 🔹 Signal Handling
- `Ctrl+C` → Interrupt current command  
- `Ctrl+D` → Exit minishell  
- `Ctrl+\` → Ignored (as in Bash)

## How to use:

### 1️⃣ Clone the Repository
```bash
git clone https://github.com/<your-username>/minishell.git
cd minishell
```
### 2️⃣ Compile the Project
```bash
make
```
### 3️⃣ Run Minishell
```bash
./minishell
```

#### :4: Examples

## Authors

Trang Pham – GitHub
Ha Nguyen – GitHub

## License or acknowledgment

This project is part of the Hive Helsinki / 42 Network curriculum.
It was created for educational purposes only.
