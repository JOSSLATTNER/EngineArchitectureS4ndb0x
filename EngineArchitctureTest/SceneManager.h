#pragma once
#include "Scene.h"
#include "IService.h"
#include <unordered_map>

namespace Erupti0n
{
	class CSceneManager : public IService, public IUpdateable
	{
	private:
		std::unordered_map<uint32_t, CScene*> m_pScenes;
		CScene* m_pCurrentScene;

	public:
		CSceneManager();
		~CSceneManager() override;

	public:
		void AddScene(CScene& a_rScene);

		void Update() override;
	};
}
