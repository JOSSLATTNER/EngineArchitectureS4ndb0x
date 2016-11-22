#include "SceneObjekt.h"


namespace Erupti0n
{

	CSceneObject::CSceneObject()
	{
	}


	CSceneObject::~CSceneObject()
	{
	}

	void CSceneObject::SetParentObject(CSceneObject * a_pParent)
	{
		this->m_pParentObject = a_pParent;
	}

	void CSceneObject::AttachObject(CSceneObject * a_pObject)
	{
		if (a_pObject != this)
		{
			a_pObject->SetParentObject(this);
			if (this->m_ComponentCallback != nullptr)
				a_pObject->SetComponentAddCallBack(this->m_ComponentCallback);
			this->m_pChilds.push_back(a_pObject);
		}
	}

	void CSceneObject::SetComponentAddCallBack(t_ComponentAddCallBack a_Callback)
	{
		this->m_ComponentCallback = a_Callback;

		for (auto c : this->m_Components)
		{
			this->m_ComponentCallback(c);
		}

		for (auto o : this->m_pChilds)
		{
			o->SetComponentAddCallBack(a_Callback);
		}
	}

	void CSceneObject::AttacheComponent(IComponent * a_pIComponent)
	{
		a_pIComponent->SetParent(this);
		this->m_Components.push_back(a_pIComponent);

		if (this->m_ComponentCallback != nullptr)
			this->m_ComponentCallback(a_pIComponent);
	}

	void CSceneObject::RegisterComponentsInScene()
	{
		//MultiThreading?
		for (auto c : this->m_Components)
		{
			this->m_ComponentCallback(c);
		}

		for (auto c : this->m_pChilds)
		{
			c->RegisterComponentsInScene();
		}
	}
}


