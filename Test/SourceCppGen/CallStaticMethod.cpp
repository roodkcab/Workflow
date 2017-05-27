/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/CallStaticMethod.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "CallStaticMethod.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::CallStaticMethod::
#define GLOBAL_NAME ::vl_workflow_global::CallStaticMethod::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::CallStaticMethod::Instance()
#define USERIMPL(...)

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_CallStaticMethod)
	vl_workflow_global::CallStaticMethod instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_CallStaticMethod)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	::vl::WString CallStaticMethod::main()
	{
		return ::vl::__vwsn::ToString(::Calculator::Internal::Sum(static_cast<::vl::vint>(1), static_cast<::vl::vint>(10)));
	}

	CallStaticMethod& CallStaticMethod::Instance()
	{
		return Getvl_workflow_global_CallStaticMethod().instance;
	}
}

/***********************************************************************
Class (::Calculator)
***********************************************************************/

::vl::vint Calculator::Sum2(::vl::vint begin, ::vl::vint end, ::vl::vint sum)
{
	if ((begin > end))
	{
		return sum;
	}
	else
	{
		return ::Calculator::Sum2((begin + static_cast<::vl::vint>(1)), end, (sum + begin));
	}
}

Calculator::Calculator()
{
}

/***********************************************************************
Class (::Calculator::Internal)
***********************************************************************/

::vl::vint Calculator::Internal::Sum(::vl::vint begin, ::vl::vint end)
{
	return ::Calculator::Sum2(begin, end, static_cast<::vl::vint>(0));
}

#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ
#undef USERIMPL

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(Calculator)
			IMPL_CPP_TYPE_INFO(Calculator::Internal)

#define _ ,
			BEGIN_CLASS_MEMBER(::Calculator)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::Calculator>(), NO_PARAMETER)
				CLASS_MEMBER_STATIC_METHOD(Sum2, { L"begin" _ L"end" _ L"sum" })
			END_CLASS_MEMBER(::Calculator)

			BEGIN_INTERFACE_MEMBER(::Calculator::Internal)
				CLASS_MEMBER_STATIC_METHOD(Sum, { L"begin" _ L"end" })
			END_INTERFACE_MEMBER(::Calculator::Internal)

#undef _
			class CallStaticMethodTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::Calculator)
					ADD_TYPE_INFO(::Calculator::Internal)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadCallStaticMethodTypes()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<CallStaticMethodTypeLoader>());
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
