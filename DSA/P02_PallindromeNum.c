#include <stdio.h>

int isPalindrome(int x)
{
    int rev = 0;
    int rem = 0;
    if (x < 0){
        return 0;
    }
    while (x > 0)
    {
        rem = x%10;
        rev = rev *10 + rem;
        x = x/10;
    }

    return rev;

}

int main()
{
    int pal = isPalindrome(10);
    printf("%d", pal);
}