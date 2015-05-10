/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_PAS_YACC_H_INCLUDED
# define YY_YY_PAS_YACC_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PROG = 258,
    PROC = 259,
    BG = 260,
    END = 261,
    INT = 262,
    BOOL = 263,
    TRUE = 264,
    LP = 265,
    RP = 266,
    LSP = 267,
    RSP = 268,
    FALSE = 269,
    CC = 270,
    DOT = 271,
    SEMI = 272,
    VAR = 273,
    ARRAY = 274,
    OF = 275,
    DOTDOT = 276,
    IF = 277,
    THEN = 278,
    READ = 279,
    WRITE = 280,
    WHILE = 281,
    DO = 282,
    ELSE = 283,
    ASSIGN = 284,
    COMMA = 285,
    COLON = 286,
    ID = 287,
    NUM = 288,
    OR = 289,
    AND = 290,
    NOT = 291,
    EQ = 292,
    NE = 293,
    LT = 294,
    GT = 295,
    LE = 296,
    GE = 297,
    ADD = 298,
    MINUS = 299,
    DIV = 300,
    TIMES = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PAS_YACC_H_INCLUDED  */
