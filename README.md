# J-Calc.cpp

## 📖 Description
This is a small project that is a command line calculator that can run commands on your system, aswell as doing simple math.
## 🚀 Usage
This is how a command should go using our tool.
<mode> <command>
### 0
mode 0 will quit the program.
```jcalc
jcalc:~$ 0
     Quiting Program!
```
### 1
mode 1 will run a command on your system.
```jcalc
jcalc:~$ 1 cls
```
## 2
mode 2 will do math between two numbers.
```jcalc
jcalc:~$ 2 5 + 5
     10
```
## 🛠️ Installation

This project is meant for Windows! Anything else may not work properly!

---

### 🪟 Windows (Command Prompt)

1.  **Install `g++` (via MinGW):**
    * Download and install MinGW from [https://www.mingw-w64.org/](https://www.mingw-w64.org/)
    * During installation, select the `g++` component.
    * After installing, add `C:\MinGW\bin` (or wherever you installed it) to your system `PATH`.

2.  **Clone this repository:**
    ```cmd
    git clone https://github.com/Joseph-Chierichella/J-Calc.cpp.git
    cd J-Calc.cpp\script
    ```

3.  **Compile and Run:**
    ```cmd
    g++ J-Calc.cpp -o J-Calc
    J-Calc.exe
    ```

---
