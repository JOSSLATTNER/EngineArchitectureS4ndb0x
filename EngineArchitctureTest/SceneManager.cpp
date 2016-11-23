#include "SceneManager.h"



namespace Erupti0n
{
	CSceneManager::CSceneManager()
	{}

	CSceneManager::~CSceneManager()
	{}

	void CSceneManager::AddScene(CScene& a_rScene)
	{
		this->m_pScenes[a_rScene.GetID()] = &a_rScene;

		if (!this->m_pCurrentScene)
			m_pCurrentScene = &a_rScene;
	}

	void CSceneManager::Update()
	{
		this->m_pCurrentScene->Update();
	}
}