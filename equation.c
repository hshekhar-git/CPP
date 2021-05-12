#include < stdio. h >

int main()

{

    int i, n = 130;

    for (i = 1; i < 130; i + +) // for loop

    {

        if (i + (n - i) == 130)

        {
            printf(" x = % d ", i);

            printf(" y = % d ", (n - i));
        }

        return 0;
    }