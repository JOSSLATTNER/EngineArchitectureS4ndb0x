#include "CRenderComponent.h"

namespace Erupti0n
{
	CRenderComponent::CRenderComponent(SRenderComponentData a_RenderComponentData) :
		m_RenderComponentData(a_RenderComponentData)
	{}

	CRenderComponent::~CRenderComponent()
	{}

	SRenderComponentData const &  CRenderComponent::GetSComponentData()
	{
		return this->m_RenderComponentData;
	}
}

