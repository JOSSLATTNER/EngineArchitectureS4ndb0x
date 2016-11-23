#pragma once


namespace Erupti0n
{
	class CSceneObject;

	struct SComponentData
	{};

	class IComponent
	{
	private:
		CSceneObject* m_pParentObject;
	protected:
		SComponentData m_ComponentData;

	protected:
		IComponent();
		virtual ~IComponent();

	public:
		void SetParent(CSceneObject* a_pParent)
		{
			this->m_pParentObject = a_pParent;
		}

		CSceneObject* GetParent()
		{
			return this->m_pParentObject;
		}

		virtual SComponentData const &  GetSComponentData() = 0;
	};
}