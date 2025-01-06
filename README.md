# Bank ATM Simulator

<div align="center">
    <img alt="GitHub Created At" src="https://img.shields.io/github/created-at/KieranPritchard/Bank-ATM-Simulator">
    <img alt="GitHub License" src="https://img.shields.io/github/license/KieranPritchard/Bank-ATM-Simulator">
    <img alt="GitHub commit activity" src="https://img.shields.io/github/commit-activity/t/KieranPritchard/Bank-ATM-Simulator">
    <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/KieranPritchard/Bank-ATM-Simulator">
    <img alt="GitHub language count" src="https://img.shields.io/github/languages/count/KieranPritchard/Bank-ATM-Simulator">
    <img alt="GitHub Repo stars" src="https://img.shields.io/github/stars/KieranPritchard/Bank-ATM-Simulator">
</div>

## Project Description

### Objective

The aim of this project is to create a simulation of a ATM, to help me to improve my procienty with C++. The Reason for building this project is so i can practise working with pointers and by extension, memory management.

### Features

* **User Login:** When the program is loaded the user is asked to input a pin, which for this project is 1234.
* **User Friendly Command Line Interface:** When the user has logged in they will be greeted by user friendly CLI, with all the options layed out that can be inputed.
* **Balance Checking:** Once logged into the program you can access the current account balance.
* **Deposits & Withdrawals:** Another thing you can do when logged in is deposit and withdraw money however, if you try withdrawing more money then you have it won't let you.

### Technologies and Tools Used

* **Language:** C++
* **Frameworks/Librarys:** None
* **Tools:** Git, VS code, and GitHub.

### Challenges Faced

One challenge was managing pointers correctly in C++. Firstly, I struggled with dereferencing pointers to access the actual value instead of the memory address. I fixed this by swapping `&` for `*`.

Another challenge was with formatting. because unlike python where every output is on a new line, isnt the case in c++. How I fixed this was by using `\n` to create a new line at the end of the statement.

### Outcome

I successfully created a simulation of an ATM machine and improved my knowledge and abilities with c++ by using pointers, memory, and debugging.

### Next Steps

To continue expanding my knowledge of C++, by working on different projects. Then to refine my methods to start to take on devloping network and cyber security.

## How to Use the Project

1. **Clone The Repository:**
    * This saves the project to your local device, you can do this with git.
   ```bash
   git clone https://github.com/KieranPritchard/Bank-ATM-Simulator.git
   ```

2. **Compile The Project:**
    * Open the terminal, then navigate to the directory where the bash script is stored. then input this command into the terminal: `chmod +x build.sh`.
    * Then copy the Bank-ATM-Simulator.cpp file into the same folder as the script and use this command:
      ```
      ./build.sh Bank-ATM-Simulator.cpp
      ```
    * This will give the code in executable format.
   
3. **Run The Program:**

    * After successful compilation enter this command to run the program:
      ```
      ./Bank-ATM-Simulator.cpp
      ```
 
4. **Login:**

    * When running, you will be prompted by the program to enter your pin to gain access.
    * For the simulation its `1234`.
    
5. **Select an Option:**

    * After you have logged in, you will see a menu with the following options:
        *  **(1) Balance Inquiry** - This checks account balance.
        *  **(2) Deposit Money** - Deposits funds in your account.
        *  **(3) Withdraw Money** - Withdraws funds from your account, expect if the amount is more then what is in the account.
        *  **(4) Log Out** - Log out of the program and exit.
   
6. **Log Out:**

   * Choose option 4 to log out of the program

## Licenses

License is located in the root of the repository.
