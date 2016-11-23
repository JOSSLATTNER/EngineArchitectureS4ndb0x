#pragma once
#include "IComponent.h"

namespace Erupti0n
{
	class CMeshComponent;

	struct SRenderComponentData : SComponentData
	{
		CMeshComponent* pMeshComponent;
	};

	class CRenderComponent : public IComponent
	{
	private:
		SRenderComponentData m_RenderComponentData;

	public:
		CRenderComponent(SRenderComponentData a_RenderComponentData);
		~CRenderComponent() override;

	public:
		SRenderComponentData const &  GetSComponentData() override;
	};
}