/*
开发日志 
1.创建项目
2.导入素材
3.c++开发
4.设计c++项目模块，设计类
模块设计：方块类（block）,表示方块
          游戏类(tetris)，表示游戏
5. 设计各个模块的主要接口(想到什么就写什么笑）
6.启动游戏
第一节课完成
*/
#include "Tetris.h"
int main()
{
	Tetris game(20, 10, 163, 133, 36);
	game.play();
	return 0;
}