#pragma once
#include <vector>
#include <functional>

#include "IComponent.h"


namespace Erupti0n
{

	struct vector
	{
		float x;
		float y;
		float z;
	};

	typedef std::function<void(IComponent*)> t_ComponentAddCallBack;

	class CSceneObject
	{
	private:
		vector Transform;
		std::vector<IComponent*> m_Components;
		t_ComponentAddCallBack m_ComponentCallback;

		CSceneObject* m_pParentObject;
		std::vector<CSceneObject*> m_pChilds;

	public:
		CSceneObject();
		~CSceneObject();

	public:
		void SetParentObject(CSceneObject* a_pParent);
		void AttachObject(CSceneObject* a_pObject);

		void SetComponentAddCallBack(t_ComponentAddCallBack a_Callback);
		void AttacheComponent(IComponent* a_pIComponent);
		void RegisterComponentsInScene();
	};
}