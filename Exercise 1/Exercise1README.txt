Instructions:

Objective:
The goal of this exercise is to ensure you have a development environment for writing and running C programs. You will also write and execute your first C program and learn how to create a GitHub repository to manage your code.

Steps:
1. Check if a C Compiler is Installed
Open your terminal or command prompt.
Type the following command to check if a C compiler (like GCC or Clang) is installed:
gcc --version
Note the version of the C compiler installed. If it’s not installed:
Linux/macOS Users: Install GCC using your package manager (e.g., sudo apt install gcc for Ubuntu or brew install gcc for macOS).
Windows Users: Install a compiler like MinGW or use an IDE that includes a C compiler (see Step 2).
After installation, re-run the gcc --version command to confirm.

2. Install an IDE
Choose one of the following IDEs to write and execute your C programs:

Code::Blocks:
Home Site
Multi-platform, designed for C programming. Ensure you download the version with “mingw-setup” for a bundled compiler.
Eclipse IDE for C/C++:
Home Site
Multi-platform, requires additional setup for C.
Microsoft Visual Studio Community:
Home Site
Free and feature-rich IDE for Windows.
NetBeans for C/C++:
Home Site
Multi-platform IDE supporting C/C++ development.
Alternatively, use an online tool like Ideone or Edube Interactive for simpler setups.

3. Write Your First C Program
Open your chosen IDE or online editor.
Create a new project or file named main.c.
Write the following code:
#include <stdio.h> int main(void) { printf("Hello, World!\n"); return 0; }
Build and run the program.
Verify that Hello, World! is displayed in the console.
