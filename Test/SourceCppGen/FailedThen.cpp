/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/FailedThen.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "FailedThen.h"

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

#define GLOBAL_SYMBOL ::vl_workflow_global::FailedThen::
#define GLOBAL_NAME ::vl_workflow_global::FailedThen::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::FailedThen::Instance()
#define USERIMPL(...)

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_FailedThen)
	vl_workflow_global::FailedThen instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_FailedThen)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	::vl::vint FailedThen::GetValue(::vl::Ptr<::test::ObservableValue> value, ::vl::vint increase, ::vl::vint defaultValue)
	{
		return [&](){ try{ return (::vl::__vwsn::This(value.Obj())->GetValue() + increase); } catch(...){ return defaultValue; } }();
	}

	::vl::WString FailedThen::main()
	{
		return (((::vl::WString(L"", false) + ::vl::__vwsn::ToString(GLOBAL_NAME GetValue(::vl::Ptr<::test::ObservableValue>(), static_cast<::vl::vint>(10), (- static_cast<::vl::vint>(1))))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(GLOBAL_NAME GetValue(::vl::Ptr<::test::ObservableValue>(new ::test::ObservableValue(static_cast<::vl::vint>(100))), static_cast<::vl::vint>(10), (- static_cast<::vl::vint>(1)))));
	}

	FailedThen& FailedThen::Instance()
	{
		return Getvl_workflow_global_FailedThen().instance;
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
