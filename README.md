
# TERMINAL HISTORY SPOOFER

This program spoofs your linux terminal history so that commands used for hacking don't actually show up when somebody checks your history ;)

This program is built using C and uses the linux - libreadline8 and libreadline-dev libraries. 
I also made a python version of this which is working perfectly ( it targets the zsh history file because I was using Kali Linux ) - https://github.com/Antas-Sharma36/Cyber-Hackathon 

This program has only been tested on Debian 64 bit systems but might also work on other linux based distros. 

This will most probably not work on Windows and Mac devices even when the required libraries are installed. 

I may add support for them.

As of now,  this project is working perfectly for the custom history file - "history_file". 

**Note** - This project is _still in development_.

Please see the Scope for what I am currently working on. 


## Run Locally

Clone the project

```bash
  git clone https://github.com/Antas-Sharma36/THS
```

Go to the project directory

```bash
  cd THS-main
```

Install dependencies

```bash
  sudo apt-get install libreadline8 libreadline-dev
```




As of now, I was using GCC C compiler for compilation -
```bash
  gcc main.c -o m -lreadline
```
and then running it using - 
```
./m 
````

(We can obviously use any other name or even exclude the -o flag during compilation)

I plan to use modern practices for this project such as - using Makefiles, Cmake, Conan, etc after rectifying some segmentation errors that I am getting on modifying some lines of the code. 

**This program is _fully working_, however.**

## Scope of the project

I am currently working on - 
- Error-free execution of this program regardless of the history file and targeting the actual history file ( I am using a custom file for now).
- Removal of all segmentation errors that are occuring on modifying small parts of the code.  
- Live history spoofing - will spoof all commands as soon as they are entered in the terminal.
- Optimizing the code and following best practices for C development
- Cross platform support
- Researching how we can detect and stop usage of such tools for purposes such as National security, etc.


## Example

https://imgur.com/a/vanIYAM

