# include <stdio.h>
# include <stdlib.h>
# include <GLFW/glfw3.h>

int main(void)
{
    if (!glfwInit())
    {
        printf("[GLFW]: Unable to initialize GLFW!\n");
        return EXIT_FAILURE;
    }


    glfwTerminate();

    return EXIT_SUCCESS;
}
