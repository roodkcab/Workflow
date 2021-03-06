/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/BindSimple2.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "BindSimple2Reflection.h"

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
			IMPL_CPP_TYPE_INFO(Derived2)
			IMPL_CPP_TYPE_INFO(OuterClass2)
			IMPL_CPP_TYPE_INFO(OuterClass2::Base2)

#define _ ,
			BEGIN_CLASS_MEMBER(::Derived2)
				CLASS_MEMBER_BASE(::OuterClass2::Base2)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::Derived2>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(Execute, NO_PARAMETER)
				CLASS_MEMBER_FIELD(x)
				CLASS_MEMBER_FIELD(y)
				CLASS_MEMBER_FIELD(z)
			END_CLASS_MEMBER(::Derived2)

			BEGIN_CLASS_MEMBER(::OuterClass2)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::OuterClass2>(), NO_PARAMETER)
			END_CLASS_MEMBER(::OuterClass2)

			BEGIN_CLASS_MEMBER(::OuterClass2::Base2)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::OuterClass2::Base2>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(Initialize, { L"derived" })
				CLASS_MEMBER_FIELD(s)
				CLASS_MEMBER_FIELD(subscription)
			END_CLASS_MEMBER(::OuterClass2::Base2)

#undef _
			class BindSimple2TypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::Derived2)
					ADD_TYPE_INFO(::OuterClass2)
					ADD_TYPE_INFO(::OuterClass2::Base2)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadBindSimple2Types()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<BindSimple2TypeLoader>());
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
