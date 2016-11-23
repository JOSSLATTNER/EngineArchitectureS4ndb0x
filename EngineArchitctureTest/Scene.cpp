#include "Scene.h"
#include <iostream>

namespace Erupti0n
{
	size_t CScene::m_IUpdateableID = typeid(IUpdateable).hash_code();

	CScene::CScene()
	{
		
	}

	CScene::~CScene()
	{}

	void CScene::AddSceneObject(CSceneObject * a_pSceneObject)
	{
		this->m_pSceneObjects[a_pSceneObject->GetID()] = a_pSceneObject;
		a_pSceneObject->SetComponentAddCallBack([=](IComponent* a_Comp) {this->RegisterComponent(a_Comp); });
	}

	void CScene::Update()
	{
		for (IUpdateable* u : this->m_pUpdateableComponents)
		{
			u->Update();
		}
	}

	void CScene::RegisterComponent(IComponent * a_pComponent)
	{
		IUpdateable* tmp = dynamic_cast<IUpdateable*>(a_pComponent);

		if (tmp)
		{
			std::cout << "UpdateableComponent Registered!" << std::endl;
			this->m_pUpdateableComponents.push_back(tmp);
		}

		std::cout << "Register Component form Object in Scene" << std::endl;
	}
}