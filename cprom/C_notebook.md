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
### C语言的数据类型关键字

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
nsigned int 或者 unsigned 只用于非负数的场合，这种与有符号类型表示的范围不同。例如，16位 unsigned int 允许的取值范围是0-65535 用于表示正负号的位现在用于表示另一个二进制位，所以无符号整型可以表示更大的数。
在C90 标准中，添加了unsigned long int 或 unsigned long 和unsigned int 或 unsigned short类型，C99 标准又添加了unsigned long long int 或 unsigned long long。
在任何有符号类型前面添加关键字signed，可以强调有符号类型的意图。例如，short、short int、signed short、signed short int都表示同一种类型。
C语言提供另一种浮点类型是double 双精度 double类型和float类型的最小取值范围相同，但至少必须能表示10位有效数字，一般i情况下double占用64位而不是32位。一些系统将多出的32位全部用来表示非指数部分，double至少有13位有效数字，超过了标准的最低位数规定。  C语言的第三种浮点类型是 long double,以满足比double类型更高的精度要求。不过，C只保证long double类型至少与double类型精度相同。

### 基本数据类型
基本数据类型由11个关键字组成：
int、long、short、unsigned、char、float、double、signed、_Bool、_Complex、_Imaginary。
#### 有符号整型：有符号整型可表示正整数和负整数
#### 无符号整型：用于表示0和正整数
#### 字符类型 可打印出来的符号都是字符，char类型表示一个字符要占用1字节内存，出于历史原因，1字节通常是8位，如果要表示基本字符集，也可以是16位或更大。
#### 布尔类型
#### 实浮点类型
#### 复数和虚数浮点数
### 第4章 常量和C预处理器 
#### 4.2 字符串简介
字符串是一个或多个字符的序列，双引号不是字符串的一部分。双引号告知编译器它跨起来的是字符串，正如单引号用于标识单个字符一样
sizeof(name) sizeof(char)
sizeof(name) sizeof(char) strlen()对于特定类型必须有()对于特定量可以不用()
