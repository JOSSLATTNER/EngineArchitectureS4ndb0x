#pragma once
#include "IUpdateable.h"
#include "IComponent.h"

namespace Erupti0n
{
	struct STestUpdateComponentData : SComponentData
	{
		float testValue;
	};

	class CTestUpdateComponent : public IUpdateable , public IComponent
	{
	private:
		STestUpdateComponentData m_TestUpdateComponentData;

	public:
		CTestUpdateComponent(STestUpdateComponentData a_TestUpdateComponentData);
		~CTestUpdateComponent() override;

	public:
		void Update() override;
		SComponentData const& GetSComponentData() override;
	};
}