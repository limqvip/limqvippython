git status -s

git status -s | awk ' $2 { print ( $2 ) }'>/home/limq/addgit
git add `more /home/limqaddgit`
git status -s
git commit -m " `date "+%Y-%m-%d %H:%M:%S"`  `git status -s`"
git status -s
