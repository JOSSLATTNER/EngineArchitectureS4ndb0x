#pragma once
#include "IComponent.h"
#include <vector>

namespace Erupti0n
{
	struct SMeshComponentData : SComponentData
	{
		std::vector<float> m_VertexPosition;
		std::vector<float> m_VertexColor;
		std::vector<float> m_VertexUv;
		std::vector<float> m_VertexNormal;
		std::vector<uint16_t> m_VertexIndices;
	};

	class CMeshComponent : public  IComponent
	{
	private:
		SMeshComponentData m_MeshComponentData;

	public:
		CMeshComponent(SMeshComponentData a_MeshComponentData);
		~CMeshComponent() override;

	public:
		SMeshComponentData const &  GetSComponentData() override;
	};
}