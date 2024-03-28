#include "Tetris.h"

Tetris::Tetris(int rows, int cols, int left, int top, int blockSize)
{
}

void Tetris::init()
{
	delay = 30;
}

void Tetris::play()
{
	init();
	int timer = 0;
	while (1){
	/*	//首先接受用户输入
		keyEven();
		//再渲染游戏画面
		updateWindow();
		这种每输入就一次渲染对cpu负荷较大
		使用另一种方法
	*/
		keyEven();
		timer += getDelay();
		//keyEven函数只在play中使用，就设为私有;
		if (timer > delay) {

			//渲染游戏画面
			drop();
			timer = 0;
			update = true;
		}
		if (update)
		{
			update = false;
            updateWindow();
		}
		

	}
}

void Tetris::keyEven()
{
	update = true;
	//to do.开始做
}

void Tetris::updateWindow()
{

}

int Tetris::getDelay()
{

	return 0;
}

void Tetris::drop()
{
}

void Tetris::clearLine()
{
}
