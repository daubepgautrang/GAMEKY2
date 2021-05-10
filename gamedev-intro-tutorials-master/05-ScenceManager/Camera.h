 #pragma once
class CGameObject;

class Camera
{
	int x;
	int y;

	CGameObject* target;
	float width;
	float height;
public:
	void SetPosition(int x, int y);
	void SetSize(float width, float height);
	void SetTarget(CGameObject* target);
	void Update();	

	int X();
	int Y();

	float Width();
	float Height();
};

