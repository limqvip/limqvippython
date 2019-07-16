sed命令替换文件内容 

reference：
https://www.cnblogs.com/starof/p/4181985.html
抓取目录名并修改
ls | grep "XXX" > 1.txt
 
sed命令下批量替换文件内容  　
格式: sed -i "s/查找字段/替换字段/g" `grep 查找字段 -rl 路径` 文件名
-i 表示inplace edit，就地修改文件
 -r 表示搜索子目录
 -l 表示输出匹配的文件名
s表示替换，d表示删除
示例：sed -i "s/shan/hua/g"  lishan.txt
          把当前目录下lishan.txt里的shan都替换为hua
 
sed的其他用法如下：
1、删除行首空格
   sed 's/^[ ]*//g' filename
   sed 's/^ *//g' filename
   sed 's/^[[:space:]]*//g' filename
2、行后和行前添加新行
   行后：sed 's/pattern/&\n/g' filename
   行前：sed 's/pattern/\n&/g' filename
   &代表pattern
3、使用变量替换(使用双引号)
    sed -e "s/$var1/$var2/g" filename
4、在第一行前插入文本
    sed -i '1 i\插入字符串' filename
5、在最后一行插入
    sed -i '$ a\插入字符串' filename
6、在匹配行前插入
    sed -i '/pattern/ i "插入字符串"' filename
7、在匹配行后插入
   sed -i '/pattern/ a "插入字符串"' filename
8、删除文本中空行和空格组成的行以及#号注释的行
   grep -v ^# filename | sed /^[[:space:]]*$/d | sed /^$/d