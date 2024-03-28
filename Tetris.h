#pragma once
class Tetris
{
public:
	Tetris(int rows,int cols,int left,int top,int blockSize );
	void init();
	void play();
private:
	void keyEven();//不适合公开，因为是play的内部使用的，使用private
	void updateWindow();
	//第一次调用函数，返回0
	int getDelay();//返回距离上一次调用该函数，间隔了多少时间
	void drop();
	void clearLine();
  
private:
	//私有数据成员
	int delay;
	bool update;//是否更新
};

