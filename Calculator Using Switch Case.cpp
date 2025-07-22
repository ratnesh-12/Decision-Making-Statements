#include <iostream>
using namespace std;

int main() {
    int choice;
    int num1, num2;

    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
 OUTPUT:
1. Add
2. Subtract
3. Multiply
4. Divide
Enter your choice (1-4): 3
Enter two numbers: 12 12
Result: 144

=== Code Execution Successful ===
