#include <cstdio>
#include <GLFW/glfw3.h>

using namespace std;

int main(void)
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	printf("glfwInit ok\n");


	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(
		800,// int width
		600,// int height
		"Hello GLFW World!",// const char* title
		NULL,// GLFWmonitor * monitor
		NULL// GLFWwindow * share
	);

	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Set window position */
	glfwSetWindowPos(window, 50, 50);

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	
	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	printf("glfwTerminate ok\n");

	return 0;
}