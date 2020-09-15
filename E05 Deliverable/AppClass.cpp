#include "AppClass.h"
void Application::InitVariables(void)
{
	//Change this to your name and email
	m_sProgrammer = "Jacob Kemp-Schneider - jmk6152@rit.edu";

	//Set the position and target of the camera
	//(I'm at [0,0,10], looking at [0,0,0] and up is the positive Y axis)
	m_pCameraMngr->SetPositionTargetAndUpward(AXIS_Z * 10.0f, ZERO_V3, AXIS_Y);

	for (int i = 0; i < shapeCount; i++)
	{
		MyMesh* newMesh = new MyMesh();
		myMeshList.push_back(newMesh);
		myMeshList[i]->GenerateCube(1.0f, C_BLACK);
	}


}
void Application::Update(void)
{
	//Update the system so it knows how much time has passed since the last call
	m_pSystem->Update();

	//Is the arcball active?
	ArcBall();

	//Is the first person camera active?
	CameraRotation();
}
void Application::Display(void)
{
	// Clear the screen
	ClearScreen();

	//	model view and projection matricex
	matrix4 projection = m_pCameraMngr->GetProjectionMatrix();
	matrix4 view = m_pCameraMngr->GetViewMatrix();

	//	declare things
	int i = 0;

	//	move shape
	matrix4 matrixPosition = glm::translate(vector3(-3, -3, -5));

	// row 1
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(0 + horizontalMove, 7, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(6 + horizontalMove, 7, 0)));
	i++;

	// row 2
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(1 + horizontalMove, 6, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(5 + horizontalMove, 6, 0)));
	i++;

	// row 3
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(0 + horizontalMove, 5, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(1 + horizontalMove, 5, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(2 + horizontalMove, 5, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(3 + horizontalMove, 5, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(4 + horizontalMove, 5, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(5 + horizontalMove, 5, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(6 + horizontalMove, 5, 0)));
	i++;

	// row 4
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(-1 + horizontalMove, 4, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(0 + horizontalMove, 4, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(2 + horizontalMove, 4, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(3 + horizontalMove, 4, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(4 + horizontalMove, 4, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(6 + horizontalMove, 4, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(7 + horizontalMove, 4, 0)));
	i++;

	// row 5
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(-2 + horizontalMove, 3, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(-1 + horizontalMove, 3, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(0 + horizontalMove, 3, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(1 + horizontalMove, 3, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(2 + horizontalMove, 3, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(3 + horizontalMove, 3, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(4 + horizontalMove, 3, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(5 + horizontalMove, 3, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(6 + horizontalMove, 3, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(7 + horizontalMove, 3, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(8 + horizontalMove, 3, 0)));
	i++;

	// row 6
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(-2 + horizontalMove, 2, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(0 + horizontalMove, 2, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(1 + horizontalMove, 2, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(2 + horizontalMove, 2, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(3 + horizontalMove, 2, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(4 + horizontalMove, 2, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(5 + horizontalMove, 2, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(6 + horizontalMove, 2, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(8 + horizontalMove, 2, 0)));
	i++;

	// row 7
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(-2 + horizontalMove, 1, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(0 + horizontalMove, 1, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(6 + horizontalMove, 1, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(8 + horizontalMove, 1, 0)));
	i++;

	// row 8
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(1 + horizontalMove, 0, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(2 + horizontalMove, 0, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(4 + horizontalMove, 0, 0)));
	i++;
	myMeshList[i]->Render(projection, view, glm::translate(matrixPosition, vector3(5 + horizontalMove, 0, 0)));
	i++;

	//	move to the right
	horizontalMove +=.01;

	// draw a skybox
	m_pMeshMngr->AddSkyboxToRenderList();
	
	//render list call
	m_uRenderCallCount = m_pMeshMngr->Render();

	//clear the render list
	m_pMeshMngr->ClearRenderList();
	
	//draw gui
	DrawGUI();
	
	//end the current frame (internally swaps the front and back buffers)
	m_pWindow->display();
}
void Application::Release(void)
{
	for (int i = 0; i < shapeCount; i++)
	{
		if (myMeshList[i] != nullptr)
		{
			delete myMeshList[i];
			myMeshList[i] = nullptr;
		}
	}

	//release GUI
	ShutdownGUI();
}