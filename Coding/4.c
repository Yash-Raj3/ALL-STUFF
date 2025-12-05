#include <stdio.h>
#include <math.h>

// Function Prototype
double calculateRepayment(double loan, double interestRate, int years, double installment, double extraPayment, int currentYear, int maxYears);

int main() {
    // --- Loan Parameters ---
    double loanAmount = 100000.0;
    double annualRate = 5.0;
    int durationYears = 3;
    
    // Standard Annuity Formula Calculation for fixed installment
    // P = (r * PV) / (1 - (1 + r)^-n)
    double r = annualRate / 100.0;
    double installment = (r * loanAmount) / (1 - pow(1 + r, -durationYears));
    
    double extraPayment = 0.0; // Set to > 0 to test the "Extension" logic

    printf("--- Loan Details ---\n");
    printf("Principal: %.2f\n", loanAmount);
    printf("Interest Rate: %.2f%%\n", annualRate);
    printf("Duration: %d years\n", durationYears);
    printf("Calculated Annual Installment: %.2f\n\n", installment);

    printf("--- Repayment Schedule ---\n");
    
    // Initial Recursive Call
    double totalRepaid = calculateRepayment(loanAmount, annualRate, durationYears, installment, extraPayment, 1, durationYears);

    printf("---------------------------------\n");
    printf("Total Amount Repaid: %.2f\n", totalRepaid);

    return 0;
}

// Recursive Function Definition
double calculateRepayment(double loan, double interestRate, int yearsRemaining, double installment, double extraPayment, int currentYear, int maxYears) {
    
    // --- Base Case ---
    // Stop if years run out OR loan is fully paid (allowing for small floating point margin of error)
    if (currentYear > maxYears || loan <= 0.01) {
        return 0.0;
    }

    // --- Recursive Case ---
    
    // 1. Calculate Interest
    double interestAccrued = loan * (interestRate / 100.0);
    
    // 2. Balance before payment
    double balanceWithInterest = loan + interestAccrued;
    
    // 3. Determine Payment (Standard + Extra)
    double totalAttemptedPayment = installment + extraPayment;
    
    // Handle final year or overpayment: Do not pay more than what is owed
    double actualPayment = totalAttemptedPayment;
    if (balanceWithInterest < totalAttemptedPayment) {
        actualPayment = balanceWithInterest;
    }

    // 4. Update Remaining Loan
    double remainingLoan = balanceWithInterest - actualPayment;
    
    // Avoid -0.00 display issues
    if (remainingLoan < 0) remainingLoan = 0;

    // 5. Print Status
    printf("Year %d: Interest = %8.2f | Payment = %8.2f | Remaining Loan = %8.2f\n", 
           currentYear, interestAccrued, actualPayment, remainingLoan);

    // 6. Recursive Step
    // Return this year's payment + the result of the recursion
    return actualPayment + calculateRepayment(remainingLoan, interestRate, yearsRemaining - 1, installment, extraPayment, currentYear + 1, maxYears);
}