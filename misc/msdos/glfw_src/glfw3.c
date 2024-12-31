# include <GLFW/glfw3.h>
# include <stdio.h>

int glfwInit(void)
{
    printf("[LOGGING] Initialized custom GLFW!\n");
    return GLFW_TRUE;
}

void glfwTerminate(void)
{
    printf("[LOGGING] Bye!\n");
}
