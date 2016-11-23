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
		std::unordered_map<size_t, IService*> m_pServices;
		std::vector<IUpdateable*> m_pUpdateableServices;

	public:
		CCore();
		~CCore();

	public:
		template<class C>
		C* CCore::GetService()
		{
			size_t classHash = typeid(C).hash_code();
			std::cout << "Try to Get Service with typeID: " << typeid(C).hash_code() << std::endl;
			if (m_pServices[classHash])
			{
				std::cout << "Services exist!" << std::endl;
				return (C*)m_pServices[classHash];
			}
			else
			{
				std::cout << "Services needs to be created!" << std::endl;
				auto service = new C();

				m_pServices[classHash] = service;

				if (dynamic_cast<IUpdateable*>(service))
				{
					this->m_pUpdateableServices.push_back(static_cast<IUpdateable*>(service));
				}
			}

			
			return (C*)m_pServices[classHash];
		};

		void Run();
	};

}