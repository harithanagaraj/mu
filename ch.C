include <stdio.h>
#include<conio.h>
void main().

 
void predigit(char num1, char num2);
void postdigit(char c, int n);
 
char romanval[1000];
int i = 0;
int main()
{
    int j;
    long number;
 
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number <= 0)
    {
        printf("Invalid number");
        return 0;
    }
    while (number != 0)
    {
        if (number >= 1000)
        {
            postdigit('M', number / 1000);
            number = number - (number / 1000) * 1000;
        }
        else if (number >= 500)
        {
            if (number < (500 + 4 * 100))
            {
                postdigit('D', number / 500);
                number = number - (number / 500) * 500;
            }
            else
           
