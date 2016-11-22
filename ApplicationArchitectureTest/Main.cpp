#include "CCore.h"
#include "Scene.h"
#include <iostream>
#include <typeinfo>

int main()
{

	Erupti0n::CCore* c = new Erupti0n::CCore();


	auto sm = c->GetService<Erupti0n::CSceneManager>();
	Erupti0n::CScene s0;
	Erupti0n::CSceneObject obj1;

	s0.AddSceneObject(&obj1);

	system("pause");

	return 0;
}