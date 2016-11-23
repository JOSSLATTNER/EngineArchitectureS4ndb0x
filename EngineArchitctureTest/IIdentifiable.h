#pragma once



namespace Erupti0n
{
	class IIdentifiable
	{
	private:
		static unsigned int ID;

	protected:
		unsigned int m_ID;

	protected:
		IIdentifiable():
			m_ID(ID++)
		{}

		~IIdentifiable()
		{}

	public:
		unsigned int GetID()
		{
			return this->m_ID;
		}
	};
}