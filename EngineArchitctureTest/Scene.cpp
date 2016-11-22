#include "Scene.h"
#include <iostream>

namespace Erupti0n
{
	CScene::CScene()
	{
	}

	CScene::~CScene()
	{
	}

	void CScene::SetId(uint32_t a_ID)
	{ 
		this->m_ID = a_ID;
	}

	void CScene::AddSceneObject(CSceneObject * a_pSceneObject)
	{
		a_pSceneObject->SetComponentAddCallBack([=](IComponent* a_Comp) {this->RegisterComponent(a_Comp); });
	}

	void CScene::RegisterComponent(IComponent * a_pComponent)
	{
		std::cout << "Register Component form Object in Scene" << std::endl;
	}
}