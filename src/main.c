# include <netco.h>
# include <nc_stdint.h>
# include <nc_stdbool.h>
# include <stdio.h>

priv fn void test_booleans();
priv fn void test_types();

fn int main(void)
{
    test_booleans();
    test_types();

    printf("Alright!\n");
}

/// Using (nc_)stdbool.h
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

/// Using (nc_)stdint.h
void test_types()
{
    int32_t sint = 3;
    printf("sint: %d\n", sint);
}

