# Experiment-5
# Tools used:
Programiz online compiler

# 1. Calculator using Switch Case<br>

# Aim:<br>
To create a basic calculator that performs addition, subtraction, multiplication, and division using switch-case statements.<br>

# Theory:<br>
A calculator program is a fundamental example for learning conditional statements and user input handling. The switch-case control structure helps execute different blocks of code based on the operator input by the user. This ensures clean, readable, and efficient logic for arithmetic operations.<br>

# Algorithm:<br>
Start the program.<br>
Prompt the user to enter two numbers.<br>
Ask the user to enter an operator (+, -, *, /).<br>
Use a switch-case structure to perform the operation based on the operator.<br>
Display the result.<br>
End the program.<br>

# 2. Largest Number Program<br>

# Aim:<br>
To find the largest number among three numbers entered by the user.<br>

# Theory:<br>
To determine the largest of three numbers, simple conditional (if-else) statements can be used. Comparisons are made in sequence to identify which number is greater than the others.<br>

# Algorithm:<br>
1. Start the program.<br>
2. Input three numbers from the user.<br>
3. Compare the numbers using if-else conditions:<br>
   - If num1 > num2 and num1 > num3, then num1 is largest.<br>
   - Else if num2 > num1 and num2 > num3, then num2 is largest.<br>
   - Else, num3 is largest.<br>
Display the largest number.<br>
End the program.<br>

# 3. Number Guess Game using Switch Case<br>

# Aim:<br>
To create a number guessing game where the user attempts to guess a predefined number using switch-case for interaction logic.<br>

# Theory:<br>
The number guessing game enhances logical thinking and user interaction handling. Though normally built with loops and if-else, this version uses switch-case for creative implementation of choices and feedback.<br>

# Algorithm:<br>
Start the program.<br>
Generate a random number between 1 and 10 using:<br>
srand(time(0)) to seed the random number generator.<br>
rand() % 10 + 1 to get a number in the range 1 to 10.<br>
Initialize variables:<br>
guess for user input.<br>
attempts = 0 to track the number of tries.<br>
Display game instructions to the user.<br>
Start a loop that runs while attempts < 3:<br>
a. Ask the user to enter their guess.<br>

b. If the guess matches the secret number:<br>
Print “You guessed it right!”<br>
Exit the loop using break.<br>

c. Else:<br>
Use switch(attempts) to give different responses:<br>
Case 0: Give a hint — say whether the secret number is higher or lower than the guess.<br>
Case 1: Print “Try again”.<br>
Case 2: Reveal the correct number and end the game.<br>
Increment the attempt counter.<br>
After the loop ends, print “Thanks for playing.”<br>
End the program.<br>

# 4. Odd or Even Program<br>

# Aim:<br>
To check whether the number entered by the user is odd or even.<br>

# Theory:<br>
Odd and even numbers can be identified using the modulus operator `%`. If the number modulo 2 equals 0, it is even; otherwise, it's odd. This is a common starter program to understand conditionals.<br>

# 5. Vowel or Consonant Program<br>

# Aim:<br>
To determine whether a given alphabet is a vowel or a consonant.<br>

# Theory:<br>
This program checks if the input character matches any of the vowels (`a, e, i, o, u`) either in lowercase or uppercase. If it matches, it is a vowel; otherwise, it is treated as a consonant. Useful for understanding character comparisons and conditionals.

Theory:<br>
This program checks if the input character matches any of the vowels (`a, e, i, o, u`) either in lowercase or uppercase. If it matches, it is a vowel; otherwise, it is treated as a consonant. Useful for understanding character comparisons and conditionals.  

# Conclusion: 
These programs use switch-case and conditionals in C++ to build interactive logic-based solutions.
