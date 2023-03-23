#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

void Addition();
void Subtraction();
void Multiplication();
void Division();
void Power();
void Factorial();
void Squareroot();
void Cuberoot();
void Binary_decimal();
void Decimal_binary();
void fibonacci_series();

int main()
{
    system("CLS");
    cout << "\n\t\t\tWELCOME TO MY CALCULATOR, MADE BY : shubham jha.\n ";
    cout << " 1.  Addition \n";
    cout << "  2.  Subtraction \n";
    cout << "  3.  Multiplication \n";
    cout << "  4.  Division \n";
    cout << "  5.  Power \n";
    cout << "  6.  Factorial \n";
    cout << "  7.  Squareroot\n";
    cout << "  8.  Cuberoot\n";
    cout << "  9.  Binary to decimal conversion\n";
    cout << " 10.  Decimal to binary conversion\n";
    cout << " 11.  fibonacci_series\n";
    cout << " 12.  EXIT\n";

    int choice;
    while (1)
    {
        cout << "Enter you choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Addition();
            break;
        case 2:
            Subtraction();
            break;
        case 3:
            Multiplication();
            break;
        case 4:
            Division();
            break;
        case 5:
            Power();
            break;
        case 6:
            Factorial();
            break;
        case 7:
            Squareroot();
            break;
        case 8:
            Cuberoot();
            break;
        case 9:

            Binary_decimal();
            break;
        case 10:

            Decimal_binary();
            break;
        case 11:
            fibonacci_series();
            break;
        case 12:
            exit(0);
            break;
        default:
            cout << "\n* * * * * * *         Wrong choice, Enter valid choice         * * * * * * *\n\n";
            break;
        }
    }
    return 0;
}

void Binary_decimal()
{
    int bin, dec = 0, i = 0, remainder;
    cout << "enter the binary number ";
    cin >> bin;
    int sum = bin;
    while (sum != 0)
    {

        remainder = bin % 10;
        dec = dec + (remainder * pow(2, i));
        i++;
        sum = sum / 10;
    }
    cout << "the decimal conversion of " << bin << " is " << dec << endl;
}
void Addition()
{
    cout << "Enter the numbers you want to add: ";
    int a, b;
    cin >> a >> b;
    cout << "The addition of " << a << " and " << b << " is " << a + b << endl;
}
void Subtraction()
{
    cout << "Enter the numbers you want to subtract: ";
    int a, b;
    cin >> a >> b;
    cout << "The subtraction of " << a << " and " << b << " is " << a - b << endl;
}
void Multiplication()
{
    cout << "Enter the numbers you want to multipliation: ";
    int a, b;
    cin >> a >> b;
    cout << "The multiplication of " << a << " and " << b << " is " << a * b << endl;
}
void Division()
{
    cout << "Enter the numbers you want to divide: ";
    int a, b;
    cin >> a >> b;
    cout << "The division of " << a << " and " << b << " is " << (float)a / (float)b << endl;
}
void Power()
{
    int a, b;
    cout << "enter the number :";
    cin >> a;
    cout << "enter the power of the number :";
    cin >> b;

    cout << "the answer is  " << pow(a, b) << endl;
}
void Factorial()
{
    int n, i;
    cout << "enter the number : ";
    cin >> n;
    int ans = 1;
    for (int i = n; i > 0; i--)
    {
        ans = ans * i;
    }
    cout << "the factorial of " << n << " is " << ans << endl;
}
void Squareroot()
{
    cout << "Enter the number you want the square root of: ";
    double n;
    cin >> n;
    double squareRoot = sqrt(n);
    cout << "The Square root of " << n << " is " << squareRoot << endl;
}
void Cuberoot()
{
    cout << "Enter the number you want the cube root of : ";
    double n;
    cin >> n;
    double cubeRoot = cbrt(n);
    cout << "The cube root of " << n << " is " << cubeRoot << endl;
}
void Decimal_binary()
{
    int num, bin;
    cout << "\nEnter the number : \n";
    cin >> num;
    cout << "The binary equivalent of " << num << " is ";
    while (num > 0)
    {
        bin = num % 2;
        cout << bin;
        num /= 2;
    }
    cout << endl;
}
void fibonacci_series()
{
    int n;
    cout << "enter the number of terms : ";
    cin >> n;
    int term1 = 0;
    int term2 = 1;
    int nextterm;
    cout << "fibonacci series is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << term1 << " ";
        nextterm = term1 + term2;
        term1 = term2;
        term2 = nextterm;
    }
    cout << endl;
}