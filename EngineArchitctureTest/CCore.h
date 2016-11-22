#pragma once
#include "SceneManager.h"
#include <typeinfo>
#include <iostream>
#include <unordered_map>

namespace Erupti0n
{
	class CCore
	{
	private:
		CSceneManager* m_pSceneManager;

		std::unordered_map<size_t, void*> m_Services;

	public:
		CCore();
		~CCore();

	public:
		template<class C>
		C* CCore::GetService()
		{
			size_t classHash = typeid(C).hash_code();
			std::cout << "Try to Get Service with typeID: " << typeid(C).hash_code() << std::endl;
			if (m_Services[classHash])
			{
				std::cout << "Services exist!" << std::endl;
				return (C*)m_Services[classHash];
			}
			std::cout << "Services needs to be created!" << std::endl;
			m_Services[classHash] = new C();
			
			return (C*)m_Services[classHash];
		};
	};

}