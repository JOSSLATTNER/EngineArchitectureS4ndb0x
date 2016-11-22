#pragma once


namespace Erupti0n
{
	class CSceneObject;

	class IComponent
	{
	private:
		CSceneObject* m_pParentObject;


	public:
		void SetParent(CSceneObject* a_pParent)
		{
			this->m_pParentObject = a_pParent;
		}

		CSceneObject* GetParent()
		{
			return this->m_pParentObject;
		}
	};
}