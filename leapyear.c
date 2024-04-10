#include <stdio.h>
int main()
{
    int start_year, end_year;
    printf("Enter Start year:");
    scanf("%d", &start_year);
    printf("Enter End year:");
    scanf("%d", &end_year);

    for (int i = start_year; i <= end_year; i++)
    {
        if (i % 4 == 0)
        {
            printf("\n%d is a leap year",i);
        }
        
    }
}
