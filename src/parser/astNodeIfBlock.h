/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_IF_BLOCK_H__
#define __PARSER_AST_NODE_IF_BLOCK_H__

#include <vector>
#include "../deltaConfig.h"
#include "astNode.h"
#include "astNodeBlock.h"

namespace delta {
	namespace parser {

		class AstNodeIfBlock : public AstNodeBlock
		{
			public:
				
				AstNodeIfBlock() : m_boolExp(0), m_elifBlock(0), m_elseBlock(0) {};

				virtual AstNodeType getType() const { return IfBlock; };

				inline void setBoolExpr(AstNode* boolExp) { m_boolExp = boolExp; }

				inline AstNode* getBoolExpr() { return m_boolExp; }


				inline void setIfBlock(AstNode* ifB) { m_block = ifB; } 

				inline AstNode* getIfBlock() { return m_block; }


				inline void setElifBlock(AstNode* elif) { m_elifBlock = elif; } 

				inline AstNode* getElifBlock() { return m_elifBlock; }


				inline void setElseBlock(AstNode* elseB) { m_elseBlock = elseB; } 

				inline AstNode* getElseBlock() { return m_elseBlock; }


			private:

				AstNode* m_boolExp;

				AstNode* m_block;

				AstNode* m_elifBlock;

				AstNode* m_elseBlock;

		};

	} // namespace delta
} // namespace parser

#endif






