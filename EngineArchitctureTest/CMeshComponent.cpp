#include "CMeshComponent.h"

namespace Erupti0n
{
	CMeshComponent::CMeshComponent(SMeshComponentData m_MeshComponentData):
		m_MeshComponentData(m_MeshComponentData)
	{}

	CMeshComponent::~CMeshComponent()
	{}

	SMeshComponentData const &  CMeshComponent::GetSComponentData()
	{
		return this->m_MeshComponentData;
	}
}

