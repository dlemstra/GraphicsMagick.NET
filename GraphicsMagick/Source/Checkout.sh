#/bin/bash

clone_repository()
{
  echo ''
 
  cd ..
}

if [ ! -d "GraphicsMagick" ]; then
  mkdir GraphicsMagick
  git clone $1 GraphicsMagick
fi

cd GraphicsMagick

echo "Cloning $1 at $2"

git pull origin master
git checkout `git rev-list -n 1 --before="$2" origin/master`
