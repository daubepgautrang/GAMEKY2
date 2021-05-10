#include "Scence.h"
#include "Camera.h"

CScene::CScene(int id, LPCWSTR filePath)
{
	this->id = id;
	this->sceneFilePath = filePath;
}

Camera* CScene::GetCamera()
{
	return camera;
}
