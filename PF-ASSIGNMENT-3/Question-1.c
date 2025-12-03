#include <stdio.h>
int calculateRepayment(float loan, float rate, int years, int currentYear, float extrapayment)
{
    if (years <= 0 || loan <= 0)
    {
        return 0;
    }
    float interest = loan * (rate / 100);
    float Totalamount = loan + interest;
    float installment = Totalamount / years;
    float total = installment + extrapayment;

    float remaining = Totalamount - total;
    printf("Year: %d Remaining Loan: %.2f  (Interest: %.2f and Installment: %.2f)\n ", currentYear, remaining, rate, total);

    return total + calculateRepayment(remaining, rate, years - 1, currentYear + 1, extrapayment);
}
int main()
{
    float Initialloan;
    float rate;
    int year;
    char choice;
    float extrapayment;
    printf("Enter Initial Amount Of Loan: ");
    scanf("%f", &Initialloan);
    printf("Enter Rate of Loan: ");
    scanf("%f", &rate);
    printf("Enter Years: ");
    scanf("%d", &year);
    printf("Do You Want to Give Extra Yearly Payment(Y/N): ");
    scanf(" %c", &choice);
    if (choice == 'Y' || choice == 'y')
    {
        printf("Enter Extra Payment Amount: ");
        scanf("%f", &extrapayment);
    }
    else
    {
        extrapayment = 0.0;
    }
    calculateRepayment(Initialloan, rate, year, 1, extrapayment);
}