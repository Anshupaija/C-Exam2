#include <stdio.h>
int main()
{
    int age;
    // take input of user's age
    printf("Enter Your Age: ");
    scanf("%d", &age);

    // check if user can marry or not
    (age > 21) ? printf("You Can Marry!!") : printf("Go and watch Pogo...");
}