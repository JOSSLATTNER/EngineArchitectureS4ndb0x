#include "CCore.h"


namespace Erupti0n
{
	CCore::CCore()
	{}

	CCore::~CCore()
	{}

	void CCore::Run()
	{
		for (;;)
		{
			for (auto u : this->m_pUpdateableServices)
			{
				u->Update();
			}
		}
	}
}