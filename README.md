## About project

Minishell is a team project developed at Hive Helsinki as part of the 42 Network curriculum. 
It is a minimal recreation of the Bash shell, implemented in C, with core features such as built-in command execution, 
process handling, and basic shell grammar parsing.

This project was built by Trang Pham and Ha Nguyen, and is designed to deepen understanding of how shells work under the hood, 
focusing on process control, parsing, and environment management.

## Features:

- Prompt display and continuous input loop.

- Builtin commands:

    echo

    cd

    pwd

    env

    exit

    export

    unset

- Execution of external system commands using PATH.

- Pipes (|) and redirections (>, <, >>, <<).

- Environment variable support (e.g., $HOME, $USER, $?).

- Quote handling (single ' and double " quotes).

- Signal handling (e.g., Ctrl+C, Ctrl+D, Ctrl+\).

- Heredoc support (<< limiter with variable expansion in double quotes).

## How to use:

- From terminal, use command 'make' to compile.
  
- minishell prompt is open
  
- type what you want to test in the prompt.
