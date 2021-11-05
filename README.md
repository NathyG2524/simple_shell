# Simple Shell Project

**A simple Unix command line interpreter**

![shell](/shell.png)


****
## Table of contents
 - **What is the shell?**
 - **About this project**
 - **Essential Functionalities of the Simple Shell**
 - **List of allowed functions and system calls for this project**
 - **USAGE**
 - **Example of Usage**
 - **Bugs**
 - **TEAM**
 ****

## What is the shell?
The shell is a program that takes commands from the keyboard via the terminal, and gives them to the operating system to perform.\
**To better understand how the shell actually works, you can read our [Article].**

## About this project
This project is a simple version of the linux shell made for ALX Holberton School taking part of the "Low-level programming & Algorithm - Linux and Unix system programming" projects.\
It is created using the **C programming Language** and it can do many functionalities that a real shell does.

## Essential Functionalities of the Simple Shell:
> Displays a prompt "#cisfun$ " and waits for user input.\
> Runs all commands of type "executable program" (ls and /bin/ls).\
> Runs the following build_in commands: **exit**, **env**, **setenv** and **unsetenv**.\
> Handles commands with arguments.\
> Handles the PATH global variable.\
> Handles The EOF (End Of File) condition.\
> Handles the Ctrl + C signal -> It doesn't exit the shell

## List of allowed functions and system calls for this project
 - access (man 2 access)
 - chdir (man 2 chdir)
 - close (man 2 close)
 - closedir (man 3 closedir)
 - execve (man 2 execve)
 - exit (man 3 exit)
 - _exit (man 2 _exit)
 - fflush (man 3 fflush)
 - fork (man 2 fork)
 - free (man 3 free)
 - getcwd (man 3 getcwd)
 - getline (man 3 getline)
 - isatty (man 3 isatty)
 - kill (man 2 kill)
 - malloc (man 3 malloc)
 - open (man 2 open)
 - opendir (man 3 opendir)
 - perror (man 3 perror)
 - read (man 2 read)
 - readdir (man 3 readdir)
 - signal (man 2 signal)
 - stat (__xstat) (man 2 stat)
 - lstat (__lxstat) (man 2 lstat)
 - fstat (__fxstat) (man 2 fstat)
 - strtok (man 3 strtok)
 - wait (man 2 wait)
 - waitpid (man 2 waitpid)
 - wait3 (man 2 wait3)
 - wait4 (man 2 wait4)
 - write (man 2 write)
****

## USAGE
You can try our shell by following these steps:
> **Step 1:** Clone our repository using this command, (you need to have git installed on your machine first)
````
git clone https://github.com/NathyG2524/simple_shell
````
> **Step 2:** Change directory to simple_shell:
````
cd simple_shell
````
> **Step 3:** Compile the C files in this way:
````
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
````
> **Step 4:** Run the shell
````
./hsh
````
**Exiting the shell**
When you want to exit the shell, you can use one of the following methods:
> **1: Type the command "exit"**
````
exit
````
> **2: Press on Ctrl + D**

## Example of Usage
````
vagrant@vagrant-ubuntu-trusty-64://home/vagrant/projects/simple_shell$ ./hsh
$ echo Hello, This is an example
Hello, This is an example
$ ls
alias_builtins.c   builtins_help_2.c  err_m2.c   helper.c         linkedlist.c        README.md  string_funcs1.c
AUTHORS            env_builtins.c     errors.c   helpers_2.c      main.c              shell.h    string_funcs2.c
builtin.c          environ.c          find.c     hsh              man_1_simple_shell  shell.png
builtins_help_1.c  err_m1.c           getline.c  input_helpers.c  proc_file_comm.c    split.c
$ ls -l
total 168
-rw-rw-r-- 1 vagrant vagrant  2886 Nov  3 06:01 alias_builtins.c
-rw-rw-r-- 1 vagrant vagrant   157 Nov  2 16:03 AUTHORS
-rw-rw-r-- 1 vagrant vagrant  4117 Nov  3 06:01 builtin.c
-rw-rw-r-- 1 vagrant vagrant  3393 Nov  3 06:01 builtins_help_1.c
-rw-rw-r-- 1 vagrant vagrant  1146 Nov  3 06:01 builtins_help_2.c
-rw-rw-r-- 1 vagrant vagrant  3115 Nov  3 06:01 env_builtins.c
-rw-rw-r-- 1 vagrant vagrant  1384 Nov  3 06:01 environ.c
-rw-rw-r-- 1 vagrant vagrant  3256 Nov  3 06:01 err_m1.c
-rw-rw-r-- 1 vagrant vagrant  1333 Nov  3 06:01 err_m2.c
-rw-rw-r-- 1 vagrant vagrant  1529 Nov  3 06:01 errors.c
-rw-rw-r-- 1 vagrant vagrant  2432 Nov  3 13:10 find.c
-rw-rw-r-- 1 vagrant vagrant  2577 Nov  3 06:01 getline.c
-rw-rw-r-- 1 vagrant vagrant  3422 Nov  3 06:01 helper.c
-rw-rw-r-- 1 vagrant vagrant  3327 Nov  3 06:01 helpers_2.c
-rwxrwxr-x 1 vagrant vagrant 41627 Nov  3 13:24 hsh
-rw-rw-r-- 1 vagrant vagrant  4144 Nov  3 06:01 input_helpers.c
-rw-rw-r-- 1 vagrant vagrant  2072 Nov  3 06:01 linkedlist.c
-rw-rw-r-- 1 vagrant vagrant  2403 Nov  3 12:41 main.c
-rw-rw-r-- 1 vagrant vagrant  5824 Nov  3 06:01 man_1_simple_shell
-rw-rw-r-- 1 vagrant vagrant  2366 Nov  3 06:01 proc_file_comm.c
-rw-rw-r-- 1 vagrant vagrant  4347 Nov  3 13:05 README.md
-rw-rw-r-- 1 vagrant vagrant  3712 Nov  3 12:46 shell.h
-rw-rw-r-- 1 vagrant vagrant  8751 Nov  2 12:36 shell.png
-rw-rw-r-- 1 vagrant vagrant  1916 Nov  3 06:01 split.c
-rw-rw-r-- 1 vagrant vagrant  1764 Nov  3 06:01 string_funcs1.c
-rw-rw-r-- 1 vagrant vagrant  2029 Nov  3 06:01 string_funcs2.c
$ exit
vagrant@vagrant-ubuntu-trusty-64://home/vagrant/projects/simple_shell$

````
## Bugs
No known Bugs.

## TEAM
Abdisa Gemechu  : [LinkedIn/abdisag1] | [GitHub/abdisag1] \
Natnael Girma : [LinkedIn/natnael] | [GitHub/nathy] 

[Article]: <https://www.linkedin.com/pulse/what-happens-when-you-type-ls-l-c-shell-abdisa-gemechu/?published=t/>
[LinkedIn/abdisag1]: <https://www.linkedin.com/in/abdisag1/>
[LinkedIn/Natnael]: <https://www.linkedin.com/in/nathy-girma-6370281b9/>
[GitHub/abdisag1]: <https://github.com/abdisag1>
[GitHub/nathy]: <https://github.com/NathyG2524>


## AUTHORS DESCRIPTION (Abdisa Gemechu and Natnael Girma)
 
