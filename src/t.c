#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <stdio.h>

int main(void) {
	GLFWwindow* window;
	if (!glfwInit()) {
		fprintf(stderr, "Error in initialising window");
		return -1;
	}

	window = glfwCreateWindow(640, 480, "Hellope", NULL, NULL);
	if (!window) {
		fprintf(stderr, "Error in initialising window");
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);
	if (glewInit() != GLEW_OK) {
		fprintf(stderr, "Error in glew initialisation");
		return -1;
	}
	printf("%s\n", glGetString(GL_VERSION));
	printf("%s\n", glGetString(GL_VENDOR));

	/*float pos_of_square[] = {*/
	/*	 0.5f, -0.5f, // 0*/
	/*	 0.5f,  0.5f, // 1*/
	/*	-0.5f,  0.5f, // 2*/
	/*	-0.5f, -0.5f  // 3*/
	/*};*/
	/**/
	/*unsigned int indices[] = {*/
	/*	0, 1, 2,*/
	/*	2, 3, 0*/
	/*};*/
	/**/
	/*unsigned int buffer; // Vertex buffer (stored on GPU)*/
	/*glGenBuffers(1, &buffer);*/
	/*glBindBuffer(GL_ARRAY_BUFFER, buffer); // Bind the buffer*/
	/*glBufferData(GL_ARRAY_BUFFER, sizeof(pos_of_square), pos_of_square, GL_STATIC_DRAW);*/
	/*glEnableVertexAttribArray(0);*/
	/*glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 2 * sizeof(float), 0);*/
	/**/
	/*unsigned int ibo; // Index buffer object (stored on GPU)*/
	/*glGenBuffers(1, &ibo);*/
	/*glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo); // Bind the ibo*/
	/*glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);*/
	/**/
	/*// Load shader files in std::string*/
	/**/
	/*ShaderProgramSource src = ParseShader("res/shaders/basic.shader");*/
	/*unsigned int program = CreateShader(src.VertexSrc, src.FragmentSrc);*/
	/*glUseProgram(program);*/
	/**/
	/*while (!glfwWindowShouldClose(window)) {*/
	/*	glClear(GL_COLOR_BUFFER_BIT);*/
	/**/
	/*	glDrawElements(GL_TRIANGLES, ArrayLen(indices), GL_UNSIGNED_INT, nullptr);*/
	/**/
	/*	glfwSwapBuffers(window);*/
	/*	glfwPollEvents();*/
	/*}*/
	/**/
	/*glDeleteProgram(program);*/
	glfwTerminate();
	return 0;
}
