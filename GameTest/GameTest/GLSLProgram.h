#pragma once
#include <string>
#include <GL/glew.h>


//Handles the compilation, linking, and usage of a glsl shader program.
class GLSLProgram
{
public:
	GLSLProgram();
	~GLSLProgram();

	void compileShaders(const std::string& vertexShaderFilePath, const std::string fragmentShaderFilePath);

	void linkShaders();

	void addAttribute(const std::string& attributeName);

	GLint getUniformLocation(const std::string& uniformName);

	void use();
	void unuse();

private:
	void compileShader(const std::string& filePath, GLuint id);

	int _numAttributes;

	GLuint _programID;
	
	GLuint _vertexShaderID;
	GLuint _fragmentShaderID;
};

