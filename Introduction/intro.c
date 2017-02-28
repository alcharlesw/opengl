// Include standard headers
#include <stdio.h>
#include <stdlib.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <GL/glut.h>
#include <glm/glm.hpp>
using namespace glm;

void error_callback(int error, const char* description)
{
    fprintf(stderr, "Error: %s\n", description);
}

int main(int argc, char** argv)
{
    GLFWwindow* window;

    GLenum gl_error;

    glfwSetErrorCallback(error_callback);

	if (!glfwInit())
    {
    	fprintf(stderr, "Failed to initialize glfw.\n");
        exit(1);
    }

	glfwWindowHint(GLFW_SAMPLES, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(1024, 768, "Tutorial 01", NULL, NULL);
    if (window == NULL)
    {
    	fprintf(stderr, "Failed to open GLFW window.\n");
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);
	glewExperimental=true;

	if (gl_error = glewInit())
	{
        fprintf(stderr, "glew init returned: '%s'.\n",
                glewGetErrorString(gl_error));
		glfwTerminate();
		return -1;
	}

    glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);

    do{
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    while(glfwGetKey(window, GLFW_KEY_ESCAPE)
            != GLFW_PRESS && glfwWindowShouldClose(window) == 0);

	glfwTerminate();

    return 0;
}
