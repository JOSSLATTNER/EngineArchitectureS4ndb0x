#include "CTestUpdateComponent.h"
#include <iostream>

namespace Erupti0n
{
	CTestUpdateComponent::CTestUpdateComponent(STestUpdateComponentData a_TestUpdateComponentData):
		m_TestUpdateComponentData(a_TestUpdateComponentData)
	{}

	CTestUpdateComponent::~CTestUpdateComponent()
	{}

	void CTestUpdateComponent::Update()
	{
		std::cout << "Update with Value: "<< this->m_TestUpdateComponentData.testValue << std::endl;
	}

	SComponentData const & CTestUpdateComponent::GetSComponentData()
	{
		return this->m_TestUpdateComponentData;
	}
}