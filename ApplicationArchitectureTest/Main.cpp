#include "CCore.h"
#include "Scene.h"
#include <iostream>
#include <typeinfo>
#include "CMeshComponent.h"
#include "CRenderComponent.h"
#include "CTestUpdateComponent.h"

int main()
{

	Erupti0n::CCore* c = new Erupti0n::CCore();

	Erupti0n::SMeshComponentData data{};

	data.m_VertexPosition = std::vector<float>{ -0.5f,0.5f,0.0f,  -0.5f,-0.5f,0.0f,  0.5f,0.5f,0.0f, 0.5f,-0.5f,0.0f };
	data.m_VertexUv = std::vector<float>{ 0,0, 0,1, 1,0 ,1,1 };
	data.m_VertexIndices = std::vector<uint16_t>{ 3,2,1, 1,2,0 };
	
	Erupti0n::CMeshComponent mc0(data);


	Erupti0n::SRenderComponentData rcData{};
	rcData.pMeshComponent = &mc0;

	Erupti0n::CRenderComponent rc0(rcData);

	Erupti0n::STestUpdateComponentData tucData0{};
	Erupti0n::CTestUpdateComponent tuc0(tucData0);


	Erupti0n::CSceneManager* sm = c->GetService<Erupti0n::CSceneManager>();
	Erupti0n::CScene s0;
	Erupti0n::CSceneObject obj1;

	s0.AddSceneObject(&obj1);
	obj1.AttacheComponent(&mc0);
	obj1.AttacheComponent(&rc0);
	obj1.AttacheComponent(&tuc0);
	sm->AddScene(s0);

	c->Run();

	system("pause");

	return 0;
}