#pragma once

#include "FunctionIdGetter.h"
#include <functional>

namespace FlatEngine::Core::Tools::Events
{
	template<typename Type>
	class Function
	{
	private:
		typedef Type T;
		typedef std::function<void(T)> StdFunction;

	protected:
		Function() {}

	public:
		Function(StdFunction function)
			: function(function),
			id(FunctionIdGetter<T>::GetNextId())
		{}

		Function(const Function& rhs)
			: function(rhs.function),
			id(rhs.id)
		{}

		Function(Function&& rhs) noexcept
			: function(std::move(rhs.function)),
			id(rhs.id)
		{}

		Function& operator=(const Function& rhs)
		{
			this->function = rhs.function;
			this->id = rhs.id;
			return *this;
		}

		Function& operator=(Function&& rhs) noexcept
		{
			this->function = std::move(rhs.function);
			this->id = rhs.id;
			return *this;
		}

		static Function Create(StdFunction function)
		{
			return Function(function);
		}

	public:
		void operator()(const T& value)
		{
			Call(value);
		}

		void Call(const T& value)
		{
			function(value);
		}

		size_t GetId() const { return id; }

	protected:
		StdFunction function;
		size_t id;

	private:
		static size_t instanceCounter;
	};

	template<>
	class Function<void>
	{
	private:
		typedef void T;
		typedef std::function<void()> StdFunction;

	protected:
		Function()
			: function(),
			id()
		{}

	public:
		Function(StdFunction function)
			: function(function),
			id(FunctionIdGetter<T>::GetNextId())
		{}

		Function(const Function& rhs)
			: function(rhs.function),
			id(rhs.id)
		{}

		Function(Function&& rhs) noexcept
			: function(std::move(rhs.function)),
			id(rhs.id)
		{}

		Function& operator=(const Function& rhs)
		{
			this->function = rhs.function;
			this->id = rhs.id;
			return *this;
		}

		Function& operator=(Function&& rhs) noexcept
		{
			this->function = std::move(rhs.function);
			this->id = rhs.id;
			return *this;
		}

		static Function Create(StdFunction function)
		{
			return Function(function);
		}

	public:
		void operator()()
		{
			Call();
		}

		void Call()
		{
			function();
		}

		size_t GetId() const { return id; }

	protected:
		StdFunction function;
		size_t id;

	private:
		static size_t instanceCounter;
	};

}