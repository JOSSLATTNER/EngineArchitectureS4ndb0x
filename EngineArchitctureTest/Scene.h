#pragma once
#include <map>
#include "SceneObjekt.h"
#include "IUpdateable.h"

namespace Erupti0n
{
	class CScene : public IIdentifiable , public IUpdateable
	{
	private:
		std::map<uint32_t, CSceneObject*> m_pSceneObjects;
		std::vector<IUpdateable*> m_pUpdateableComponents;

		static size_t m_IUpdateableID;

	public:
		CScene();
		~CScene() override;

	public:
		void AddSceneObject(CSceneObject* a_pSceneObject);
		void Update() override;
	
	private:
		void RegisterComponent(IComponent* a_pComponent);
	};
}
