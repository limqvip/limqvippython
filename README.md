# limqvippython
git与github安装、配置、pull、push
https://www.cnblogs.com/qiaoconglovelife/p/5506643.html limqvip.github.io code 5 pull、fetch与clone 　　pull与push相反，是将代码从远程仓库同步至本地仓库并merge的命令

git pull origin master 　　而fetch是单纯将代码从远程仓库同步至本地仓库，并不作merge。

git fetch git diff origin/master git merge origin 三个步骤分别代表：取远程仓库至本地，保存版本号至.git/FETCH_HEAD；比较远程origin/master分支与本地差别；将远程origin/master merge至本地仓库。与直接pull相比，fetch后可以直观看到远程仓库的不同，再决定是否要merge，更加安全。

　　clone不是同步，而类似于下载。我们不仅可以clone自己的仓库，还可以clone别人的仓库，只需要知道相应的URL即可　　

git clone git@github.com:AndyQiao/makefile_test.git code1 　　注：code1是目标文件夹。

　　git还是很牛逼的。不过有些项目用SVN更方便一些。以前在Window下编程我都用SVN的。要好好学习一下git！下午查各种资料，各种试验，再写博客，收获很多。加油。

命令行配置用这个命令好
echo "lcd_rotate=2" | sudo tee -a /boot/config.txt
git remote -v
# [git与github安装、配置、pull、push](https://www.cnblogs.com/qiaoconglovelife/p/5506643.html) 		

操作系统是Ubuntu 16.04 LTS 64bit

#### 1 安装git

　　（1）安装

```
sudo apt-get install git-core
```

　　（2）一些全局变量的初始化

　　在本地建立一个文件夹，然后做一些全局变量的初始化

```
git config --global user.name 用户名或者用户ID

git config --global user.email 你邮箱
```

　　这两个选项会在以后你提交代码至本地仓库时自动填写到你的提交记录中去。

#### 2 使用git版本管理器本地管理你的项目

　　（1）进入你项目的目录，进行git初始化，创建.git文件夹

```
git init
```

　　执行后，你发现你的项目中多了一个.git隐藏文件夹。这样，你的本地仓库就已经建立好了。

　　（2）管理哪此文件将被提交至中

　　![img](https://images2015.cnblogs.com/blog/880287/201605/880287-20160518205833998-364660226.png)

　　如上，git status命令显示了哪些文件将被提交至git中（绿色），哪此文件将会被untracked（红色）。我们可以能过git add和git rm来管理这些文件。

　　（3）提交你的代码至git版本管理器

```
git commit -m 'first commit'
```

　　使用git show命令可以查看到你的提交记录：

　　![img](https://images2015.cnblogs.com/blog/880287/201605/880287-20160518210211341-1238477077.png)

 

#### 3 配置github SSH

　　SSH是什么？SSH是Secure Shell，是一种认证方式，github可以采用两种认证方式：SSH和https。两种的区别是SSH需要进行SSH key配置，但是每次Pull的时候是不需要输入用户名密码的，而https每次都要输入用户名密码的。

　　（1）检测是否能连接到github

```
ssh -T git@github.com
```

如果看到：
          Warning: Permanently added ‘github.com,204.232.175.90’ (RSA) to the list of known hosts.
          Permission denied (publickey).
则说明可以连接。

（2）创建本地SSH Key

```
ssh-keygen -t rsa -C "your_email"
```

　　~/.ssh目录下生成**id_rsa**（私钥）和**id_rsa.pub**（公钥）文件。

　　（3）将此密钥（public key）上传至github

　　同志。一定要有自己的github账户呀。没有的话就去官网注册一个。在网页版github中，依次点击Account settings（右上角倒数第二个图标） -> SSH Keys -> Add SSH Key，将id_rsa.pub文件中的字符串复制进去，注意字符串中**没有**换行和空格。

　　（4）测试密钥是否成功

　　与第一步相同：

```
ssh -T git@github.com
```

　　如果看到：Hi xxx! You’ve successfully authenticated, but GitHub does not provide shell access，则密钥上传成功。

#### 4  push本地git仓库至github仓库

　　（1）首先，我们要在github中建造一个public仓库。去网页版傻瓜式操作。

　　（2）本地git中设置远程github的仓库的url。如上节所讲，有两种方式：

　　　　1）Https方式　　

```
git remote add origin https://github.com/AndyQiao/makefile_test.git
```

　　 　2）SSH方式

```
git remote add origin git@github.com:AndyQiao/makefile_test.git
```

　　注意，这里的origin是远程仓库的一个别名，是任意的。我们之后向远程仓库里同步时，就使用这个别名。推荐origin作为所有项目的远程仓库的别名，这样就不会忘记了。不过。我们也可以使用git remote -v来查看：

![img](https://images2015.cnblogs.com/blog/880287/201605/880287-20160518211237685-1787307383.png)

　　（3）push本地git至github远程仓库

```
git push origin master
```

　　注意：（1）master指的是分支（branch）名字。一个仓库中默认的分支名字就是master，以后，你可以有别的branch；（2）如果上一步使用的是SSH方式，那么命令就直接执行，如果使用Https方式，则每次push都需要输入密码

#### 5 pull、fetch与clone

　　pull与push相反，是将代码从远程仓库同步至本地仓库并merge的命令

```
git pull origin master
```

　　而fetch是单纯将代码从远程仓库同步至本地仓库，并不作merge。

```
git fetchgit diff origin/mastergit merge origin
```

​     三个步骤分别代表：取远程仓库至本地，保存版本号至.git/FETCH_HEAD；比较远程origin/master分支与本地差别；将远程origin/master merge至本地仓库。与直接pull相比，fetch后可以直观看到远程仓库的不同，再决定是否要merge，更加安全。

　　clone不是同步，而类似于下载。我们不仅可以clone自己的仓库，还可以clone别人的仓库，只需要知道相应的URL即可　　

```
git clone git@github.com:AndyQiao/makefile_test.git code1
```

　　注：code1是目标文件夹。

　　git还是很牛逼的。不过有些项目用SVN更方便一些。以前在Window下编程我都用SVN的。要好好学习一下git！下午查各种资料，各种试验，再写博客，收获很多。加油。

#### 6 log

　　git log命令展示远程仓库的提交历史，-p选项展示每次提交的修改情况，-2选项展示最近两次提交历史

#### 7 stash与stash pop


usage: git remote [-v | --verbose]
   or: git remote add [-t <branch>] [-m <master>] [-f] [--tags | --no-tags] [--mirror=<fetch|push>] <name> <url>
   or: git remote rename <old> <new>
   or: git remote remove <name>
   or: git remote set-head <name> (-a | --auto | -d | --delete | <branch>)
   or: git remote [-v | --verbose] show [-n] <name>
   or: git remote prune [-n | --dry-run] <name>
   or: git remote [-v | --verbose] update [-p | --prune] [(<group> | <remote>)...]
   or: git remote set-branches [--add] <name> <branch>...
   or: git remote get-url [--push] [--all] <name>
   or: git remote set-url [--push] <name> <newurl> [<oldurl>]
   or: git remote set-url --add <name> <newurl>
   or: git remote set-url --delete <name> <url>

    -v, --verbose         be verbose; must be placed before a subcommand
140.82.114.4  github.com
199.232.69.194 github.global.ssl.fastly.net

　　git stash命令可以次工作区设置为上次提交后的情况，方便中途处理重要情况，之后通过stash pop将工作区恢复至之前的状况。
git push origin master
