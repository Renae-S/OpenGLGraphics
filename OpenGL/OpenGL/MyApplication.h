#pragma once
#include "gl_core_4_4.h"
#include "Camera.h"
#include "Mesh.h"
#include "Shader.h"
#include "OBJMesh.h"

class MyApplication
{
public:
	MyApplication();
	virtual ~MyApplication();

	int startup();
	void shutdown();
	bool update();

	unsigned int getWindowWidth();
	unsigned int getWindowHeight();

private:

	GLFWwindow*		m_window;
	Camera			m_camera;

	double			m_prevTime;
	double			m_currTime;
	double			m_deltaTime;

	struct Light 
	{
		glm::vec3 direction;
		glm::vec3 diffuse;
		glm::vec3 specular;
	};

	Light				m_light;
	glm::vec3			m_ambientLight;

	aie::ShaderProgram	m_shader;
	aie::ShaderProgram	m_texturedShader;
	aie::ShaderProgram	m_phongShader;
	aie::ShaderProgram	m_normalMapShader;

	aie::Texture		m_gridTexture;
	aie::Texture		m_denimTexture;

	Mesh				m_quadMesh;
	glm::mat4			m_quadTransform;
	aie::OBJMesh		m_bunnyMesh;
	glm::mat4			m_bunnyTransform;

	aie::Texture		m_spearTexture;

	aie::OBJMesh		m_spearMesh;
	glm::mat4			m_spearTransform;

	aie::OBJMesh		m_dragonMesh;
	glm::mat4			m_dragonTransform;
};
