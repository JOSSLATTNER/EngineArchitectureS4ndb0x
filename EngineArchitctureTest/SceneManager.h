#pragma once
#include "Scene.h"


namespace Erupti0n
{
	class CSceneManager
	{
	private:
		std::map<uint32_t, CScene*> m_pScenes;
		uint32_t m_SceneIdCounter;

	public:
		CSceneManager();
		~CSceneManager();

	public:
		void AddScene(CScene& a_rScene);
	};
}
