/***********************************************************************
Generated from ../Resources/Codegen/ClassCtor.txt
***********************************************************************/

#include "ClassCtor.h"

/***********************************************************************
Global Variables and Functions
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_ClassCtor)
	vl_workflow_global::ClassCtor instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS

		instance.s = ::vl::WString(L"", false);
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_ClassCtor)

namespace vl_workflow_global
{
	::vl::WString ClassCtor::main()
	{
		{
			::vl::Ptr<::Ctor> a = ::vl::Ptr<::Ctor>(new ::Ctor());
			(::vl_workflow_global::ClassCtor::Instance().s = (::vl_workflow_global::ClassCtor::Instance().s + ((((::vl::WString(L"[", false) + static_cast<::vl::vint32_t>(::vl::__vwsn::This(a)->GetX())) + ::vl::WString(L"][", false)) + static_cast<::vl::vint32_t>(::vl::__vwsn::This(a)->GetValue())) + ::vl::WString(L"]", false))));
		}
		{
			::vl::Ptr<::Ctor> a = ::vl::Ptr<::Ctor>(new ::Ctor(1, true));
			(::vl_workflow_global::ClassCtor::Instance().s = (::vl_workflow_global::ClassCtor::Instance().s + ((((::vl::WString(L"[", false) + static_cast<::vl::vint32_t>(::vl::__vwsn::This(a)->GetX())) + ::vl::WString(L"][", false)) + static_cast<::vl::vint32_t>(::vl::__vwsn::This(a)->GetValue())) + ::vl::WString(L"]", false))));
		}
		{
			::vl::Ptr<::Ctor> a = ::vl::Ptr<::Ctor>(new ::Ctor(true, 2));
			(::vl_workflow_global::ClassCtor::Instance().s = (::vl_workflow_global::ClassCtor::Instance().s + ((((::vl::WString(L"[", false) + static_cast<::vl::vint32_t>(::vl::__vwsn::This(a)->GetX())) + ::vl::WString(L"][", false)) + static_cast<::vl::vint32_t>(::vl::__vwsn::This(a)->GetValue())) + ::vl::WString(L"]", false))));
		}
		{
			::vl::Ptr<::Ctor> a = ::vl::Ptr<::Ctor>(new ::Ctor(1, 2));
			(::vl_workflow_global::ClassCtor::Instance().s = (::vl_workflow_global::ClassCtor::Instance().s + ((((::vl::WString(L"[", false) + static_cast<::vl::vint32_t>(::vl::__vwsn::This(a)->GetX())) + ::vl::WString(L"][", false)) + static_cast<::vl::vint32_t>(::vl::__vwsn::This(a)->GetValue())) + ::vl::WString(L"]", false))));
		}
		return ::vl_workflow_global::ClassCtor::Instance().s;
	}

	ClassCtor& ClassCtor::Instance()
	{
		return Getvl_workflow_global_ClassCtor().instance;
	}
}

/***********************************************************************
Class (::Base)
***********************************************************************/

Base::Base()
{
}

Base::Base(::vl::vint32_t _x)
{
	(::vl::__vwsn::This(this)-> = _x);
	if ((::vl::__vwsn::This(this)-> != ::vl::__vwsn::This(this)->))
	{
		throw ::vl::reflection::description::TypeDescriptorException(::vl::WString(L"The \"this\" expression is not correctly implemented.", false), false);
	}
}

::vl::vint32_t Base::GetX()
{
	if ((::vl::__vwsn::This(this)-> != ::vl::__vwsn::This(this)->))
	{
		throw ::vl::reflection::description::TypeDescriptorException(::vl::WString(L"The \"this\" expression is not correctly implemented.", false), false);
	}
	return ::vl::__vwsn::This(this)->;
}

void Base::SetX(::vl::vint32_t _x)
{
	if ((::vl::__vwsn::This(this)-> != _x))
	{
		(::vl::__vwsn::This(this)-> = _x);
		::vl::__vwsn::EventInvoke(::vl::__vwsn::This(this)->XChanged)();
	}
}

/***********************************************************************
Class (::Ctor)
***********************************************************************/

Ctor::Ctor()
{
}

Ctor::Ctor(::vl::vint32_t y, bool b)
{
}

Ctor::Ctor(bool b, ::vl::vint32_t value)
{
}

Ctor::Ctor(::vl::vint32_t y, ::vl::vint32_t value)
{
}

