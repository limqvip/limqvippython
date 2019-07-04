# 经典C程序
#include  --预处理器指令
int main(void) --main()总是第一个被调用的函数

    |语句|--组成函数的语句
function a() 
    |语句|
function b() 
    |语句|
		--标号语句
		--复合语句
C语言中的
6种语--表达式语句
		--选择语句
		--迭代语句
		--跳转语句
C语言的数据类型关键字

最初K&R给出的关键字   C90标准添加的关键字   C99 添加的关键字
int			signed			_Bool
long			void			_Complex
short						
unsigned
char
float
double
- short int 类型 占用空间比int类型少，较小值以节省空间。与int类似，short是0有符号类型。
long int 或者long 占用的存储空间比int多适用于较大c数据的场合。与int类似，long是有符号类型。
long long int 或者long long C99 标准加入 占用存储空间可能比long多，适用于更大数值的场合。该类型至少占64位，与int类似，long long是有符号类型。
unsigned int 或者 unsigned 只用于非负数的场合，这种与有符号类型表示的范围不同。例如，16位 unsigned int 允许的取值范围是0-65535 用于表示正负号的位现在用于表示另一个二进制位，所以无符号整型可以表示更大的数。
在C90 标准中，添加了unsigned long int 或 unsigned long 和unsigned int 或 unsigned short类型，C99 标准又添加了unsigned long long int 或 unsigned long long。
在任何有符号类型前面添加关键字signed，可以强调有符号类型的意图。例如，short、short int、signed short、signed short int都表示同一种类型。

