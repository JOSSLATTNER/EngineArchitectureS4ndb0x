#include "SceneManager.h"



namespace Erupti0n
{
	CSceneManager::CSceneManager()
		: m_SceneIdCounter(0)
	{

	}


	CSceneManager::~CSceneManager()
	{
	}

	void CSceneManager::AddScene(CScene& a_rScene)
	{
		a_rScene.SetId(++this->m_SceneIdCounter);

		this->m_pScenes[m_SceneIdCounter] = &a_rScene;
	}
}