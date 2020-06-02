﻿/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
Parser::WfExpression.parser.txt

This file is generated by: Vczh Parser Generator
***********************************************************************/

#ifndef VCZH_WORKFLOW_EXPRESSION_WFEXPRESSIONPARSER_COPY
#define VCZH_WORKFLOW_EXPRESSION_WFEXPRESSIONPARSER_COPY

#include <VlppParser.h>
#include "WfExpression_Ast.h"

namespace vl
{
	namespace workflow
	{
		namespace copy_visitor
		{
			class VisitorBase : public Object
			{
			public:
				vl::Ptr<vl::parsing::ParsingTreeCustomBase> result;
			};

			class TypeVisitor : public virtual VisitorBase, public WfType::IVisitor
			{
			public:

				// CopyFields ----------------------------------------
				void CopyFields(WfPredefinedType* from, WfPredefinedType* to);
				void CopyFields(WfType* from, WfType* to);
				void CopyFields(WfTopQualifiedType* from, WfTopQualifiedType* to);
				void CopyFields(WfReferenceType* from, WfReferenceType* to);
				void CopyFields(WfRawPointerType* from, WfRawPointerType* to);
				void CopyFields(WfSharedPointerType* from, WfSharedPointerType* to);
				void CopyFields(WfNullableType* from, WfNullableType* to);
				void CopyFields(WfEnumerableType* from, WfEnumerableType* to);
				void CopyFields(WfMapType* from, WfMapType* to);
				void CopyFields(WfObservableListType* from, WfObservableListType* to);
				void CopyFields(WfFunctionType* from, WfFunctionType* to);
				void CopyFields(WfChildType* from, WfChildType* to);

				// CreateField (virtual) -----------------------------
				virtual vl::Ptr<WfType> CreateField(vl::Ptr<WfType> from) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfPredefinedType* node)override;
				void Visit(WfTopQualifiedType* node)override;
				void Visit(WfReferenceType* node)override;
				void Visit(WfRawPointerType* node)override;
				void Visit(WfSharedPointerType* node)override;
				void Visit(WfNullableType* node)override;
				void Visit(WfEnumerableType* node)override;
				void Visit(WfMapType* node)override;
				void Visit(WfObservableListType* node)override;
				void Visit(WfFunctionType* node)override;
				void Visit(WfChildType* node)override;
			};

			class ExpressionVisitor : public virtual VisitorBase, public WfExpression::IVisitor
			{
			public:

				// CopyFields ----------------------------------------
				void CopyFields(WfThisExpression* from, WfThisExpression* to);
				void CopyFields(WfExpression* from, WfExpression* to);
				void CopyFields(WfTopQualifiedExpression* from, WfTopQualifiedExpression* to);
				void CopyFields(WfReferenceExpression* from, WfReferenceExpression* to);
				void CopyFields(WfOrderedNameExpression* from, WfOrderedNameExpression* to);
				void CopyFields(WfOrderedLambdaExpression* from, WfOrderedLambdaExpression* to);
				void CopyFields(WfMemberExpression* from, WfMemberExpression* to);
				void CopyFields(WfChildExpression* from, WfChildExpression* to);
				void CopyFields(WfLiteralExpression* from, WfLiteralExpression* to);
				void CopyFields(WfFloatingExpression* from, WfFloatingExpression* to);
				void CopyFields(WfIntegerExpression* from, WfIntegerExpression* to);
				void CopyFields(WfStringExpression* from, WfStringExpression* to);
				void CopyFields(WfUnaryExpression* from, WfUnaryExpression* to);
				void CopyFields(WfBinaryExpression* from, WfBinaryExpression* to);
				void CopyFields(WfLetExpression* from, WfLetExpression* to);
				void CopyFields(WfLetVariable* from, WfLetVariable* to);
				void CopyFields(WfIfExpression* from, WfIfExpression* to);
				void CopyFields(WfRangeExpression* from, WfRangeExpression* to);
				void CopyFields(WfSetTestingExpression* from, WfSetTestingExpression* to);
				void CopyFields(WfConstructorExpression* from, WfConstructorExpression* to);
				void CopyFields(WfConstructorArgument* from, WfConstructorArgument* to);
				void CopyFields(WfInferExpression* from, WfInferExpression* to);
				void CopyFields(WfTypeCastingExpression* from, WfTypeCastingExpression* to);
				void CopyFields(WfTypeTestingExpression* from, WfTypeTestingExpression* to);
				void CopyFields(WfTypeOfTypeExpression* from, WfTypeOfTypeExpression* to);
				void CopyFields(WfTypeOfExpressionExpression* from, WfTypeOfExpressionExpression* to);
				void CopyFields(WfAttachEventExpression* from, WfAttachEventExpression* to);
				void CopyFields(WfDetachEventExpression* from, WfDetachEventExpression* to);
				void CopyFields(WfObserveExpression* from, WfObserveExpression* to);
				void CopyFields(WfCallExpression* from, WfCallExpression* to);
				void CopyFields(WfFunctionExpression* from, WfFunctionExpression* to);
				void CopyFields(WfFunctionDeclaration* from, WfFunctionDeclaration* to);
				void CopyFields(WfDeclaration* from, WfDeclaration* to);
				void CopyFields(WfAttribute* from, WfAttribute* to);
				void CopyFields(WfClassMember* from, WfClassMember* to);
				void CopyFields(WfFunctionArgument* from, WfFunctionArgument* to);
				void CopyFields(WfNewClassExpression* from, WfNewClassExpression* to);
				void CopyFields(WfNewInterfaceExpression* from, WfNewInterfaceExpression* to);

				// CreateField ---------------------------------------
				vl::Ptr<WfLetVariable> CreateField(vl::Ptr<WfLetVariable> from);
				vl::Ptr<WfConstructorArgument> CreateField(vl::Ptr<WfConstructorArgument> from);
				vl::Ptr<WfFunctionDeclaration> CreateField(vl::Ptr<WfFunctionDeclaration> from);
				vl::Ptr<WfAttribute> CreateField(vl::Ptr<WfAttribute> from);
				vl::Ptr<WfClassMember> CreateField(vl::Ptr<WfClassMember> from);
				vl::Ptr<WfFunctionArgument> CreateField(vl::Ptr<WfFunctionArgument> from);

				// CreateField (virtual) -----------------------------
				virtual vl::Ptr<WfExpression> CreateField(vl::Ptr<WfExpression> from) = 0;
				virtual vl::Ptr<WfType> CreateField(vl::Ptr<WfType> from) = 0;
				virtual vl::Ptr<WfStatement> CreateField(vl::Ptr<WfStatement> from) = 0;
				virtual vl::Ptr<WfDeclaration> CreateField(vl::Ptr<WfDeclaration> from) = 0;

				// Dispatch (virtual) --------------------------------
				virtual vl::Ptr<vl::parsing::ParsingTreeCustomBase> Dispatch(WfVirtualCfeExpression* node) = 0;
				virtual vl::Ptr<vl::parsing::ParsingTreeCustomBase> Dispatch(WfVirtualCseExpression* node) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfThisExpression* node)override;
				void Visit(WfTopQualifiedExpression* node)override;
				void Visit(WfReferenceExpression* node)override;
				void Visit(WfOrderedNameExpression* node)override;
				void Visit(WfOrderedLambdaExpression* node)override;
				void Visit(WfMemberExpression* node)override;
				void Visit(WfChildExpression* node)override;
				void Visit(WfLiteralExpression* node)override;
				void Visit(WfFloatingExpression* node)override;
				void Visit(WfIntegerExpression* node)override;
				void Visit(WfStringExpression* node)override;
				void Visit(WfUnaryExpression* node)override;
				void Visit(WfBinaryExpression* node)override;
				void Visit(WfLetExpression* node)override;
				void Visit(WfIfExpression* node)override;
				void Visit(WfRangeExpression* node)override;
				void Visit(WfSetTestingExpression* node)override;
				void Visit(WfConstructorExpression* node)override;
				void Visit(WfInferExpression* node)override;
				void Visit(WfTypeCastingExpression* node)override;
				void Visit(WfTypeTestingExpression* node)override;
				void Visit(WfTypeOfTypeExpression* node)override;
				void Visit(WfTypeOfExpressionExpression* node)override;
				void Visit(WfAttachEventExpression* node)override;
				void Visit(WfDetachEventExpression* node)override;
				void Visit(WfObserveExpression* node)override;
				void Visit(WfCallExpression* node)override;
				void Visit(WfFunctionExpression* node)override;
				void Visit(WfNewClassExpression* node)override;
				void Visit(WfNewInterfaceExpression* node)override;
				void Visit(WfVirtualCfeExpression* node)override;
				void Visit(WfVirtualCseExpression* node)override;
			};

			class StatementVisitor : public virtual VisitorBase, public WfStatement::IVisitor
			{
			public:

				// CopyFields ----------------------------------------
				void CopyFields(WfBreakStatement* from, WfBreakStatement* to);
				void CopyFields(WfStatement* from, WfStatement* to);
				void CopyFields(WfContinueStatement* from, WfContinueStatement* to);
				void CopyFields(WfReturnStatement* from, WfReturnStatement* to);
				void CopyFields(WfDeleteStatement* from, WfDeleteStatement* to);
				void CopyFields(WfRaiseExceptionStatement* from, WfRaiseExceptionStatement* to);
				void CopyFields(WfIfStatement* from, WfIfStatement* to);
				void CopyFields(WfWhileStatement* from, WfWhileStatement* to);
				void CopyFields(WfTryStatement* from, WfTryStatement* to);
				void CopyFields(WfBlockStatement* from, WfBlockStatement* to);
				void CopyFields(WfGotoStatement* from, WfGotoStatement* to);
				void CopyFields(WfVariableStatement* from, WfVariableStatement* to);
				void CopyFields(WfVariableDeclaration* from, WfVariableDeclaration* to);
				void CopyFields(WfDeclaration* from, WfDeclaration* to);
				void CopyFields(WfAttribute* from, WfAttribute* to);
				void CopyFields(WfClassMember* from, WfClassMember* to);
				void CopyFields(WfExpressionStatement* from, WfExpressionStatement* to);

				// CreateField ---------------------------------------
				vl::Ptr<WfVariableDeclaration> CreateField(vl::Ptr<WfVariableDeclaration> from);
				vl::Ptr<WfAttribute> CreateField(vl::Ptr<WfAttribute> from);
				vl::Ptr<WfClassMember> CreateField(vl::Ptr<WfClassMember> from);

				// CreateField (virtual) -----------------------------
				virtual vl::Ptr<WfExpression> CreateField(vl::Ptr<WfExpression> from) = 0;
				virtual vl::Ptr<WfType> CreateField(vl::Ptr<WfType> from) = 0;
				virtual vl::Ptr<WfStatement> CreateField(vl::Ptr<WfStatement> from) = 0;

				// Dispatch (virtual) --------------------------------
				virtual vl::Ptr<vl::parsing::ParsingTreeCustomBase> Dispatch(WfVirtualCseStatement* node) = 0;
				virtual vl::Ptr<vl::parsing::ParsingTreeCustomBase> Dispatch(WfCoroutineStatement* node) = 0;
				virtual vl::Ptr<vl::parsing::ParsingTreeCustomBase> Dispatch(WfStateMachineStatement* node) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfBreakStatement* node)override;
				void Visit(WfContinueStatement* node)override;
				void Visit(WfReturnStatement* node)override;
				void Visit(WfDeleteStatement* node)override;
				void Visit(WfRaiseExceptionStatement* node)override;
				void Visit(WfIfStatement* node)override;
				void Visit(WfWhileStatement* node)override;
				void Visit(WfTryStatement* node)override;
				void Visit(WfBlockStatement* node)override;
				void Visit(WfGotoStatement* node)override;
				void Visit(WfVariableStatement* node)override;
				void Visit(WfExpressionStatement* node)override;
				void Visit(WfVirtualCseStatement* node)override;
				void Visit(WfCoroutineStatement* node)override;
				void Visit(WfStateMachineStatement* node)override;
			};

			class DeclarationVisitor : public virtual VisitorBase, public WfDeclaration::IVisitor
			{
			public:

				// CopyFields ----------------------------------------
				void CopyFields(WfNamespaceDeclaration* from, WfNamespaceDeclaration* to);
				void CopyFields(WfDeclaration* from, WfDeclaration* to);
				void CopyFields(WfAttribute* from, WfAttribute* to);
				void CopyFields(WfClassMember* from, WfClassMember* to);
				void CopyFields(WfFunctionDeclaration* from, WfFunctionDeclaration* to);
				void CopyFields(WfFunctionArgument* from, WfFunctionArgument* to);
				void CopyFields(WfVariableDeclaration* from, WfVariableDeclaration* to);
				void CopyFields(WfEventDeclaration* from, WfEventDeclaration* to);
				void CopyFields(WfPropertyDeclaration* from, WfPropertyDeclaration* to);
				void CopyFields(WfConstructorDeclaration* from, WfConstructorDeclaration* to);
				void CopyFields(WfBaseConstructorCall* from, WfBaseConstructorCall* to);
				void CopyFields(WfDestructorDeclaration* from, WfDestructorDeclaration* to);
				void CopyFields(WfClassDeclaration* from, WfClassDeclaration* to);
				void CopyFields(WfEnumDeclaration* from, WfEnumDeclaration* to);
				void CopyFields(WfEnumItem* from, WfEnumItem* to);
				void CopyFields(WfEnumItemIntersection* from, WfEnumItemIntersection* to);
				void CopyFields(WfStructDeclaration* from, WfStructDeclaration* to);
				void CopyFields(WfStructMember* from, WfStructMember* to);

				// CreateField ---------------------------------------
				vl::Ptr<WfAttribute> CreateField(vl::Ptr<WfAttribute> from);
				vl::Ptr<WfClassMember> CreateField(vl::Ptr<WfClassMember> from);
				vl::Ptr<WfFunctionArgument> CreateField(vl::Ptr<WfFunctionArgument> from);
				vl::Ptr<WfBaseConstructorCall> CreateField(vl::Ptr<WfBaseConstructorCall> from);
				vl::Ptr<WfEnumItem> CreateField(vl::Ptr<WfEnumItem> from);
				vl::Ptr<WfEnumItemIntersection> CreateField(vl::Ptr<WfEnumItemIntersection> from);
				vl::Ptr<WfStructMember> CreateField(vl::Ptr<WfStructMember> from);

				// CreateField (virtual) -----------------------------
				virtual vl::Ptr<WfExpression> CreateField(vl::Ptr<WfExpression> from) = 0;
				virtual vl::Ptr<WfDeclaration> CreateField(vl::Ptr<WfDeclaration> from) = 0;
				virtual vl::Ptr<WfType> CreateField(vl::Ptr<WfType> from) = 0;
				virtual vl::Ptr<WfStatement> CreateField(vl::Ptr<WfStatement> from) = 0;

				// Dispatch (virtual) --------------------------------
				virtual vl::Ptr<vl::parsing::ParsingTreeCustomBase> Dispatch(WfVirtualCfeDeclaration* node) = 0;
				virtual vl::Ptr<vl::parsing::ParsingTreeCustomBase> Dispatch(WfVirtualCseDeclaration* node) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfNamespaceDeclaration* node)override;
				void Visit(WfFunctionDeclaration* node)override;
				void Visit(WfVariableDeclaration* node)override;
				void Visit(WfEventDeclaration* node)override;
				void Visit(WfPropertyDeclaration* node)override;
				void Visit(WfConstructorDeclaration* node)override;
				void Visit(WfDestructorDeclaration* node)override;
				void Visit(WfClassDeclaration* node)override;
				void Visit(WfEnumDeclaration* node)override;
				void Visit(WfStructDeclaration* node)override;
				void Visit(WfVirtualCfeDeclaration* node)override;
				void Visit(WfVirtualCseDeclaration* node)override;
			};

			class VirtualCfeDeclarationVisitor : public virtual VisitorBase, public WfVirtualCfeDeclaration::IVisitor
			{
			public:

				// CopyFields ----------------------------------------
				void CopyFields(WfAutoPropertyDeclaration* from, WfAutoPropertyDeclaration* to);
				void CopyFields(WfVirtualCfeDeclaration* from, WfVirtualCfeDeclaration* to);
				void CopyFields(WfDeclaration* from, WfDeclaration* to);
				void CopyFields(WfAttribute* from, WfAttribute* to);
				void CopyFields(WfClassMember* from, WfClassMember* to);
				void CopyFields(WfCastResultInterfaceDeclaration* from, WfCastResultInterfaceDeclaration* to);

				// CreateField ---------------------------------------
				vl::Ptr<WfAttribute> CreateField(vl::Ptr<WfAttribute> from);
				vl::Ptr<WfClassMember> CreateField(vl::Ptr<WfClassMember> from);

				// CreateField (virtual) -----------------------------
				virtual vl::Ptr<WfExpression> CreateField(vl::Ptr<WfExpression> from) = 0;
				virtual vl::Ptr<WfDeclaration> CreateField(vl::Ptr<WfDeclaration> from) = 0;
				virtual vl::Ptr<WfType> CreateField(vl::Ptr<WfType> from) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfAutoPropertyDeclaration* node)override;
				void Visit(WfCastResultInterfaceDeclaration* node)override;
			};

			class VirtualCseDeclarationVisitor : public virtual VisitorBase, public WfVirtualCseDeclaration::IVisitor
			{
			public:

				// CopyFields ----------------------------------------
				void CopyFields(WfStateMachineDeclaration* from, WfStateMachineDeclaration* to);
				void CopyFields(WfVirtualCseDeclaration* from, WfVirtualCseDeclaration* to);
				void CopyFields(WfDeclaration* from, WfDeclaration* to);
				void CopyFields(WfAttribute* from, WfAttribute* to);
				void CopyFields(WfClassMember* from, WfClassMember* to);
				void CopyFields(WfStateInput* from, WfStateInput* to);
				void CopyFields(WfFunctionArgument* from, WfFunctionArgument* to);
				void CopyFields(WfStateDeclaration* from, WfStateDeclaration* to);

				// CreateField ---------------------------------------
				vl::Ptr<WfAttribute> CreateField(vl::Ptr<WfAttribute> from);
				vl::Ptr<WfClassMember> CreateField(vl::Ptr<WfClassMember> from);
				vl::Ptr<WfStateInput> CreateField(vl::Ptr<WfStateInput> from);
				vl::Ptr<WfFunctionArgument> CreateField(vl::Ptr<WfFunctionArgument> from);
				vl::Ptr<WfStateDeclaration> CreateField(vl::Ptr<WfStateDeclaration> from);

				// CreateField (virtual) -----------------------------
				virtual vl::Ptr<WfExpression> CreateField(vl::Ptr<WfExpression> from) = 0;
				virtual vl::Ptr<WfDeclaration> CreateField(vl::Ptr<WfDeclaration> from) = 0;
				virtual vl::Ptr<WfType> CreateField(vl::Ptr<WfType> from) = 0;
				virtual vl::Ptr<WfStatement> CreateField(vl::Ptr<WfStatement> from) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfStateMachineDeclaration* node)override;
			};

			class VirtualCseStatementVisitor : public virtual VisitorBase, public WfVirtualCseStatement::IVisitor
			{
			public:

				// CopyFields ----------------------------------------
				void CopyFields(WfForEachStatement* from, WfForEachStatement* to);
				void CopyFields(WfVirtualCseStatement* from, WfVirtualCseStatement* to);
				void CopyFields(WfStatement* from, WfStatement* to);
				void CopyFields(WfSwitchStatement* from, WfSwitchStatement* to);
				void CopyFields(WfSwitchCase* from, WfSwitchCase* to);
				void CopyFields(WfCoProviderStatement* from, WfCoProviderStatement* to);

				// CreateField ---------------------------------------
				vl::Ptr<WfSwitchCase> CreateField(vl::Ptr<WfSwitchCase> from);

				// CreateField (virtual) -----------------------------
				virtual vl::Ptr<WfStatement> CreateField(vl::Ptr<WfStatement> from) = 0;
				virtual vl::Ptr<WfExpression> CreateField(vl::Ptr<WfExpression> from) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfForEachStatement* node)override;
				void Visit(WfSwitchStatement* node)override;
				void Visit(WfCoProviderStatement* node)override;
			};

			class CoroutineStatementVisitor : public virtual VisitorBase, public WfCoroutineStatement::IVisitor
			{
			public:

				// CopyFields ----------------------------------------
				void CopyFields(WfCoPauseStatement* from, WfCoPauseStatement* to);
				void CopyFields(WfCoroutineStatement* from, WfCoroutineStatement* to);
				void CopyFields(WfStatement* from, WfStatement* to);
				void CopyFields(WfCoOperatorStatement* from, WfCoOperatorStatement* to);

				// CreateField (virtual) -----------------------------
				virtual vl::Ptr<WfStatement> CreateField(vl::Ptr<WfStatement> from) = 0;
				virtual vl::Ptr<WfExpression> CreateField(vl::Ptr<WfExpression> from) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfCoPauseStatement* node)override;
				void Visit(WfCoOperatorStatement* node)override;
			};

			class StateMachineStatementVisitor : public virtual VisitorBase, public WfStateMachineStatement::IVisitor
			{
			public:

				// CopyFields ----------------------------------------
				void CopyFields(WfStateSwitchStatement* from, WfStateSwitchStatement* to);
				void CopyFields(WfStateMachineStatement* from, WfStateMachineStatement* to);
				void CopyFields(WfStatement* from, WfStatement* to);
				void CopyFields(WfStateSwitchCase* from, WfStateSwitchCase* to);
				void CopyFields(WfStateSwitchArgument* from, WfStateSwitchArgument* to);
				void CopyFields(WfStateInvokeStatement* from, WfStateInvokeStatement* to);

				// CreateField ---------------------------------------
				vl::Ptr<WfStateSwitchCase> CreateField(vl::Ptr<WfStateSwitchCase> from);
				vl::Ptr<WfStateSwitchArgument> CreateField(vl::Ptr<WfStateSwitchArgument> from);

				// CreateField (virtual) -----------------------------
				virtual vl::Ptr<WfStatement> CreateField(vl::Ptr<WfStatement> from) = 0;
				virtual vl::Ptr<WfExpression> CreateField(vl::Ptr<WfExpression> from) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfStateSwitchStatement* node)override;
				void Visit(WfStateInvokeStatement* node)override;
			};

			class VirtualCfeExpressionVisitor : public virtual VisitorBase, public WfVirtualCfeExpression::IVisitor
			{
			public:

				// CopyFields ----------------------------------------
				void CopyFields(WfFormatExpression* from, WfFormatExpression* to);
				void CopyFields(WfVirtualCfeExpression* from, WfVirtualCfeExpression* to);
				void CopyFields(WfExpression* from, WfExpression* to);

				// CreateField (virtual) -----------------------------
				virtual vl::Ptr<WfExpression> CreateField(vl::Ptr<WfExpression> from) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfFormatExpression* node)override;
			};

			class VirtualCseExpressionVisitor : public virtual VisitorBase, public WfVirtualCseExpression::IVisitor
			{
			public:

				// CopyFields ----------------------------------------
				void CopyFields(WfBindExpression* from, WfBindExpression* to);
				void CopyFields(WfVirtualCseExpression* from, WfVirtualCseExpression* to);
				void CopyFields(WfExpression* from, WfExpression* to);
				void CopyFields(WfNewCoroutineExpression* from, WfNewCoroutineExpression* to);
				void CopyFields(WfMixinCastExpression* from, WfMixinCastExpression* to);
				void CopyFields(WfExpectedTypeCastExpression* from, WfExpectedTypeCastExpression* to);
				void CopyFields(WfCoOperatorExpression* from, WfCoOperatorExpression* to);

				// CreateField (virtual) -----------------------------
				virtual vl::Ptr<WfExpression> CreateField(vl::Ptr<WfExpression> from) = 0;
				virtual vl::Ptr<WfStatement> CreateField(vl::Ptr<WfStatement> from) = 0;
				virtual vl::Ptr<WfType> CreateField(vl::Ptr<WfType> from) = 0;

				// Visitor Members -----------------------------------
				void Visit(WfBindExpression* node)override;
				void Visit(WfNewCoroutineExpression* node)override;
				void Visit(WfMixinCastExpression* node)override;
				void Visit(WfExpectedTypeCastExpression* node)override;
				void Visit(WfCoOperatorExpression* node)override;
			};

			class ModuleUsingFragmentVisitor : public virtual VisitorBase, public WfModuleUsingFragment::IVisitor
			{
			public:

				// CopyFields ----------------------------------------
				void CopyFields(WfModuleUsingNameFragment* from, WfModuleUsingNameFragment* to);
				void CopyFields(WfModuleUsingFragment* from, WfModuleUsingFragment* to);
				void CopyFields(WfModuleUsingWildCardFragment* from, WfModuleUsingWildCardFragment* to);

				// Visitor Members -----------------------------------
				void Visit(WfModuleUsingNameFragment* node)override;
				void Visit(WfModuleUsingWildCardFragment* node)override;
			};

			class ModuleVisitor
				: public TypeVisitor
				, public ExpressionVisitor
				, public StatementVisitor
				, public DeclarationVisitor
				, public VirtualCfeDeclarationVisitor
				, public VirtualCseDeclarationVisitor
				, public VirtualCseStatementVisitor
				, public CoroutineStatementVisitor
				, public StateMachineStatementVisitor
				, public VirtualCfeExpressionVisitor
				, public VirtualCseExpressionVisitor
				, public ModuleUsingFragmentVisitor
			{
			public:
				vl::Ptr<WfModule> CreateField(vl::Ptr<WfModule> from);

				// CopyFields ----------------------------------------
				void CopyFields(WfModule* from, WfModule* to);
				void CopyFields(WfModuleUsingPath* from, WfModuleUsingPath* to);
				void CopyFields(WfModuleUsingItem* from, WfModuleUsingItem* to);

				// CreateField ---------------------------------------
				vl::Ptr<WfModuleUsingPath> CreateField(vl::Ptr<WfModuleUsingPath> from);
				vl::Ptr<WfModuleUsingItem> CreateField(vl::Ptr<WfModuleUsingItem> from);

				// CreateField (virtual) -----------------------------
				vl::Ptr<WfType> CreateField(vl::Ptr<WfType> from);
				vl::Ptr<WfExpression> CreateField(vl::Ptr<WfExpression> from);
				vl::Ptr<WfStatement> CreateField(vl::Ptr<WfStatement> from);
				vl::Ptr<WfDeclaration> CreateField(vl::Ptr<WfDeclaration> from);
				vl::Ptr<WfModuleUsingFragment> CreateField(vl::Ptr<WfModuleUsingFragment> from);

				// Dispatch (virtual) --------------------------------
				vl::Ptr<vl::parsing::ParsingTreeCustomBase> Dispatch(WfVirtualCfeExpression* node);
				vl::Ptr<vl::parsing::ParsingTreeCustomBase> Dispatch(WfVirtualCseExpression* node);
				vl::Ptr<vl::parsing::ParsingTreeCustomBase> Dispatch(WfVirtualCseStatement* node);
				vl::Ptr<vl::parsing::ParsingTreeCustomBase> Dispatch(WfCoroutineStatement* node);
				vl::Ptr<vl::parsing::ParsingTreeCustomBase> Dispatch(WfStateMachineStatement* node);
				vl::Ptr<vl::parsing::ParsingTreeCustomBase> Dispatch(WfVirtualCfeDeclaration* node);
				vl::Ptr<vl::parsing::ParsingTreeCustomBase> Dispatch(WfVirtualCseDeclaration* node);
			};
		}
	}
}
#endif