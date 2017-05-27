/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/AnonymousLambda.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "AnonymousLambda.h"

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

#define GLOBAL_SYMBOL ::vl_workflow_global::AnonymousLambda::
#define GLOBAL_NAME ::vl_workflow_global::AnonymousLambda::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::AnonymousLambda::Instance()
#define USERIMPL(...)

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_AnonymousLambda)
	vl_workflow_global::AnonymousLambda instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_AnonymousLambda)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	::vl::Func<::vl::Func<::vl::vint()>(::vl::vint)> AnonymousLambda::Adder(::vl::vint x)
	{
		return LAMBDA(::vl_workflow_global::__vwsnf1_AnonymousLambda_Adder_(x));
	}

	::vl::WString AnonymousLambda::main()
	{
		auto f = GLOBAL_NAME Adder(static_cast<::vl::vint>(1));
		auto g = GLOBAL_NAME Adder(static_cast<::vl::vint>(2));
		return ((((((::vl::__vwsn::ToString(f(static_cast<::vl::vint>(1))()) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(f(static_cast<::vl::vint>(2))())) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(g(static_cast<::vl::vint>(1))())) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(g(static_cast<::vl::vint>(2))()));
	}

	AnonymousLambda& AnonymousLambda::Instance()
	{
		return Getvl_workflow_global_AnonymousLambda().instance;
	}

/***********************************************************************
Closures
***********************************************************************/

	//-------------------------------------------------------------------

	__vwsnf1_AnonymousLambda_Adder_::__vwsnf1_AnonymousLambda_Adder_(::vl::vint __vwsnctor_x)
		:x(__vwsnctor_x)
	{
	}

	::vl::Func<::vl::vint()> __vwsnf1_AnonymousLambda_Adder_::operator()(::vl::vint y) const
	{
		return LAMBDA(::vl_workflow_global::__vwsnf2_AnonymousLambda_Adder__(x, y));
	}

	//-------------------------------------------------------------------

	__vwsnf2_AnonymousLambda_Adder__::__vwsnf2_AnonymousLambda_Adder__(::vl::vint __vwsnctor_x, ::vl::vint __vwsnctor_y)
		:x(__vwsnctor_x)
		, y(__vwsnctor_y)
	{
	}

	::vl::vint __vwsnf2_AnonymousLambda_Adder__::operator()() const
	{
		return (x + y);
	}
}

#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ
#undef USERIMPL

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
