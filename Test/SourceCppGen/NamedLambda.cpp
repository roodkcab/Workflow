/***********************************************************************
Generated from ../Resources/Codegen/NamedLambda.txt
***********************************************************************/

#include "NamedLambda.h"

/***********************************************************************
Global Variables and Functions
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_NamedLambda)
	vl_workflow_global::NamedLambda instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_NamedLambda)

namespace vl_workflow_global
{
	::vl::WString NamedLambda::main()
	{
		throw 0;
	}

	NamedLambda& NamedLambda::Instance()
	{
		return Getvl_workflow_global_NamedLambda().instance;
	}

	struct __vwsnf1_NamedLambda_main_
	{
		::vl::vint32_t operator()(::vl::vint32_t n) const;
	};

	::vl::vint32_t __vwsnf1_NamedLambda_main_::operator()(::vl::vint32_t n) const
	{
		throw 0;
	}
}
