git fetch
git diff origin/master
echo 是否合并分支，合并请输入以下命令
echo git merge origin
echo git pull origin master pull与push相反，是将代码从远程仓库同步至本地仓库并merge的命令
echo fetch 是单纯将代码从远程仓库同步至本地仓库，并不作merge。 gitfetchgit  diff origin/mastergit merge origin 
echo 执行 git fetch origin master 时，它的意思是从名为 origin 的远程上拉取名为 master 的分支到本地分支 origin/master 中。既然是拉取代码，当然需要同时指定远程名与分支名，所以分开写。
echo 执行 git merge origin/master 时，它的意思是合并名为 origin/master 的分支到当前所在分支。既然是分支的合并，当然就与远程名没有直接的关系，所以没有出现远程名。需要指定的是被合并的分支。
echo 执行 git push origin master 时，它的意思是推送本地的 master 分支到远程 origin，涉及到远程以及分支，当然也得分开写了。
echo 还可以一次性拉取多个分支的代码：git fetch origin master stable oldstable；
echo 也还可以一次性合并多个分支的代码：git merge origin/master hotfix-2275 hotfix-2276 hotfix-2290；
#
#
#
