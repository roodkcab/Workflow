/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/CoAsync.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "CoAsync.h"

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

#define GLOBAL_SYMBOL ::vl_workflow_global::CoAsync::
#define GLOBAL_NAME ::vl_workflow_global::CoAsync::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::CoAsync::Instance()
#define USERIMPL(...)

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_CoAsync)
	vl_workflow_global::CoAsync instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS

		instance.s = ::vl::WString(L"", false);
	FINALIZE_GLOBAL_STORAGE_CLASS

		instance.s = ::vl::WString::Empty;
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_CoAsync)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	::vl::Ptr<::IStringAsync> CoAsync::GetStringAsync(::vl::vint x)
	{
		auto __vwsn_co_mixin_source_variable_ = ::vl::reflection::description::AsyncCoroutine::Create(LAMBDA(::vl_workflow_global::__vwsnf1_CoAsync_GetStringAsync_(x)));
		return ::vl::Ptr<::IStringAsync>(new ::vl_workflow_global::__vwsnc2_CoAsync_GetStringAsync__IStringAsync(__vwsn_co_mixin_source_variable_));
	}

	::vl::Ptr<::IStringAsync> CoAsync::GetStringAsync2(::vl::vint x)
	{
		auto future = ::vl::reflection::description::IFuture::Create();
		::vl::__vwsn::This(::vl::reflection::description::IAsyncScheduler::GetSchedulerForCurrentThread().Obj())->ExecuteInBackground(LAMBDA(::vl_workflow_global::__vwsnf2_CoAsync_GetStringAsync2_(future, x)));
		return ::vl::Ptr<::IStringAsync>(new ::vl_workflow_global::__vwsnc3_CoAsync_GetStringAsync2__IStringAsync(future));
	}

	void CoAsync::GetMultipleString()
	{
		::vl::reflection::description::AsyncCoroutine::CreateAndRun(LAMBDA(::vl_workflow_global::__vwsnf3_CoAsync_GetMultipleString_()));
	}

	::vl::WString CoAsync::main()
	{
		::test::SyncScheduler::Run(LAMBDA(::vl_workflow_global::__vwsno4_CoAsync_main_()));
		return GLOBAL_NAME s;
	}

	CoAsync& CoAsync::Instance()
	{
		return Getvl_workflow_global_CoAsync().instance;
	}

/***********************************************************************
Closures
***********************************************************************/

	//-------------------------------------------------------------------

	__vwsnf1_CoAsync_GetStringAsync_::__vwsnf1_CoAsync_GetStringAsync_(::vl::vint __vwsnctor_x)
		:x(__vwsnctor_x)
	{
	}

	::vl::Ptr<::vl::reflection::description::ICoroutine> __vwsnf1_CoAsync_GetStringAsync_::operator()(::vl::reflection::description::AsyncCoroutine::IImpl* __vwsn_co_impl_) const
	{
		return ::vl::Ptr<::vl::reflection::description::ICoroutine>(new ::vl_workflow_global::__vwsnc1_CoAsync_GetStringAsync___vl_reflection_description_ICoroutine(__vwsn_co_impl_, x));
	}

	//-------------------------------------------------------------------

	__vwsnf2_CoAsync_GetStringAsync2_::__vwsnf2_CoAsync_GetStringAsync2_(::vl::Ptr<::vl::reflection::description::IFuture> __vwsnctor_future, ::vl::vint __vwsnctor_x)
		:future(__vwsnctor_future)
		, x(__vwsnctor_x)
	{
	}

	void __vwsnf2_CoAsync_GetStringAsync2_::operator()() const
	{
		(GLOBAL_NAME s = ((((::vl::WString(L"", false) + GLOBAL_NAME s) + ::vl::WString(L"[", false)) + ::vl::__vwsn::ToString(x)) + ::vl::WString(L"]", false)));
		::vl::__vwsn::This(::vl::__vwsn::This(this->future.Obj())->GetPromise().Obj())->SendResult(::vl::__vwsn::Box(::vl::__vwsn::ToString(x)));
	}

	//-------------------------------------------------------------------

	__vwsnf3_CoAsync_GetMultipleString_::__vwsnf3_CoAsync_GetMultipleString_()
	{
	}

	::vl::Ptr<::vl::reflection::description::ICoroutine> __vwsnf3_CoAsync_GetMultipleString_::operator()(::vl::reflection::description::AsyncCoroutine::IImpl* __vwsn_co_impl_) const
	{
		return ::vl::Ptr<::vl::reflection::description::ICoroutine>(new ::vl_workflow_global::__vwsnc4_CoAsync_GetMultipleString___vl_reflection_description_ICoroutine(__vwsn_co_impl_));
	}

	//-------------------------------------------------------------------

	__vwsno4_CoAsync_main_::__vwsno4_CoAsync_main_()
	{
	}

	void __vwsno4_CoAsync_main_::operator()() const
	{
		return GLOBAL_NAME GetMultipleString();
	}

	//-------------------------------------------------------------------

	__vwsnc1_CoAsync_GetStringAsync___vl_reflection_description_ICoroutine::__vwsnc1_CoAsync_GetStringAsync___vl_reflection_description_ICoroutine(::vl::reflection::description::AsyncCoroutine::IImpl* __vwsnctor___vwsn_co_impl_, ::vl::vint __vwsnctor_x)
		:__vwsn_co_impl_(__vwsnctor___vwsn_co_impl_)
		, x(__vwsnctor_x)
	{
		this->__vwsn_co_state_ = static_cast<::vl::vint>(0);
		this->__vwsn_prop_Failure = ::vl::Ptr<::vl::reflection::description::IValueException>();
		this->__vwsn_prop_Status = ::vl::reflection::description::CoroutineStatus::Waiting;
	}

	::vl::Ptr<::vl::reflection::description::IValueException> __vwsnc1_CoAsync_GetStringAsync___vl_reflection_description_ICoroutine::GetFailure()
	{
		return __vwsn_prop_Failure;
	}
	void __vwsnc1_CoAsync_GetStringAsync___vl_reflection_description_ICoroutine::SetFailure(::vl::Ptr<::vl::reflection::description::IValueException> __vwsn_value_)
	{
		(__vwsn_prop_Failure = __vwsn_value_);
	}

	::vl::reflection::description::CoroutineStatus __vwsnc1_CoAsync_GetStringAsync___vl_reflection_description_ICoroutine::GetStatus()
	{
		return __vwsn_prop_Status;
	}
	void __vwsnc1_CoAsync_GetStringAsync___vl_reflection_description_ICoroutine::SetStatus(::vl::reflection::description::CoroutineStatus __vwsn_value_)
	{
		(__vwsn_prop_Status = __vwsn_value_);
	}

	void __vwsnc1_CoAsync_GetStringAsync___vl_reflection_description_ICoroutine::Resume(bool __vwsn_raise_exception_, ::vl::Ptr<::vl::reflection::description::CoroutineResult> __vwsn_co_result_)
	{
		if ((this->GetStatus() != ::vl::reflection::description::CoroutineStatus::Waiting))
		{
			throw ::vl::Exception(::vl::WString(L"Resume should be called only when the coroutine is in the waiting status.", false));
		}
		this->SetStatus(::vl::reflection::description::CoroutineStatus::Executing);
		try
		{
			{
				while (true)
				{
					if ((__vwsn_co_state_ == static_cast<::vl::vint>(0)))
					{
						(GLOBAL_NAME s = ((((::vl::WString(L"", false) + GLOBAL_NAME s) + ::vl::WString(L"[", false)) + ::vl::__vwsn::ToString(x)) + ::vl::WString(L"]", false)));
						::vl::reflection::description::AsyncCoroutine::ReturnAndExit(__vwsn_co_impl_, ::vl::__vwsn::Box(::vl::__vwsn::ToString(x)));
						this->SetStatus(::vl::reflection::description::CoroutineStatus::Stopped);
						return;
					}
				}
			}
		}
		catch(const ::vl::Exception& __vwsne_0)
		{
			auto __vwsn_co_ex_ = ::vl::reflection::description::IValueException::Create(__vwsne_0.Message());
			{
				this->SetFailure(__vwsn_co_ex_);
				this->SetStatus(::vl::reflection::description::CoroutineStatus::Stopped);
				if (__vwsn_raise_exception_)
				{
					throw;
				}
			}
		}
	}

	//-------------------------------------------------------------------

	__vwsnc2_CoAsync_GetStringAsync__IStringAsync::__vwsnc2_CoAsync_GetStringAsync__IStringAsync(::vl::Ptr<::vl::reflection::description::IAsync> __vwsnctor___vwsn_co_mixin_source_variable_)
	{
		this->__vwsn_mixin_source_ = __vwsnctor___vwsn_co_mixin_source_variable_;
	}

	bool __vwsnc2_CoAsync_GetStringAsync__IStringAsync::Execute(const ::vl::Func<void(::vl::Ptr<::vl::reflection::description::CoroutineResult>)>& callback)
	{
		return ::vl::__vwsn::This(__vwsn_mixin_source_.Obj())->Execute(callback);
	}

	::vl::reflection::description::AsyncStatus __vwsnc2_CoAsync_GetStringAsync__IStringAsync::GetStatus()
	{
		return ::vl::__vwsn::This(__vwsn_mixin_source_.Obj())->GetStatus();
	}

	//-------------------------------------------------------------------

	__vwsnc3_CoAsync_GetStringAsync2__IStringAsync::__vwsnc3_CoAsync_GetStringAsync2__IStringAsync(::vl::Ptr<::vl::reflection::description::IFuture> __vwsnctor_future)
	{
		this->__vwsn_mixin_source_ = ::vl::Ptr<::vl::reflection::description::IAsync>(__vwsnctor_future);
	}

	bool __vwsnc3_CoAsync_GetStringAsync2__IStringAsync::Execute(const ::vl::Func<void(::vl::Ptr<::vl::reflection::description::CoroutineResult>)>& callback)
	{
		return ::vl::__vwsn::This(__vwsn_mixin_source_.Obj())->Execute(callback);
	}

	::vl::reflection::description::AsyncStatus __vwsnc3_CoAsync_GetStringAsync2__IStringAsync::GetStatus()
	{
		return ::vl::__vwsn::This(__vwsn_mixin_source_.Obj())->GetStatus();
	}

	//-------------------------------------------------------------------

	__vwsnc4_CoAsync_GetMultipleString___vl_reflection_description_ICoroutine::__vwsnc4_CoAsync_GetMultipleString___vl_reflection_description_ICoroutine(::vl::reflection::description::AsyncCoroutine::IImpl* __vwsnctor___vwsn_co_impl_)
		:__vwsn_co_impl_(__vwsnctor___vwsn_co_impl_)
	{
		this->__vwsn_co0_x = ::vl::WString(L"", false);
		this->__vwsn_co1_y = ::vl::WString(L"", false);
		this->__vwsn_co2_for_begin_i = static_cast<::vl::vint>(0);
		this->__vwsn_co3_for_end_i = static_cast<::vl::vint>(0);
		this->__vwsn_co4_i = static_cast<::vl::vint>(0);
		this->__vwsn_co_state_ = static_cast<::vl::vint>(0);
		this->__vwsn_prop_Failure = ::vl::Ptr<::vl::reflection::description::IValueException>();
		this->__vwsn_prop_Status = ::vl::reflection::description::CoroutineStatus::Waiting;
	}

	::vl::Ptr<::vl::reflection::description::IValueException> __vwsnc4_CoAsync_GetMultipleString___vl_reflection_description_ICoroutine::GetFailure()
	{
		return __vwsn_prop_Failure;
	}
	void __vwsnc4_CoAsync_GetMultipleString___vl_reflection_description_ICoroutine::SetFailure(::vl::Ptr<::vl::reflection::description::IValueException> __vwsn_value_)
	{
		(__vwsn_prop_Failure = __vwsn_value_);
	}

	::vl::reflection::description::CoroutineStatus __vwsnc4_CoAsync_GetMultipleString___vl_reflection_description_ICoroutine::GetStatus()
	{
		return __vwsn_prop_Status;
	}
	void __vwsnc4_CoAsync_GetMultipleString___vl_reflection_description_ICoroutine::SetStatus(::vl::reflection::description::CoroutineStatus __vwsn_value_)
	{
		(__vwsn_prop_Status = __vwsn_value_);
	}

	void __vwsnc4_CoAsync_GetMultipleString___vl_reflection_description_ICoroutine::Resume(bool __vwsn_raise_exception_, ::vl::Ptr<::vl::reflection::description::CoroutineResult> __vwsn_co_result_)
	{
		if ((this->GetStatus() != ::vl::reflection::description::CoroutineStatus::Waiting))
		{
			throw ::vl::Exception(::vl::WString(L"Resume should be called only when the coroutine is in the waiting status.", false));
		}
		this->SetStatus(::vl::reflection::description::CoroutineStatus::Executing);
		try
		{
			{
				while (true)
				{
					if ((__vwsn_co_state_ == static_cast<::vl::vint>(0)))
					{
						(__vwsn_co2_for_begin_i = static_cast<::vl::vint>(0));
						(__vwsn_co3_for_end_i = static_cast<::vl::vint>(1));
						(__vwsn_co4_i = __vwsn_co2_for_begin_i);
						if ((__vwsn_co4_i <= __vwsn_co3_for_end_i))
						{
							(__vwsn_co_state_ = static_cast<::vl::vint>(3));
							continue;
						}
						(__vwsn_co_state_ = static_cast<::vl::vint>(1));
						continue;
					}
					if ((__vwsn_co_state_ == static_cast<::vl::vint>(1)))
					{
						this->SetStatus(::vl::reflection::description::CoroutineStatus::Stopped);
						return;
					}
					if ((__vwsn_co_state_ == static_cast<::vl::vint>(2)))
					{
						if (static_cast<bool>(__vwsn_co_result_))
						{
							if (static_cast<bool>(::vl::__vwsn::This(__vwsn_co_result_.Obj())->GetFailure()))
							{
								throw ::vl::Exception(::vl::__vwsn::This(::vl::__vwsn::This(__vwsn_co_result_.Obj())->GetFailure().Obj())->GetMessage());
							}
						}
						(GLOBAL_NAME s = ((::vl::WString(L"", false) + GLOBAL_NAME s) + ::vl::WString(L"!", false)));
						(__vwsn_co4_i = (__vwsn_co4_i + static_cast<::vl::vint>(1)));
						if ((__vwsn_co4_i <= __vwsn_co3_for_end_i))
						{
							(__vwsn_co_state_ = static_cast<::vl::vint>(3));
							continue;
						}
						(__vwsn_co_state_ = static_cast<::vl::vint>(1));
						continue;
					}
					if ((__vwsn_co_state_ == static_cast<::vl::vint>(3)))
					{
						this->SetStatus(::vl::reflection::description::CoroutineStatus::Waiting);
						(__vwsn_co_state_ = static_cast<::vl::vint>(4));
						{
							::vl::reflection::description::AsyncCoroutine::AwaitAndRead(__vwsn_co_impl_, ::vl::Ptr<::vl::reflection::description::IAsync>(GLOBAL_NAME GetStringAsync(__vwsn_co4_i)));
						}
						return;
					}
					if ((__vwsn_co_state_ == static_cast<::vl::vint>(4)))
					{
						if (static_cast<bool>(::vl::__vwsn::This(__vwsn_co_result_.Obj())->GetFailure()))
						{
							throw ::vl::Exception(::vl::__vwsn::This(::vl::__vwsn::This(__vwsn_co_result_.Obj())->GetFailure().Obj())->GetMessage());
						}
						(__vwsn_co0_x = ::IStringAsync::CastResult(::vl::__vwsn::This(__vwsn_co_result_.Obj())->GetResult()));
						(GLOBAL_NAME s = ((((::vl::WString(L"", false) + GLOBAL_NAME s) + ::vl::WString(L"[+", false)) + __vwsn_co0_x) + ::vl::WString(L"]", false)));
						(__vwsn_co_state_ = static_cast<::vl::vint>(5));
						continue;
					}
					if ((__vwsn_co_state_ == static_cast<::vl::vint>(5)))
					{
						this->SetStatus(::vl::reflection::description::CoroutineStatus::Waiting);
						(__vwsn_co_state_ = static_cast<::vl::vint>(6));
						{
							::vl::reflection::description::AsyncCoroutine::AwaitAndRead(__vwsn_co_impl_, ::vl::Ptr<::vl::reflection::description::IAsync>(GLOBAL_NAME GetStringAsync2(__vwsn_co4_i)));
						}
						return;
					}
					if ((__vwsn_co_state_ == static_cast<::vl::vint>(6)))
					{
						if (static_cast<bool>(::vl::__vwsn::This(__vwsn_co_result_.Obj())->GetFailure()))
						{
							throw ::vl::Exception(::vl::__vwsn::This(::vl::__vwsn::This(__vwsn_co_result_.Obj())->GetFailure().Obj())->GetMessage());
						}
						(__vwsn_co1_y = ::IStringAsync::CastResult(::vl::__vwsn::This(__vwsn_co_result_.Obj())->GetResult()));
						(GLOBAL_NAME s = ((((::vl::WString(L"", false) + GLOBAL_NAME s) + ::vl::WString(L"[-", false)) + __vwsn_co1_y) + ::vl::WString(L"]", false)));
						(__vwsn_co_state_ = static_cast<::vl::vint>(7));
						continue;
					}
					if ((__vwsn_co_state_ == static_cast<::vl::vint>(7)))
					{
						this->SetStatus(::vl::reflection::description::CoroutineStatus::Waiting);
						(__vwsn_co_state_ = static_cast<::vl::vint>(2));
						{
							::vl::reflection::description::AsyncCoroutine::AwaitAndRead(__vwsn_co_impl_, ::vl::reflection::description::IAsync::Delay(static_cast<::vl::vint>(0)));
						}
						return;
					}
				}
			}
		}
		catch(const ::vl::Exception& __vwsne_0)
		{
			auto __vwsn_co_ex_ = ::vl::reflection::description::IValueException::Create(__vwsne_0.Message());
			{
				this->SetFailure(__vwsn_co_ex_);
				this->SetStatus(::vl::reflection::description::CoroutineStatus::Stopped);
				if (__vwsn_raise_exception_)
				{
					throw;
				}
			}
		}
	}

}

/***********************************************************************
Class (::IStringAsync)
***********************************************************************/

::vl::WString IStringAsync::CastResult(const ::vl::reflection::description::Value& value)
{
	return ::vl::__vwsn::Unbox<::vl::WString>(value);
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
			IMPL_CPP_TYPE_INFO(IStringAsync)

#define _ ,
			BEGIN_INTERFACE_MEMBER(::IStringAsync)
				CLASS_MEMBER_STATIC_METHOD(CastResult, { L"value" })
			END_INTERFACE_MEMBER(::IStringAsync)

#undef _
			class CoAsyncTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::IStringAsync)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadCoAsyncTypes()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<CoAsyncTypeLoader>());
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
