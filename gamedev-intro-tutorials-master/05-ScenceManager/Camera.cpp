#include "Camera.h"
#include "GameObject.h"
#include "Game.h"

void Camera::SetPosition(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Camera::SetSize(float width, float height)
{
	this->width = width;
	this->height = height;
}

void Camera::SetTarget(CGameObject* target)
{
	this->target = target;
}

void Camera::Update()
{
	// Update camera to follow mario
	float cx, cy;
	target->GetPosition(cx, cy);

	CGame* game = CGame::GetInstance();
	cx -= width / 2;
	cy -= height / 2;

	x = cx;
	y = 0;
}

int Camera::X()
{
	return x;
}

int Camera::Y()
{
	return y;
}

float Camera::Width()
{
	return width;
}

float Camera::Height()
{
	return height;
}
