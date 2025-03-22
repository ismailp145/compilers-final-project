/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_STRUCTPROC_TAB_H_INCLUDED
# define YY_YY_STRUCTPROC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CONSTANT = 258,                /* CONSTANT  */
    VARIABLE = 259,                /* VARIABLE  */
    IDENTIFIER = 260,              /* IDENTIFIER  */
    COLON = 261,                   /* COLON  */
    COLON_COLON = 262,             /* COLON_COLON  */
    COMMA = 263,                   /* COMMA  */
    SEMICOLON = 264,               /* SEMICOLON  */
    VERTICAL_BAR = 265,            /* VERTICAL_BAR  */
    PERIOD = 266,                  /* PERIOD  */
    BEGIN_LIST = 267,              /* BEGIN_LIST  */
    BEGIN_IMPLICIT = 268,          /* BEGIN_IMPLICIT  */
    END_LIST = 269,                /* END_LIST  */
    END_IMPLICIT = 270,            /* END_IMPLICIT  */
    BEGIN_PAREN = 271,             /* BEGIN_PAREN  */
    END_PAREN = 272,               /* END_PAREN  */
    ARROW = 273,                   /* ARROW  */
    CARET = 274,                   /* CARET  */
    CLASS = 275,                   /* CLASS  */
    OF = 276,                      /* OF  */
    INSTANCE = 277,                /* INSTANCE  */
    ABSTRACT = 278,                /* ABSTRACT  */
    COMP_METH = 279,               /* COMP_METH  */
    NUM_EXPR = 280,                /* NUM_EXPR  */
    LOGIC_SENT = 281,              /* LOGIC_SENT  */
    ASSIGN = 282,                  /* ASSIGN  */
    OR = 283,                      /* OR  */
    AND = 284,                     /* AND  */
    EQUALITY_COMPARE = 285,        /* EQUALITY_COMPARE  */
    EQUALS = 286,                  /* EQUALS  */
    LESSER_GREATER_COMPARE = 287,  /* LESSER_GREATER_COMPARE  */
    ADD = 288,                     /* ADD  */
    MULTIPLY = 289,                /* MULTIPLY  */
    DIVIDE = 290,                  /* DIVIDE  */
    POWER = 291,                   /* POWER  */
    UNARY = 292,                   /* UNARY  */
    NEW = 293,                     /* NEW  */
    FUNCTION = 294,                /* FUNCTION  */
    NOT = 295,                     /* NOT  */
    PLUSMINUS = 296,               /* PLUSMINUS  */
    LESS_PRECEDENCE_THAN_IS_SUPPORTED_BY = 297, /* LESS_PRECEDENCE_THAN_IS_SUPPORTED_BY  */
    EOINPUT = 298                  /* EOINPUT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "structProc.y"

  numerator_ty				integer_;
  ParseTreeNode*			nodePtr_;
  ConstParseTreeNode*			constPtr_;
  IdentityConstParseTreeNode*		idPtr_;
  TwoConstPtrNode*			twoConstPtr_;
  OrderingCompOperationParseTreeNode*	orderCompPtr_;
  EquivalenceAssertionParseTreeNode*	equalsAssertPtr_;
  SPVectorListParseTreeNode*		listPtr_;
  ParseTimeListParseTreeNode*		parseTimeListPtr_;
  VarUsageParseTreeNode*		varUsagePtr_;

#line 120 "structProc.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_STRUCTPROC_TAB_H_INCLUDED  */
