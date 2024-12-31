# include <stdint.h>
# include <stdbool.h>
# include <stdio.h>

void test_booleans();
void test_types();

int main(void)
{
    test_booleans();
    test_types();

    printf("Alright!\n");
}

void test_booleans()
{
    bool a = true;
    if (a)
        printf("This should print in console.\n");

    bool b = false;
    if (b)
        printf("This shouldn't print in console!\n");
    else
        printf("And this.\n");
}

void test_types()
{
    int32_t sint = 3;
    printf("sint: %d\n", sint);
}

