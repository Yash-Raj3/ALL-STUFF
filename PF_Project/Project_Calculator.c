// Scientific Calculator Program 
#include <stdio.h>
#include <stdlib.h> //for color on console and clearing screen
#include <math.h>   // for Trigonometric, Logarithmic and Exponential function
#define PI 3.141592654
long long intResult = 0;
double k = 0, result = 0;
int menuScreen()
{
    int choice;
    system("cls");
    printf("\n====CONVERTER====\n");
    printf("1) PHYSICAL QUANTITES,\n");
    printf("2) EXIT PROGRAM.\n\n");
    printf("ENTER YOUR CHOICE: ");
    scanf("%d", &choice);
    return choice;
}
int phyQtyScreen()
{ // |Funtion for physical quantities menu
    int choice;
    system("cls");
    printf("============PHYSICAL QUANTITIES============\n\n");
    printf("1) DISTANCE\n");
    printf("2) TIME\n");
    printf("3) VELOCITY\n");
    printf("4) WEIGHT\n");
    printf("5) TEMPERATURE,\n");
    printf("6) BACK TO MENU.\n\n");
    printf("ENTER YOUR CHOICE:");
    scanf("%d", &choice);
    return choice;
}

void DistanceScreen()
{ // Function for Distance Conversion
    int choice;
    float value, mVal, km = 1000, cm = 0.01, in = 0.0254, ft = 0.3048, mi = 1609.344, yd = 0.9144;
    system("cls");
    printf("============DISTANCE============\n\n");
    printf("SELECT A UNIT TO CONVERT FROM:\n");
    printf("1) METERS (m),\n");
    printf("2) KILOMETERS (Km),\n");
    printf("3) CENTIMETERS (cm),\n");
    printf("4) MILES (mi),\n");
    printf("5) YARDS (yd),\n");
    printf("6) FEET (ft),\n");
    printf("7) INCHES (in),\n");
    printf("8) BACK TO MENU.\n\n");
    printf("ENTER YOUR CHOICE: ");
    scanf("%d", &choice);
    if (choice == 8)
    {
        return;
    }
    else
    {
        system("cls");
        printf("ENTER VALUE TO CONVERT: ");
        scanf("%f", &value);
        switch (choice)
        {
        case 1:
            mVal = value;
            break;
        case 2:
            mVal = value * km;
            break;
        case 3:
            mVal = value * cm;
            break;
        case 4:
            mVal = value * mi;
            break;
        case 5:
            mVal = value * yd;
            break;
        case 6:
            mVal = value * ft;
            break;
        case 7:
            mVal = value * in;
            break;
        }
        printf("RESULTS:\n");
        printf("%.4f m \t%.4f km \t%.4f cm \t%.4f mi \n%.4f yd \t%.4f ft \t%.4f in\n", mVal, mVal / km, mVal / cm, mVal / mi, mVal / yd, mVal / ft, mVal / in);
        printf("PRESS ENTER TO CONTINUE...");
        getchar();
        getchar();
        DistanceScreen();
    }
}
void timeScreen()
{
    int choice; // Function for Time Conversion
    float value, sVal, ms = 0.001, mt = 60, hr = 3600, d = 86400, yr = 31556952;
    system("cls");
    printf("============TIME============\n\n");
    printf("SELECT A UNIT TO CONVERT FROM:\n");
    printf("1) MILISECONDS (ms),\n");
    printf("2) SECONDS (s),\n");
    printf("3) MINUTES (mt),\n");
    printf("4) HOURS (hr),\n");
    printf("5) DAYS (d),\n");
    printf("6) YEARS (yr),\n");
    printf("7) BACK TO MENU.\n\n");
    printf("ENTER YOUR CHOICE: ");
    scanf("%d", &choice);
    if (choice == 7)
    {
        return;
    }
    else
    {
        system("cls");
        printf("ENTER VALUE TO CONVERT: ");
        scanf("%f", &value);
        switch (choice)
        {
        case 1:
            sVal = value * ms;
            break;
        case 2:
            sVal = value;
            break;
        case 3:
            sVal = value * mt;
            break;
        case 4:
            sVal = value * hr;
            break;
        case 5:
            sVal = value * d;
            break;
        case 6:
            sVal = value * yr;
            break;
        }
        printf("RESULTS:\n");
        printf("%.3f ms \t%.3f s \t%.3f mt \n%.3f hr \t%.3f d \t%.f yr\n", sVal / ms, sVal, sVal / mt, sVal / hr, sVal / d, sVal / yr);
        printf("PRESS ENTER TO CONTINUE...");
        getchar();
        getchar();
        timeScreen();
    }
}
void VelocityScreen()
{ // Funtion For
    int choice;
    float value, msVal, kmh = (1 / 3.6), mph = 0.44704, fts = 0.3048, kn = 0.514444;
    system("cls");
    printf("============VELOCITY============\n\n");
    printf("SELECT A UNIT TO CONVERT FROM:\n");
    printf("1) METERS PER SECOND (m/s),\n");
    printf("2) KILOMETERS PER HOUR (Km/h),\n");
    printf("3) MILES PER HOUR (mi/h),\n");
    printf("4) FEET PER SECOND (ft/s),\n");
    printf("5) KNOTS (kn),\n");
    printf("6) BACK TO MENU.\n\n");
    printf("ENTER YOUR CHOICE: ");
    scanf("%d", &choice);
    if (choice == 6)
    {
        return;
    }
    else
    {
        system("cls");
        printf("ENTER VALUE TO CONVERT: ");
        scanf("%f", &value);
        switch (choice)
        {
        case 1:
            msVal = value;
            break;
        case 2:
            msVal = value * kmh;
            break;
        case 3:
            msVal = value * mph;
            break;
        case 4:
            msVal = value * fts;
            break;
        case 5:
            msVal = value * kn;
            break;
        }
        printf("RESULTS:\n");
        printf("%.3f m/s \t%.3f km/h \t%.3f mi/h \n%.3f ft/s \t%.3f kn\n", msVal, msVal / kmh, msVal / mph, msVal / fts, msVal / kn);
        printf("PRESS ENTER TO CONTINUE...");
        getchar();
        getchar();
        VelocityScreen();
    }
}
void weightScreen()
{ // Weight Conversion Function
    int choice;
    float value, kgVal, g = 0.001, lbs = 0.45359237, oz = 0.0283495231, t = 1000;
    system("cls");
    printf("============WEIGHT============\n\n");
    printf("SELECT A UNIT TO CONVERT FROM:\n");
    printf("1) GRAMS (g),\n");
    printf("2) KILOGRAMS (Kg),\n");
    printf("3) POUNDS (lbs),\n");
    printf("4) OUNCES (oz),\n");
    printf("5) TONNES (t),\n");
    printf("6) BACK TO MENU.\n\n");
    printf("ENTER YOUR CHOICE: ");
    scanf("%d", &choice);
    if (choice == 6)
    {
        return;
    }
    else
    {
        system("cls");
        printf("ENTER VALUE TO CONVERT: ");
        scanf("%f", &value);
        switch (choice)
        {
        case 1:
            kgVal = value * g;
            break;
        case 2:
            kgVal = value;
            break;
        case 3:
            kgVal = value * lbs;
            break;
        case 4:
            kgVal = value * oz;
            break;
        case 5:
            kgVal = value * t;
            break;
        }
        printf("RESULTS:\n");
        printf("%.3f g \t%.3f kg \t%.3f lbs \n%.3f oz \t%.3f t\n", kgVal / g, kgVal, kgVal / lbs, kgVal / oz, kgVal / t);
        printf("PRESS ENTER TO CONTINUE...");
        getchar();
        getchar();
        weightScreen();
    }
}
void temperatureScreen()
{
    int choice;
    float value, C_Val;
    system("cls");
    printf("============MASS============\n\n");
    printf("SELECT A UNIT TO CONVERT FROM:\n");
    printf("1) KELVIN (K),\n");
    printf("2) DEGREES CELSIUS (C),\n");
    printf("3) DEGREES FAHRENHEIT (F),\n");
    printf("4) BACK TO MENU.\n\n");
    printf("ENTER YOUR CHOICE: ");
    scanf("%d", &choice);
    if (choice == 4)
    {
        return;
    }
    else
    {
        system("cls");
        printf("ENTER VALUE TO CONVERT: ");
        scanf("%f", &value);
        switch (choice)
        {
        case 1:
            C_Val = value - 273.15;
            break;
        case 2:
            C_Val = value;
            break;
        case 3:
            C_Val = (value - 32.0) * (5.0 / 9.0);
            break;
        }
        printf("RESULTS:\n");
        printf("%.2f K \t%.2f C \t%.2f F\n", C_Val + 273.15, C_Val, (C_Val * (9.0 / 5.0)) + 32.0);
        printf("PRESS ENTER TO CONTINUE...");
        getchar();
        getchar();
        temperatureScreen();
    }
}
void Calcmenu()
{
    printf("\n====CALCULATOR====\n");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Remainder");
    printf("\n6. Factorial");
    printf("\n7. Sine");
    printf("\n8. Cosine");
    printf("\n9. Tangent");
    printf("\n10.log(base e)");
    printf("\n11.log(base 10)");
    printf("\n12.e^x");
    printf("\n13.SquareRoot");
    printf("\n14.CubeRoot");
    printf("\n15.Power");
    printf("\n16.Absolute Value");
    printf("\n17.Sine Inverse");
    printf("\n18.Cosine Inverse");
    printf("\n19.Tangent Inverse");
    printf("\n20.Ceil Function");
    printf("\n21.Floor Function");
    printf("\n22.Permutation (nPr)");
    printf("\n23.Combination (nCr)");
    printf("\n24.Clear");
    printf("\n25.Exit");
}
// Function to add numbers
void addition()
{
    system("Cls");
    double a, b;
    if (k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        result += a;
        printf("\nResult = %lf", result);
    }
    else
    {
        printf("\nEnter two numbers: ");
        scanf("%lf%lf", &a, &b);
        result = a + b;
        printf("\nResult = %lf", result);
    }
}

// Function to subtract numbers
void subtraction()
{
    system("Cls");
    double a, b;
    if (k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        result -= a;
        printf("\nResult = %lf", result);
    }
    else
    {
        printf("\nEnter two numbers: ");
        scanf("%lf%lf", &a, &b);
        result = a - b;
        printf("\nResult = %lf", result);
    }
}
// Function to multiply numbers
void multiplication()
{
    system("Cls");
    double a, b;
    if (k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        result *= a;
        printf("\nResult = %lf", result);
    }
    else
    {
        printf("\nEnter two numbers: ");
        scanf("%lf%lf", &a, &b);
        result = a * b;
        printf("\nResult = %lf", result);
    }
}
// Function to divide numbers
void division()
{
    system("Cls");
    double a, b;
    if (k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        if (a != 0)
        {
            result /= a;
            printf("\nResult = %lf", result);
        }
        else
        {
            printf("Math Error\n");
        }
    }
    else
    {
        printf("\nEnter two numbers: ");
        scanf("%lf%lf", &a, &b);
        if (b != 0)
        {
            result = a / b;
            printf("\nResult = %lf", result);
        }
        else
        {
            printf("Math Error\n");
        }
    }
}
// Function to find remainder
void mod()
{
    system("Cls");
    long long a, b;
    if (k)
    {
        printf("\nEnter a number: ");
        scanf("%lld", &a);
        intResult %= a;
        printf("\nResult = %d", intResult);
    }
    else
    {
        printf("\nEnter two numbers: ");
        scanf("%lld%lld", &a, &b);
        intResult = a % b;
        printf("\nResult = %lld", intResult);
    }
}

// Function to calculate factorial of a number
void factorial()
{
    system("Cls");
    long long n, f, i;
    printf("\nEnter a number: ");
    scanf("%lld", &n);
    f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    intResult = f;
    printf("\nResult = %lld", intResult);
}
long long factorialReturn(long long n)
{
    long long f, i;
    f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

// Function to calculate sine of angle in radians
void sine()
{
    system("Cls");
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = sin(a);
    printf("\nResult = %lf", result);
}

// Function to calculate cosine of angle in radians
void cosine()
{
    system("Cls");
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = cos(a);
    printf("\nResult = %lf", result);
}

// Function to calculate tangent of angle in radians
void tangent()
{
    system("Cls");
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = tan(a);
    printf("\nResult = %lf", result);
}

// Function to calculate log (base e)
void logBasee()
{
    system("Cls");
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if (a <= 0.0)
    {
        printf("Math Error\n");
    }
    else
    {
        result = log(a);
        printf("\nResult = %lf", result);
    }
}

// Function to calculate log (base 10)
void logBase10()
{
    system("Cls");
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if (a <= 0.0)
    {
        printf("Math Error\n");
    }
    else
    {
        result = log10(a);
        printf("\nResult = %lf", result);
    }
}

// Function to calculate e^x
void eToPowerX()
{
    system("Cls");
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    result = exp(a);
    printf("\nResult = %lf", result);
}

// Function to find the Square Root of a Number
void squareRoot()
{
    system("Cls");
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Math Error\n");
    }
    else
    {
        result = sqrt(n);
        printf("\nResult = %lf", result);
    }
}

// Function to find the Cube Root of a Number
void cubeRoot()
{
    system("Cls");
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    result = cbrt(n);
    printf("\nResult = %lf", result);
}

// Function to find the Power of a Number
void power()
{
    system("Cls");
    double base, expo;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &expo);
    result = pow(base, expo);
    printf("%.1lf^%.1lf = %.2lf", base, expo, result);
}

// Function to find the Absolute Value of a Number
void absolute()
{
    system("Cls");
    int n;
    printf("\nEnter a number: ");
    scanf("%lld", &n);
    intResult = abs(n);
    printf("\nResult = %lld", intResult);
}

// Function to compute the arc sine(inverse sine) of an argument
void sineInverse()
{
    system("Cls");
    double n;
    printf("\nEnter a number: ");
    scanf("%lf", &n);
    if (n > 1 || n < -1)
    {
        printf("Not in Range");
    }
    else
    {
        result = asin(n);
        printf("Inverse of sin(%.2f) = %.2lf in radians\n", n, result);

        // converting radians to degree
        result = asin(n) * 180 / PI;
        printf("Inverse of sin(%.2f) = %.2lf in degrees\n", n, result);
    }
}

// Function to compute the arc cosine(inverse cosine) of an argument
void cosineInverse()
{
    system("Cls");
    double n;
    printf("\nEnter a number: ");
    scanf("%lf", &n);
    if (n > 1 || n < -1)
    {
        printf("\nNot in Range");
    }
    else
    {
        result = acos(n);
        printf("\nInverse of cos(%.2f) = %.2lf in radians\n", n, result);

        // converting radians to degree
        result = acos(n) * 180 / PI;
        printf("\nInverse of cos(%.2f) = %.2lf in degrees\n", n, result);
    }
}

// Function to compute the arc tangent(inverse tangent) of an argument
void tangentInverse()
{
    system("Cls");
    double n;
    printf("\nEnter a number: ");
    scanf("%lf", &n);
    result = atan(n);

    printf("\nInverse of tan(%.2f) = %.2f in radians", n, result);

    // Converting radians to degrees
    result = (result * 180) / PI;
    printf("\nInverse of tan(%.2f) = %.2f in degrees", n, result);
}

// This function gives the smallest integer that is greater than or equal to Number
void ceilF()
{
    system("Cls");
    double n;
    printf("\nEnter a number: ");
    scanf("%lf", &n);
    result = ceil(n);
    printf("Ceiling integer of %.2f = %f", n, result);
}

// This function gives the largest integer that is smaller than or equal to Number
void floorF()
{
    system("Cls");
    double n;
    printf("\nEnter a number: ");
    scanf("%lf", &n);
    result = floor(n);
    printf("Floor integer of %.2f = %f", n, result);
}

// Function to calculate Permutations (nPr)
void npr()
{
    system("Cls");
    long long n, r;
    printf("\nEnter two numbers: ");
    scanf("%lld%lld", &n, &r);
    if (n >= r && n > 0 && r >= 0)
    {
        intResult = factorialReturn(n) / factorialReturn(n - r);
        printf("\nResult = %lld", intResult);
    }
    else
    {
        printf("Math Error\n");
    }
}

// Function to calculate Combinations (nCr)
void ncr()
{
    system("Cls");
    long long n, r;
    printf("\nEnter two numbers: ");
    scanf("%lld %lld", &n, &r);
    if (n >= r && n > 0 && r >= 0)
    {
        intResult = factorialReturn(n) / (factorialReturn(r) * factorialReturn(n - r));
        printf("\nResult = %lld", intResult);
    }
    else
    {
        printf("Math Error\n");
    }
}
// MAIN
int main()
{
    system("Color 30");
    int input;
    int userChoice, unitChoice;
    while (input != 3)
    {
        printf("\n====CALCULATOR & CONVERTER====\n");
        printf("1.Calculator\n");
        printf("2.Converter\n");
        printf("3.Exit the Program\n");
        printf("Enter Your Choice: ");
        scanf("%d", &input);
        printf("\n=========================================\n");
        switch (input)
        {
        case 1:
            system("Cls");
            int ch = 0;
            do
            {
                // Displaying the current results
                printf("\nOld Decimal Result = %.4f", result);
                printf("\nOld Integer Result = %d", intResult);
                Calcmenu();
                printf("\nEnter your choice: ");
                scanf("%d", &ch);
                // Switch Menu
                switch (ch)
                {
                case 1:
                    addition();
                    k = 1;
                    break;

                case 2:
                    subtraction();
                    k = 1;
                    break;

                case 3:
                    multiplication();
                    k = 1;
                    break;

                case 4:
                    division();
                    k = 1;
                    break;

                case 5:
                    mod();
                    k = 1;
                    break;

                case 6:
                    factorial();
                    k = 1;
                    break;

                case 7:
                    sine();
                    k = 1;
                    break;

                case 8:
                    cosine();
                    k = 1;
                    break;

                case 9:
                    tangent();
                    k = 1;
                    break;

                case 10:
                    logBasee();
                    k = 1;
                    break;

                case 11:
                    logBase10();
                    k = 1;
                    break;

                case 12:
                    eToPowerX();
                    k = 1;
                    break;

                case 13:
                    squareRoot();
                    k = 1;
                    break;

                case 14:
                    cubeRoot();
                    k = 1;
                    break;

                case 15:
                    power();
                    k = 1;
                    break;

                case 16:
                    absolute();
                    k = 1;
                    break;

                case 17:
                    sineInverse();
                    k = 1;
                    break;

                case 18:
                    cosineInverse();
                    k = 1;
                    break;

                case 19:
                    tangentInverse();
                    k = 1;
                    break;

                case 20:
                    ceilF();
                    k = 1;
                    break;

                case 21:
                    floorF();
                    k = 1;
                    break;

                case 22:
                    npr();
                    k = 1;
                    break;

                case 23:
                    ncr();
                    k = 1;
                    break;

                case 24:
                    result = 0;
                    intResult = 0;
                    k = 0;
                    break;
                case 25:
                    printf("Exiting To Main Menu\n");
                    break;
                default:
                    printf("\nInvalid Choice !");
                }

                printf("\nPress any button to continue......");
                getchar();
                getchar();
                system("cls");
            } while (ch != 25);
            break;
        case 2:
            do
            {
                userChoice = menuScreen();
                switch (userChoice)
                {
                case 1:
                    do
                    {
                        unitChoice = phyQtyScreen();
                        switch (unitChoice)
                        {
                        case 1:
                            DistanceScreen();
                            break;
                        case 2:
                            timeScreen();
                            break;
                        case 3:
                            VelocityScreen();
                            break;
                        case 4:
                            weightScreen();
                            break;
                        case 5:
                            temperatureScreen();
                            break;
                        }
                    } while (unitChoice != 6);
                    break;
                case 2:
                    printf("Exiting to Main Menu...\n");
                    system("Cls");
                    break;
                default:
                    printf("Invalid Choice!\n");
                }
            } while (userChoice != 2);
            break;
        case 3:
            printf("Exiting....");
            return 0;
            break;
        default:
            printf("Invalid Choice!");
        }
    }
}
