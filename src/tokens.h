
#define TOKEN(c)            (0x80|(c))
#define IS_TOKEN(c)         (0x80&(c))
/*
 * Identifier and constant tokens.
 */
#define ID_TOKEN            TOKEN('V')
#define CHAR_TOKEN          TOKEN('Y')
#define INT_TOKEN           TOKEN('Z')
#define FLOAT_TOKEN         TOKEN('F')
#define STRING_TOKEN        TOKEN('S')
/*
 * Keyword tokens.
 */
#define CONST_TOKEN         TOKEN(1)
#define BYTE_TOKEN          TOKEN(2)
#define WORD_TOKEN          TOKEN(3)
#define IF_TOKEN            TOKEN(4)
#define ELSEIF_TOKEN        TOKEN(5)
#define ELSE_TOKEN          TOKEN(6)
#define FIN_TOKEN           TOKEN(7)
#define END_TOKEN           TOKEN(8)
#define WHILE_TOKEN         TOKEN(9)
#define LOOP_TOKEN          TOKEN(10)
#define CASE_TOKEN          TOKEN(11)
#define OF_TOKEN            TOKEN(12)
#define DEFAULT_TOKEN       TOKEN(13)
#define ENDCASE_TOKEN       TOKEN(14)
#define FOR_TOKEN           TOKEN(15)
#define TO_TOKEN            TOKEN(16)
#define DOWNTO_TOKEN        TOKEN(17)
#define STEP_TOKEN          TOKEN(18)
#define NEXT_TOKEN          TOKEN(19)
#define REPEAT_TOKEN        TOKEN(20)
#define UNTIL_TOKEN         TOKEN(21)
#define PREDEF_TOKEN        TOKEN(22)
#define DEF_TOKEN           TOKEN(23)
#define ASM_TOKEN           TOKEN(24)
#define IMPORT_TOKEN	    TOKEN(25)
#define EXPORT_TOKEN	    TOKEN(26)
#define DONE_TOKEN          TOKEN(27)
#define RETURN_TOKEN        TOKEN(28)
#define BREAK_TOKEN         TOKEN(29)
#define SYSFLAGS_TOKEN      TOKEN(30)
#define EXIT_TOKEN          TOKEN(31)
#define EVAL_TOKEN          TOKEN(32)
/*
 * Double operand operators.
 */
#define SET_TOKEN           TOKEN('=')
#define ADD_TOKEN           TOKEN('+')
#define ADD_SELF_TOKEN      TOKEN('a')
#define SUB_TOKEN           TOKEN('-')
#define SUB_SELF_TOKEN      TOKEN('u')
#define MUL_TOKEN           TOKEN('*')
#define MUL_SELF_TOKEN      TOKEN('m')
#define DIV_TOKEN           TOKEN('/')
#define DIV_SELF_TOKEN      TOKEN('d')
#define MOD_TOKEN           TOKEN('%')
#define OR_TOKEN            TOKEN('|')
#define OR_SELF_TOKEN       TOKEN('o')
#define EOR_TOKEN           TOKEN('^')
#define EOR_SELF_TOKEN      TOKEN('x')
#define AND_TOKEN           TOKEN('&')
#define AND_SELF_TOKEN      TOKEN('n')
#define SHR_TOKEN           TOKEN('R')
#define SHR_SELF_TOKEN      TOKEN('r')
#define SHL_TOKEN           TOKEN('L')
#define SHL_SELF_TOKEN      TOKEN('l')
#define GT_TOKEN            TOKEN('>')
#define GE_TOKEN            TOKEN('H')
#define LT_TOKEN            TOKEN('<')
#define LE_TOKEN            TOKEN('B')
#define NE_TOKEN            TOKEN('U')
#define EQ_TOKEN            TOKEN('E')
#define LOGIC_AND_TOKEN     TOKEN('N')
#define LOGIC_OR_TOKEN      TOKEN('O')
/*
 * Single operand operators.
 */
#define NEG_TOKEN           TOKEN('-')
#define COMP_TOKEN          TOKEN('~')
#define LOGIC_NOT_TOKEN     TOKEN('!')
#define INC_TOKEN           TOKEN('P')
#define DEC_TOKEN           TOKEN('K')
#define BPTR_TOKEN          TOKEN('^')
#define WPTR_TOKEN          TOKEN('*')
#define POST_INC_TOKEN      TOKEN('p')
#define POST_DEC_TOKEN      TOKEN('k')
#define OPEN_PAREN_TOKEN    TOKEN('(')
#define CLOSE_PAREN_TOKEN   TOKEN(')')
#define OPEN_BRACKET_TOKEN  TOKEN('[')
#define CLOSE_BRACKET_TOKEN TOKEN(']')
/*
 * Misc. tokens.
 */
#define AT_TOKEN            TOKEN('@')
#define DOT_TOKEN           TOKEN('.')
#define COLON_TOKEN         TOKEN(':')
#define POUND_TOKEN         TOKEN('#')
#define COMMA_TOKEN         TOKEN(',')
#define COMMENT_TOKEN       TOKEN(';')
#define EOL_TOKEN           TOKEN(0)
#define EOF_TOKEN           TOKEN(0x7F)

typedef unsigned char t_token;
