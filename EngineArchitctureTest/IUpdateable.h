#pragma once

namespace Erupti0n
{
	class IUpdateable
	{
	public:
		virtual ~IUpdateable(){}

	public:
		virtual void Update() = 0;
	};
}