#pragma once
#include <map>
#include "SceneObjekt.h"


namespace Erupti0n
{
	class CScene
	{
	private:
		std::map<uint32_t, CSceneObject*> m_pSceneObjects;
		//std::vector<
		uint32_t m_ID;

	public:
		CScene();
		~CScene();

	public:
		void SetId(uint32_t a_ID);
		void AddSceneObject(CSceneObject* a_pSceneObject);
	
	private:
		void RegisterComponent(IComponent* a_pComponent);
	};
}
